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

void myFunc(int x, int y, int b)
{
   
    if (x % y)
    {
        b = x % y;
        y = b;
    }    
    else
    {   b = x;
        x = y;
        y = b % y;
    }
}

int main()
{
    int x;
    int y;
    int b;
    xD ( x, y);
    std::cout << "Podaj dwie zmienne " << std::endl;

    std::cin >> x >> y;
    
    while () 
    {
     myFunc(x, y, b);   
    }

    std::cout << "nwd to " << b <<std::endl;

    return 0;//btw zmieniłem adres zamieszkania

}