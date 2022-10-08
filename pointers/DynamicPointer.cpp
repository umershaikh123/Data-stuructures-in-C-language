
#include <string>
#include <iostream>
using namespace std;

int main()
{

    /* New return address of allocated eap memory
     address is stored in a poiter name (array)
     Stack : *array  , address = 2000

     array = pointing to address 5000 in heap , &array = 2000 (stack address)

     Heap : array[0] value : garbage || address : 5000
            array[1] value : garbage || address : 5004
            array[2] value : garbage || address : 5008
            array[3] value : garbage || address : 5012
            array[4] value : garbage || address : 5016 */
    int *array = new int[5];

    /* In c++ we can modify the array in 2 ways
     Access/modify  Directly in the heap memory , array[i] */
    for (int i = 0; i < 5; i++)
    {
        array[i] = i;
        cout << " &array[i] = " << &array[i] << "\n array[i] = " << array[i] << endl;
        // ERROR *array[i]
    }

    /* Access/modify Directly through pointer *array in stack
      array + 1 will point to the next address of array index */
    for (int i = 0; i < 5; i++)
    {

        array = array + 1;
        cout << "array = " << array << endl;
        cout << "*(array) = " << *(array) << endl;
    }

    return 0;
}
