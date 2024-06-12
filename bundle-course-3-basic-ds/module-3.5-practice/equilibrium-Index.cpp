#include <bits/stdc++.h>
using namespace std;
int findEquilibriumIndex(vector<int>& numbers) {
    int totalSum = 0;
    int leftSum = 0;

    // calculate the total sum of the array
    for(int num: numbers) {
        totalSum += num;
    }

    // iterate the array for equilibria index
    for(int i=0; i < numbers.size(); i++) {
        // left sum - current index - total sum
        if(leftSum == (totalSum - leftSum - numbers[i])) {
            return i;
        }
        leftSum += numbers[i];
    }
    return -1;
}

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int equilibriumIndex = findEquilibriumIndex(a);
    cout << equilibriumIndex << endl;
    return 0;
}