#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 2;
    int *p ;
    p = &n;
    cout << *p << p << endl;
    *p = 0;
    cout << *p << p << endl;
    return 0;
}
