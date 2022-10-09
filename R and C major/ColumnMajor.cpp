
#include <string>
#include <iostream>
using namespace std;

int ColumnMajor(int n, int SizeOf_I, int SizeOf_S)
{
    int slot = 0;
    int product = 1;
    int I[SizeOf_I];
    int S[SizeOf_S];

    // Sum
    for (int i = 0; i <= n - 1; i++)
    {

        // Product
        for (int s = i; s <= n - 2; s++)
        {
            product = product * S[s];
        }

        slot = slot + (I[i] * product);
    }

    return slot;
}

int main()
{

    int Result = ColumnMajor(3, 3, 3);
    return 0;
}