
#include <string>
#include <iostream>
using namespace std;

// int 0
int ig;
static int sig;
char cg;
float fg;

// local
// garbage in everything
int main()
{
    int il;
    static int sil;
    char cl;
    float fl;

    // printf("global variable initialze with %i \n local varaible initialze with %i", g, s);
    cout << "global int : " << ig << "\n";
    cout << "global static int : " << sig << "\n";
    cout << "global char : " << cg << "\n";
    cout << "global float : " << fg << "\n";

    cout << "Local int : " << il << "\n";
    cout << "Local static int : " << sil << "\n";
    cout << "Local char : " << cl << "\n";
    cout << "Local float : " << fl << "\n";

    return 0;
}
