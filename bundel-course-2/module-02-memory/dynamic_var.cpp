#include <istream>
#include <bits/stdc++.h>

using namespace std;

int * fun() { // return a pointer
    int *a = new int; // dynamic
    *a =  100; // de reference
    return a;
    
}

int main() {
    int x = 10; // 4 byte /static

    int *a = new int; // dynamic
    // int * a static and new int dynamic 
    *a =  10; // de reference
    cout << *a << endl;
    
    float *f = new float;
    *f = 1.531;
    cout << *f << endl;

    int *p = fun();
    cout << p << endl; 

    return 0;
}