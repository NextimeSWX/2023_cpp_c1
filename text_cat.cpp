#include <iostream>

int main(void) 
{
    int nbr;

    if (std::cin >> nbr) {
        std::cout << "nbr contains: " << nbr << "\n";
    } else {
        std::cerr << "no int received\n";
    }
}