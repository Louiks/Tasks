#include <iostream>
using namespace std;// tego tu nie powinno być XD, do wyjebania 
//niepotrzebne zmienne globalne, powinny być w skopie wunkcji myFunc
unsigned long long z = 0;
unsigned long long y = 1;
unsigned long long x;
int counter = 1;
//------------------------------------------------------------------
//brakuje tu miejsc przerwy między includami i zmiennymi, między funkcjami powinien być też jeden wiersz wolnej przestrzeni
int myFunc()//napisz co robi ta zmienna, btw program się nie kompiluje, bo funkcja nie zwraca liczby XD
    {//tutaj jeden indent za dużo :)
     while(counter < 100)//tu można w sumie wrzucić fora
        {//tu też, zaczynaj nawiasy w tej samej kolumnie, tak jak masz w int main()
            x = z + y;
            cout << x << endl;
            z = y;
            y = x;
            counter = counter + 1;
        }

    }
int main()
{
    //to wypisanie tych dwóch zmiennych powinno być w środku funkcji 
    cout << z << endl;
    cout << y << endl;
    myFunc();
    return 0;

    //niepotrzebne miejsca wolne

}

//moja wersja poprawionego zadania:

/*
#include <iostream>


void fibonacciSequence(int amount)
{
    unsigned long long z = 0;
    unsigned long long y = 1;
    unsigned long long x;

    amount -= 2;// tu poprawka na ilość wypisywanych liczb
    std::cout << z << std::endl;
    std::cout << y << std::endl;
    for(int i = 0; i < amount; i++)
    {
        x = z + y;
        std::cout << x << std::endl;
        z = y;
        y = x;
    }
}

int main()
{
    fibonacciSequence(10);

    return 0;
}
*/
