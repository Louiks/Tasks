#include <iostream>

void myFunc (int x, int y, int a)
{
    while (a != 0)
    {
        x = y;
        y = a;
        a = x % y;

    }
}

int main()
{
    int x, y, a;
    std::cin >> x >> y;

    a = x % y;
    myFunc(x, y, a);
    std::cout << "NWD to " << y << std::endl;

    return 0;
}