#include <iostream>
#include <cmath>

int main(){
    std::string name;
    int age;
    bool error1;
    bool error2;
    error1 = true;
    error2 = true;
    while (error1)
    {
        std::cout << "whats your name? ";
        std::getline(std::cin >> std::ws, name);
        if (name.length() < 21)
        {
            error1 = false;
        }
        else
        {
            std::cout << "your name is too long"<< std::endl;
        }
        
    }
    

    while (error2)
    {
        std::cout << "how old are you? ";
        std::cin >> age;
        if (age < 101)
        {
            error2 = false;
        }
        else
        {
            std::cout << "you are too old for this site" << std::endl;
        }
        
    }
    

    name.append("@gmail.com");
                name.insert(0,"@");
                name.erase(3,4);
                std::cout << "hello " << name << ". you are " << age << " years old." << std::endl;
                std::cout << name.at(0);
                std::cout << name.find('e');
    


    return 0;
}