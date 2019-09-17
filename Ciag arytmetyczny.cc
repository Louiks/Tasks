#include <iostream>
int x;
int main()
{
    std::cout << "Który wyraz ciągu?" << std::endl;
    std::cin >>  x;
    int y = 9+(x-1)*7;
    std::cout << x << " Wyraz ciągu to " << y;

    return 0;
}