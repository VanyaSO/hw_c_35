#include <iostream>
using namespace std;
#include "./Shared_ptr.h"

int main()
{
    int* value = new int(12);
    {
        Shared_ptr<int> ap1(value);
        Shared_ptr<int> ap2 = ap1;
        {
            Shared_ptr<int> ap3 = ap2;
        }
        cout << ap1.get() << endl;
        cout << *(ap2.get()) << endl;
    }
    cout << *value;

    cout << endl;
    cout << endl;
    cout << endl;

    int* valueD = new int(1000);
    {
        shared_ptr<int> ap1D(valueD);
        shared_ptr<int> ap2D = ap1D;

        {
            shared_ptr<int> ap3D = ap2D;

        }
        cout << ap1D.get() << endl;
        cout << *(ap2D.get()) << endl;
    }
    cout << *valueD;



    return 0;
}