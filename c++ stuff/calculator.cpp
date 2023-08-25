#include <iostream>
#include <cmath>

int main(){
    double x;
    double y;
    char z;
    double result;
    bool error;

    std::cout << "1st number: ";
    std::cin >> x;

    std::cout << "choose the arithmetic thingy: ";
    std::cin >> z;

    std::cout << "2nd number: ";
    std::cin >> y;

    switch (z)
    {
        case '+':
          result = x + y;
          break;
        case '-':
          result = x - y;
          break;
        case '/':
          result = x / y;
          break;
        case '*':
          result = x * y;
          break;
        default:
          std::cout << "please enter an actual arithmetic symbol (+,-,/,*)0";
          error = true;
          break;
    }
    std::cout << result;

    return 0;
}