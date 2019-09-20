#include <iostream>

//nie deklaruj zmiennych globalnie
int array[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
int x;

void myFunct() //mało intuicyjna nazwa funkcji
{
    int y = array[x] % 2;
    
    if (y ==0) // format
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
    {//indent
    for( x=0; x<9; myFunct()); // co tu się dzieje? w for deklaruj zmienną i potem ją iteruj, w jej ciele wykonuj funkcję

        return 0;
    }

/* moja wersja
#include <iostream>

//funkcja zwraca parzystość liczby
bool IsEven(int number)
{
    return !(number % 2); // to samo co: y = number % 2; y == 0;
}

int main()
{
    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i = 0; i < 9; i++)
    {
        if(IsEven(array[i])
            std::cout << array[i] << " jest liczbą parzystą" << std::endl;
        else 
            std::cout << array[i] << " jest liczbą nieparzystą" << std::endl;
    }
    return 0;
}
*/
