#include <iostream>
#include <cmath>
int main(){
    srand(time(NULL));
    int num = (rand() % 6)+ 1;
    int guessednum;
    std::cout << num;
    std::cout << "guess the number: ";
    std::cin >> guessednum;
    if (guessednum == num)
    {
        std::cout << "you won";
    }
    else
    {
        std::cout << "you lost. the number was: ";
        std::cout << num;
    }
    return 0;
}