#include <iostream>
#include <cmath>

int main() {

    char foc;
    double c;
    double f;
    bool error;

    std::cout << "celcius or fahrenheit (c/f) ";
    std::cin >> foc;

    if (foc == 'c')
    {
        std::cout << "how much celcius do you want to convert to fahrenheit? ";
        std::cin >> c;

        f =  c*(9/5) +32;
        std::cout << "that amount of celcius is " << f << " fahrenheit";
    }
    else if (foc == 'f')
    {
        std::cout << "how much fahrenheit do you want to convert into celcius? ";
        std::cin >> f;

        c = (c-32) * 5/9;
        std::cout << "that amount of fahrenheit is " << c << " celcius";

    }
    else{
        std::cout << "please enter a number next time";
        error = true;
    }

    return 0;
}