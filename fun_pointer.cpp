#include <iostream>
#include <conio.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char const *argv[])
{

    int a = 6;
    int b = 7;

    swap(&a, &b);
    cout << a << " " << b << endl;
}
