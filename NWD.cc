//#include <iostream>
//
//
//int main()
//{
//    int x, y, a;
//    std::cin >> x >> y;
//
//    a = x % y;
//    while (a != 0)
//    {
//        x = y;
//        y = a;
//        a = x % y;
//
//    }
//    std::cout << "NWD to jest " << y << std::endl;
//
//    return 0;
//
//}



#include <iostream>


int myFunc(int x, int y, int a)
{

    a = x % y;
    while (a != 0)
    {
        x = y;
        y = a;
        a = x % y;

    }
    return y;
}

int main()
{
    int x, y, a;
    std::cin >> x >> y;
    std::cout << "NWD to jest " <<  myFunc(x, y, a) << std::endl;


    return 0;
}