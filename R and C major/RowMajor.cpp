
#include <string>
#include <iostream>
using namespace std;

int RowMajor()
{
    int slot = 0;
    int product = 1;
    int n;

    // Input N
    cout << "Enter Total Number of Dimentions 'N' : \n";
    cin >> n;
    cout << "N = " << n << endl;

    int *S = new int[n];
    int *I = new int[n];

    // Input Sizes
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Size " << i << " of the array :" << endl;
        cin >> S[i];
        cout << "S" << i << " = " << S[i] << endl;
    }

    // Input Indexes at run time to determine the which index to access
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Indes " << i << " of the array :" << endl;
        cin >> I[i];
        cout << "I" << i << " = " << I[i] << endl;
    }

    // Calculate slot
    for (int i = 0; i <= n - 1; i++)
    {

        product = 1;
        for (int s = i + 1; s <= n - 1; s++)
        {
            product = product * S[s];
            cout << "Product = " << product << endl;
        }

        slot = slot + (I[i] * product);
        cout << "slot = " << slot << endl;
    }

    cout << "Total Slot = " << slot;

    // int formula =Base Address of N-Array (slot * sizeof(int));

    return slot;
}

int main()
{

    // Hard code n-array , n for loops
    // Write data into it
    // Calculate index through RowMajor Technique
    int Result = RowMajor();

    return 0;
}