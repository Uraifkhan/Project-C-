#include <iostream>
#include <string>
int main (){
   
    int Option;
    int Quantity;
    float Price;
    std::cout << "Welcome to our application" << '\n';
    std::cout << "|| 1. pineapple = 1.50 $ ||" << '\n';
    std::cout << "|| 2. coconut = 2.00 $  ||" << '\n';
    std::cout << "|| 3. Apple = 1.00 $   ||" << '\n';
    std::cout << "|| 4. Orange = 1.50 $ ||" << '\n';
    std::cout << "|| 5. Lemon = 2.60 $ ||" << '\n';
    std::cout << "What you want: ";
    std::cin >> Option;
    if (Option >= 6 ) {
        std::cout << "Request denied" << '\n';
    }
    else {
    std::cout << "How many glass you take: ";
    std::cin >> Quantity;
    }
    switch(Option){
        case 1:
        std::cout << "Your bill for " << Quantity << " glass is "  << 1.500 * Quantity << " $ "  << '\n';
        std::cin >> Price;
        if (1.500 * Quantity != Price){ 
            std::cout << "***** Amount Invalid Not accepted *****" << '\n';
        } else {
        std::cout << "We are happy to serve you !!" << '\n';
        }
        break;
        case 2:
        std::cout << "Your bill for " << Quantity << " glass is "  << 2.000 * Quantity << " $ "  << '\n';
        std::cin >> Price;
         if (2.000* Quantity != Price){ 
            std::cout << "***** Amount Invalid Not accepted *****" << '\n';
        } else {
        std::cout << "We are happy to serve you !!" << '\n';
        }
        break;
        case 3:
        std::cout << "Your bill for " << Quantity << " glass is " << 1.000 * Quantity << " $ "   << '\n';
        std::cin >> Price;
         if (1.00 * Quantity != Price){ 
            std::cout << "***** Amount Invalid Not accepted *****" << '\n';
        } else {
        std::cout << "We are happy to serve you !!" << '\n';
        }
        break;
        case 4:
        std::cout << "Your bill for " << Quantity << " glass is "  << 1.500 * Quantity << " $ "  << '\n';
        std::cin >> Price;
         if (1.500 * Quantity != Price){ 
        std::cout << "***** Amount Invalid Not accepted *****" << '\n';
        } else {
        std::cout << "We are happy to serve you !!" << '\n';
        }
        break;
        case 5:
        std::cout << "Your bill for " << Quantity << " glass is "  << 2.60 * Quantity << " $ "  << '\n';
        std::cin >> Price;
        if (1.500 * Quantity != Price){ 
            std::cout << "***** Amount Invalid Not accepted *****" << '\n';
        } else {
        std::cout << "We are happy to serve you !!" << '\n';
        }
    }  
        return 0;
}
