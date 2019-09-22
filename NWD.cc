#include <iostream>


void myFunc(int x, int y, int a)
{
    if (x < y)
    {
        for(int a = x; y % a != 0; a--){}
    }
    else
    {
        for(int a = y; x % a != 0; a--){}
    }

}

int main()
{
    int x, y, a;
std::cin >> x >> y;
myFunc(x,y,a);
std::cout << a;

    return 0;
}