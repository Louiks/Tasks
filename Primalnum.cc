#include <iostream>
void findPrimal(int x)
{
    if(x <= 1)
    {
        std::cout << "NIE" <<std::endl;
    }
    int i;
    for(i = x-1; i >= 2; i--)
    {
        if(x % i == 0)
        {
            std::cout<< "NIE" << std::endl;\
            break;
        }
        else if (i == 2 && x%i != 0)
        {
            std::cout<<"TAK" << std::endl;
            break;
        }
    }
}
int main ()
{    
    unsigned int x;
    std::cin>> x;
    findPrimal(x);
    return 0;
}