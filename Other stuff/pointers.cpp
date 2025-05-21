#include <iostream>
using namespace std;

int main() {
    int a = 10;        // Normal integer variable
    int* ptr = &a;     // Pointer to 'a', stores the memory address of 'a'

    cout << "Address of a: " << &a << endl; // Print the address of 'a'
    cout << "Value of ptr: " << ptr << endl; // Print the address stored in ptr
    cout << "Value pointed to by ptr: " << *ptr << endl; // Dereference ptr to get the value of 'a'


    int b=10;
    int* ptr2 =&b;
    int val =*ptr2;

    return 0;
}
