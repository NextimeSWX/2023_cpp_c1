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
            //std::cout << i << "\n";
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
    std::string str;
    
    getline(std::cin, str, '\0');
    auto iter{str.begin()};
    if (argc == 3) {
        while (iter != str.end()) {
            if (verif(*iter, argv[1]) >= 0) {
                str[i] = argv[2][verif(*iter, argv[1])];
            } else {
                str[i] = str[i];
            }
            iter += 1;
            i += 1;
        }
        std::cout << str << "\n";
    }
    return (-1);
}