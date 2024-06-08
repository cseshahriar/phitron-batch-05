#include <bits/stdc++.h>
using namespace std;

class FrequencyCount {
    public:
        char value;
        int count;
};

bool cmp(FrequencyCount a, FrequencyCount b) {
    if(a.count == b.count) { // asc
        return a.value < b.value;
    } else {
        return a.count > b.count;
    }
}


int main() {
    string s;
    cin >> s;

    FrequencyCount frequencyCount[26];
    // initialization zero
    for(char i = 0; i < 26; i++) {
       frequencyCount[i].value = char(i + 'a');
       frequencyCount[i].count = 0;
    }

    for(char c: s) {
        int ascii = int(c - 'a');
        frequencyCount[ascii].count++;
    }

    sort(frequencyCount, frequencyCount + 26, cmp);

    //output
    for(char i = 0; i < 26; i++) {
        if(frequencyCount[i].count > 0) {
            for(int j = 0; j < frequencyCount[i].count; j++) {
                cout << frequencyCount[i].value;
            }
        }
    }
    cout << endl;
    return 0;
}