#include <iostream>
#include <string>
using namespace std;

/*
    Arrays are a collection of elements (of the same type) identified by index/key.
    An element is essentially a value of some data type.
    Array != List
    Once an array is defined, the size cannot be changed.
*/

int main(){
    // initialize an array with int type and size 5
    int arr[5] = {4, 7, 1, 3, 9};

    cout << arr << endl; // outputs the location of this data in the computer's memory

    cout << arr[2] << endl; // accesses the element at index 2 in arr

    arr[0] = 3; // changes the element in index 0 to the value of 3

    cout << arr[0] << endl; // outputs 3

    cout << sizeof(arr) << endl; // returns the size of bytes of an array
}