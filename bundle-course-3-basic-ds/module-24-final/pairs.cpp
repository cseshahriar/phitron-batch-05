#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, long long int>& a, pair<string, long long int>& b) {
    if(a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;

    list<pair<string, long long int>> pairs;

    while(n--) {
        string s;
        long long i;
        cin >> s >> i;
        pairs.push_back({s, i});
    }

    pairs.sort(cmp);

    for(auto it : pairs) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}