
#include <string>
#include <iostream>
using namespace std;

int ColumnMajor()
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

    int c = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << "Enter Indes " << i << " of the array :" << endl;
        cin >> I[i];
        cout << "I" << c << " = " << I[i] << endl;
        c++;
    }

    // Sum
    for (int i = 0; i <= n - 1; i++)
    {

        // Product
        product = 1;
        for (int s = i; s <= n - 2; s++)
        {
            product = product * S[s];
            cout << "Product = " << product << endl;
        }

        slot = slot + (I[i] * product);
        cout << "slot = " << slot << endl;
    }

    cout << "Total Slot = " << slot;
    return slot;
}

int main()
{

    int Result = ColumnMajor();
    return 0;
}