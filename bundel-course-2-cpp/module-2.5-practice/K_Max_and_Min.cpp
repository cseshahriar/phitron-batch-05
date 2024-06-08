#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int max = INT_MIN;
    int min = INT_MAX;
    int n = 3;
    long long int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(x[i] > max)
            max = x[i];

        // min
        if(x[i] < min)
            min = x[i];
    }
    cout << min << " " << max << endl;
    return 0;
}