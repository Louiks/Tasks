#include <iostream>

void xD(int x, int y)
{
    int c;
    if (x > y)
    {}
    else 
    {
        c = x;
        x = y;
        y = c;
    }

}    

void myFunc(int x, int y)
{
    while (x % y != 0)
    {
        y = x % y;
    
    }
}

int main()
{
    int x;
    int y;
    
    std::cout << "Podaj dwie zmienne " << std::endl;

    std::cin >> x >> y;
    xD ( x, y);
    myFunc(x , y);

    std::cout << "nwd to " << y <<std::endl;

    return 0;

}