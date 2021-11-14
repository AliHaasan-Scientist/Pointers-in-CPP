#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 12222;
    int *p;
    p = &n;
    cout << p << endl;

    int **q = &p; // store the memory Adress of p
    cout << **q;  //double derefrence.
    return 0;
}
