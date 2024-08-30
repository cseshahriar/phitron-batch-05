#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read the number of initial elements
    int n;
    cin >> n;

    // Priority queue for min-heap (inverted values to use max-heap implementation)
    priority_queue<long long int, vector<long long int>, greater<long long int>> pq;


    // Insert initial elements into the min-heap
    for (int i = 0; i < n; ++i) {
        long long int value;
        cin >> value;
        pq.push(value);
    }

    // Number of queries
    int q;
    cin >> q;

    while (q--) {
        int c;
        cin >> c;

        if (c == 0) {
            long long int x;
            cin >> x;
            pq.push(x); // Insert x into the min-heap and print the minimum
            cout << pq.top() << endl;
        } else if (c == 1) {
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << pq.top() << endl; // Print the current minimum
            }
        } else if (c == 2) {
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                pq.pop(); // Remove the minimum value from the heap
                if (pq.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << pq.top() << endl; // Print the new minimum
                }
            }
        }
    }

    return 0;
}
