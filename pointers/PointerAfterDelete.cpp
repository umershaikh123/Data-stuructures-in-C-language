
#include <string>
#include <iostream>
using namespace std;

int main()
{

    // declare an int pointer
    int *pointInt;

    // declare a float pointer
    float *pointFloat;

    // dynamically allocate memory
    pointInt = new int;
    pointFloat = new float;
    cout << "NEW INITIALIZE WITH point int value = " << *pointInt << endl;

    // assigning value to the memory
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << "Before" << endl;
    cout << "point int value = " << *pointInt << " pointer int content address = " << pointInt << "  pointer int address &p = " << &pointInt << endl;
    cout << "point float value = " << *pointFloat << " pointer float content address = " << pointFloat << "  pointer float address &p = " << &pointFloat << endl;

    // deallocate the memory
    delete pointInt;
    delete pointFloat;

    cout << "After" << endl;
    cout << "point int value = " << *pointInt << " pointer int content address = " << pointInt << " pointer int address &p = " << &pointInt << endl;
    cout << "point float value = " << *pointFloat << " pointer float content address = " << pointFloat << " pointer float address &p = " << &pointFloat << endl;

    return 0;
}
