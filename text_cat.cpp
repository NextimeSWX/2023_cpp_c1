#include <iostream>
#include <string>

int main(void)
{
    std::string str;

    while (std::cin >> str) {
        std::cout << str << "\n";
    }
    return 0;
}