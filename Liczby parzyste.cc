#include <iostream>

int array[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
int x;

void myFunct()
{
    int y = array[x] % 2;
    
    if (y ==0)
    {
        std::cout << array[x] << " jest parzyste" << std::endl;
        
    }
    else 
    {
        std::cout << array[x] << " jest nieparzyste"<< std::endl;
    }
    x++;
}


int main()
    {
    for( x=0; x<9; myFunct());


        return 0;
    }