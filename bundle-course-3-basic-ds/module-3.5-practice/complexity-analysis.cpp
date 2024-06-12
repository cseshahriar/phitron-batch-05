#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // complexity
    int k=1;
    while(k<=n) { // o(log n)
        cout << k <<endl;
        k=k*2;
    }
    /*
        The loop variable k is doubling each time, so the loop runs 
        approximately log_2(n) times.
        Time Complexity: 𝑂(log 𝑛)
    */

    for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            cout << i << j;

    /*
    The outer loop runs n times.
    The inner loop starts from i and decrements down to 1, thus iterating i times.
    The total number of iterations is the sum of the first n natural numbers: 
    1+2+3+...+(n−1).
    This sum is 
    𝑛(𝑛−1)/2 ≈ O(n^2).
    */


    for (int i = 0; i < n; i++) // o(n^3)
        for (int j = i; j > 0; j--)
            for(int k=j; k > 0; k--)
                cout << i << j << k;

    /**
        The outer loop runs n times.
        The middle loop runs i times.
        The inner loop runs j times.
        The total number of iterations is the sum of the series , which simplifies to 
        Time Complexity: O(n^3)
    */

    for(int i= n/2; i <= n; i++) {
        for(int j=1; j<=n; j=j*2){
            cout<<i<<j<<endl;
        }
    }
    /*
    The outer loop runs from 𝑛/2 n/2 to n, which is approximately n/2 times.
    The inner loop runs 
    log 2(𝑛)log 2 (n) times since j is doubling each iteration.
    The total number of iterations is n/2 . log_2(n) ~ O (n log n)
​    Time complexity: O(n log n) 
    */
 
    for(int i=n/2;i<=n;i++) {
        for(int j=1;j<=n;j=j+i){
            cout<<i<<j<<endl;
        }
    }
    /*
    The outer loop runs from n/2 to n, which is approximately n/2 times.
    The inner loop depends on i and runs approximately n/i times.
    Time Complexity: 𝑂(𝑛 log 𝑛)
    */

    // Overall Time Complexity: O(n^3)
    return 0;
}