
#include <string>
#include <iostream>
using namespace std;

// first structure
struct test1
{
    short s;
    int i;
    char c;
};

// second structure
struct test2
{
    int i;
    char c;
    short s;
};

// third structure
struct test3
{
    int i;
    int i2;
    short s;
};

// Fourth structure
struct test4
{
    short s;
    char c;
    int i;
};

// Fift structure
struct test5
{
    short s;
    short s2;
    int i;
};

struct test6
{
    char c;
    short s;
    int i;
};

struct test7
{
    char c;
    char c2;
    short s1;
    short s2;
};

struct test8
{
    char c;
    char c2;
    short s1;
    short s2;
    int i;
    int i2;
};

class Ctest1
{

public:
    char c;
    char c2;
    short s1;
    short s2;
};

// driver program

int main()
{
    // test1 t1;
    // test2 t2;
    // test3 t3;
    // test4 t4;
    // test5 t5;
    // test6 t6;
    // test7 t7;
    test7 t8;
    Ctest1 c1;
    // cout << "size of struct test1 is " << sizeof(t1) << "\n";
    // cout << "size of struct test2 is " << sizeof(t2) << "\n";
    // cout << "size of struct test3 is " << sizeof(t3) << "\n";
    // cout << "size of struct test4 is " << sizeof(t4) << "\n";
    // cout << "size of struct test5 is " << sizeof(t5) << "\n";
    // cout << "size of struct test6 is " << sizeof(t6) << "\n";
    // cout << "size of struct test7 is " << sizeof(t7) << "\n";
    cout << "size of struct test8 is " << sizeof(t8) << "\n";
    cout << "size of class c1 is " << sizeof(c1) << "\n";

    return 0;
}
