#include <iostream>

int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
int x;

void myFunct()
{
    int y = array[x] % 2;
    x++;
    if (y ==0)
    {
        std::cout << array[x] << " jest nieparzyste" << std::endl;
        
    }
    else 
    {
        std::cout << array[x] << " jest parzyste"<< std::endl;
    }
}


int main()
    {
    for( x; x<10; myFunct());


        return 0;
    }