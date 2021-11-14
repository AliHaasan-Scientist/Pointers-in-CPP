#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 12222;
    float n2 = 322222;
    void *ptr = NULL;
    ptr = &n;

    cout << ptr << endl;

    ptr = &n2;
    cout << ptr;
    return 0;
}
