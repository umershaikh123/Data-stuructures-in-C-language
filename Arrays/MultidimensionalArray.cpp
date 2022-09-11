#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

// In progress

// n no of loops
// void func(int n){
//     for (int i = 0; i < 3; i++) {
//         if (n ==0) {

//         }
//         else {return func(n-1);}

//     }
// }

int main(void)
{

    // No of Rows and Column

    int n; // n : number of Dimensions
    int si;

    int *size = new int[n]; // Sizes of each dimensions
    for (int i = 0; i < n; i++)
    {
        cout << "\n Enter size " << i + 1 << " : \n";
        cin >> size[i];
    }

    // n Nested loops

    return 0;
}