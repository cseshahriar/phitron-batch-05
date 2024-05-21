#include <iostream>
using namespace std;

int main() {
    int max = 0;
    int n;
    cin >> n;
    long long int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(x[i] > max)
            max = x[i];
    }
    cout << max << endl;
    return 0;
}