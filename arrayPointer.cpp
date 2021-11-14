#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    cout << *arr << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << "  ";
        //p++;
    }
}
