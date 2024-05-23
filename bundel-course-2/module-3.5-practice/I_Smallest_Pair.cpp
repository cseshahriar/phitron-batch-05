#include <bits/stdc++.h>
using namespace std;
/**
 * inputCopy
1
4
20 1 9 4
outputCopy
7
Note
First Case :

All possibles (i,j) where (1  ≤  i < j  ≤  N) are :

i = 1 , j = 2 then result = a1 + a2 + j - i = 20 + 1 + 2-1 = 22.

i = 1 , j = 3 then result = a1 + a3 + j - i = 20 + 9 + 3-1 = 31.

i = 1 , j = 4 then result = a1 + a4 + j - i = 20 + 4 + 4-1 = 27.

i = 2 , j = 3 then result = a2 + a3 + j - i = 1 + 9 + 3-2 = 11.

i = 2 , j = 4 then result = a2 + a4 + j - i = 1 + 4 + 4-2 = 7.

i = 3 , j = 4 then result = a3 + a4 + j - i = 9 + 4 + 4-3 = 14.

So the smallest possible result is 7.
*/
int main() {
    int n, t;
    cin >> t;
    for (int i = 0; i < t; i++) { // test case 
        cin >> n;
        int a[n];
        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }

        for(int i = 0)

    }

    return 0;
}