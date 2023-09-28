#include <iostream>
#include <list>
#include <string>
#include <vector>

int verif(char token, std::string argv)
{
    auto iter{argv.begin()};
    while (iter != argv.end()) {
        if (token == *iter) {
            return (1);
        }
        iter += 1;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int         i{0};
    int         j{0};
    std::string str;

    while (std::getline(std::cin, str)) {
        auto iter{str.begin()};
        if (argc == 2) {
            while (iter != str.end()) {
                j = verif(*iter, argv[1]);
                if (j == 1) {
                    str.erase(iter);
                } else {
                    str[i] = str[i];
                    iter += 1;
                    i += 1;
                }
            }
            std::cout << str << "\n";
        }
    }
    return (0);
}