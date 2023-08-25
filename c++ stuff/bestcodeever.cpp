#include <iostream>
#include <cmath>

int main()
{
    int x1 = 0;
    int x2 = 100;
    int rows = 3;
    int collumns = 5;
    int x1add = 0;
    int x2add = 0;

    while (true)
    {
        for (int a = 0; a != rows; a++)
        {
            for (int j = 0; j != x1; j++)
            {
                std::cout << " ";
            }
        
            for (int i = 0; i != collumns - 1; i++)
            {
                std::cout << "#";
            }
            for (int b = 0; b != x2 - 1; b++)
            {
                std::cout << " ";
            }
            for (int h = 0; h != collumns - 1; h++)
            {
                std::cout << "#";
            }
        
        
        std::cout << "\n";
        }
        if (x1 == 52 - rows)
        {
            x1add = -1;
            x2add = 2;
        }
        else if (x1 == 0)
        {
            x1add = 1;
            x2add = -2;
        }
        x1 += x1add;
        x2 += x2add;
        
    }
    
    
    
    
    
    
    
    
    

 
    return 0;
}