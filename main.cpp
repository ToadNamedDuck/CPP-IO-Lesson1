#include <iostream>

int main()
{
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    
    if(favorite_number == 69){
        std::cout << "Nice lol";
    }
    else{
         std::cout << "That's my favorite number, too!" << std::endl;
         std::cout << "No, really! " << favorite_number << " is my favorite number!!";   
    }    
    return 0;
}