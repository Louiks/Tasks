#include <iostream>

int main()
{
    int x = 99;
    int y;
    std::cout << "Take points between 1 and 5 and try to beat your opponent by forcing him to pick last points, game starts at 99 points." << std::endl;
    while (x != 0)
    {
        
        std::cin >> y;
        x -= y;
        switch ()
        {
        case 1: 
        y == 5;
            break;
        case 2:
        y == 4;
        x -= 1;
            break;
        case 3:
        y == 3;
        x -= 2;
            break;
        case 4:
        y == 2;
        x -= 1;
            break;
        case 5:
        y == 1;
        x -= 0;    
            break;
        case 6:
        y == 0;
            break;        

        default:
            break;
        }
    }
    
    return o;
}