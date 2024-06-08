#include <istream>
#include <bits/stdc++.h>

using namespace std;

// stack memory 
// heap memory

int * fun() { // return a pointer
    // int **fun
    int *a = new int; // dynamic
    *a =  100; // de reference
    return a;
    // int **p = &a; // a is also pointer so double pointer
   //  return p;
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

    // fun
    int *p = fun();
    cout << p << endl; 

    return 0;
}