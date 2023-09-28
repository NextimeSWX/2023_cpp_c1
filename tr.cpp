#include <iostream>
#include <list>
#include <string>
#include <vector>

int verif(char token, std::string argv)
{
    int i = 0;

    auto iter{argv.begin()};
    while (iter != argv.end()) {
        if (token == *iter) {
            return (i);
        }
        iter += 1;
        i += 1;
    }
    return (-1);
}

int main(int argc, char **argv)
{
    int         i{0};
    int         j{0};
    std::string str;

    if (argc!= 3) {
        return (-1);
    }
    while (std::getline(std::cin, str)) {
        auto iter{str.begin()};
        i = 0;
            while (iter != str.end()) {
                j = verif(*iter, argv[1]);
                if (j >= 0) {
                    str[i] = argv[2][j];
                }
                iter += 1;
                i += 1;
            }
            std::cout << str << "\n";
    }
    return (0);
}