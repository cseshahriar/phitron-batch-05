#include <bits/stdc++.h>
using namespace std;
// namespace is a group
// namespace a class raka jay

namespace Shosen {
    int age = 25;
    void hello() {
        cout << "Hello from namespace";
    }
}

namespace Salpin {
    int age2 = 25;
    void hello2() {
        cout << "Hello from namespace";
    }
}

using namespace Shosen;
int main() {
    cout << age << endl;
    return 0;
}