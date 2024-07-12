#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    queue<string> myQueue;

    for(int i = 0; i < q; i++) {
        int str;
        cin >> str;
        if(str == 0) {
            string name;
            cin >> name;
            myQueue.push(name);
        } else if(str == 1) {
            if(myQueue.empty()) {
                cout << "Invalid" << endl;
            } else {
                cout << myQueue.front() << endl;
                myQueue.pop();
            }
        }

    }
    return 0;
}