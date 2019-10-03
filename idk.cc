#include <iostream>

void myFunc(int x, int y, int p)
{
    int z;
    while (x != y)
    {
        z = x;
        if(z % p != 0)
        {
            while(z > p)
            {
                z = z - p;
                if (z%p == 1)
                {
                    std::cout << x <<" oraz " << p << "to liczby względnie pierwsze" << std::endl;
                }
            }
        }
        if(x < y)
            {x++;}
        else
            {x--;}
        //std::cout << "a" << std::endl;
    }


}

int main()
{
    
    int x, y, p;
    std::cout << "nadaj wartosc x, y oraz p" << std::endl;
    std::cin >> x >> y >> p;
    myFunc(x, y, p);

    
    return 0;
}