#include <iostream>
// nie deklaruj zmiennych globalnie!!!
int x;
int main()
{
    std::cout << "Który wyraz ciągu?" << std::endl;
    std::cin >>  x;
    int y = 9+(x-1)*7;//format
    std::cout << x << " Wyraz ciągu to " << y;

    return 0;
}
//Ogólnie to te zadanie trochę za krótkie, żeby je mocno zmieniać,
//mógłbyś to teoretycznie wyciągnąć z main'a do jakiejś innej funkcji
//i ją z tamtego miejsca wykonać, no ale to takie czepianie się,
//dlatego że tak jest poprawnie w dużych projektach :)
