#include <bits/stdc++.h>
using namespace std;

int main() {
    // initialize
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // print vector properties
    cout << " size " << v.size() << endl;
    cout << " capacity " << v.capacity() << endl;
    cout << " max size " << v.max_size() << endl;
    
    // resize
    v.resize(20, 0);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << std::endl;
    for(int i:v)
        cout << i << " ";
    cout << endl;

    // Clear the vector elements
    v.clear();

    // Print size and capacity after clearing
    cout << "\nAfter clearing the vector:" << std::endl;
    cout << "Size: " << v.size() << std::endl;
    cout << "Capacity: " << v.capacity() << std::endl;

    // Check if the vector is empty
    std::cout << "\nIs the vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    // Resize the vector back to its original size (10) and fill with the value 100
    v.resize(10, 100);

    // Print the size, capacity, and elements of the vector after resizing
    cout << "\nAfter resizing back to 10 elements with value 100:" << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Elements: ";
    for (const int& value : v) {
        cout << value << " ";
    }
    cout << std::endl;
    return 0;
}