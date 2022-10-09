
#include <string>
#include <iostream>
using namespace std;

int RowMajor(int n, int SizeOf_I, int SizeOf_S)
{
    int slot = 0;
    int I[SizeOf_I];
    int S[SizeOf_S];
    int Product[n - 1];

    // Product
    int product = 1;

    // Reverse loop
    // Storing all the products in Product array
    // if n=3 Product = {s1*s2 , s2 }
    for (int j = n - 1; j >= 1; j--)
    {
        product = product * S[j];
        Product[j] = product;
    }

    // Sum
    for (int i = 0; i <= n - 1; i++)
    {
        slot = slot + (I[i] * Product[i]);
    }

    return slot;
}

int main()
{

    int Result = RowMajor(3, 3, 3);

    return 0;
}