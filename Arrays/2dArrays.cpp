#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    // No of Rows and Column
    int row, column;
    cout << "Enter Size of rows : \n";
    cin >> row;
    cout << "\n Enter Total Columns : \n";
    cin >> column;

    // Dynamic 2D array
    int **array = new int *[row];

    // Taking input
    for (int i = 0; i < row; i++)
    {
        array[i] = new int[column];
        for (int j = 0; j < column; j++)
        {
            cout << "Enter value of"
                 << " Row " << (i + 1) << " column " << (j + 1) << " : ";
            cin >> array[i][j];
        }
    }

    // Displaying Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "\n"; // new line
            cout << "array at [" << i << "] [" << j << "] == " << array[i][j] << "\n";
        }
    }

    return 0;
}