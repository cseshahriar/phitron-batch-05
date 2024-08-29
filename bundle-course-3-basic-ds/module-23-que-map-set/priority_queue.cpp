#include <bits/stdc++.h>
using namespace std;
/**
0 10
0 20
0 5
2
1
0 100
1
0 5
1
0 8
2
3
 */
int main() {
    // priority_queue<int> pq;  // max heap
    priority_queue<int, vector<int>, greater<int>> pq;  // min heap
    while (true)
    {
        int c;
        cin >> c;
        if(c == 0) {
            int x;
            cin >> x;
            pq.push(x); // o(log(n))
        }
        else if( c == 1) {
            pq.pop(); // // o(log(n))
        } else if(c == 2) {
            cout << pq.top() << endl; // o(1)
        } else {
            break;
        }
    }
    return 0;
}