#include <iostream>
#include "iter.hpp"

void    print(std::string s)
{
    std::cout << s << std::endl;
}

int main( void )
{
    std::string words[5] = {
        "hello",
        "Hi",
        "Welcome",
        "ohh",
        "F***"
    };
    iter(words, 5, print);
    return (0);
}