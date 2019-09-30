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

void myFunc()
{
    int x, y , a;
    std::cin >> x >> y;

    a = x % y;
    while (a != 0)
    {
        x = y;
        y = a;
        a = x % y;

    }
    std::cout << "NWD to jest " << y << std::endl;
}
int main()
{
    myFunc();

    return 0;
}