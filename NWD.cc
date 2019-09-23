#include <iostream>


void myFunc(int x, int y, int a)
{
    a = x % y;
    for (; a != 0; y = a)
    {}
    

}

int main()
{
    int x, y, a;
std::cin >> x >> y;
myFunc(x,y,a);
std::cout << "NWD to " << y << std::endl;

    return 0;
}