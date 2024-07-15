#include <bits/stdc++.h>
using namespace std;
// FIFO
// delete from front 
// add in rear or back

/**
 * This function
 * push() insert at element at the back of the queue
 * pop() remove an element at the front of the queue
 * front() returns the first element of the queue
 * back() returns the last element of the queue
 * size returns the number of elements of the queue
 * empty() returns true if the queue is empty
 */

int main() {
    int n;
    cin >> n;
    queue<int> q;
    // read input
    for(int i = 0; i < n; i++) { // 10 20 30 40 50
        int x;
        cin >> x;
        q.push(x);
    }

    // outpu
    while (!q.empty()) { // 10 20 30 40 50
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}