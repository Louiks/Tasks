#include <iostream>
using namespace std;
unsigned long long z = 0;
unsigned long long y = 1;
unsigned long long x;
int counter = 1;
int myFunc()
    {
     while(counter < 100)
        {
            x = z + y;
            cout << x << endl;
            z = y;
            y = x;
            counter = counter + 1;
        }

    }
int main()
{

    cout << z << endl;
    cout << y << endl;
    myFunc();
    return 0;



}