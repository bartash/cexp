#include <iostream>

std::string foo( std::string str)
{
    std::printf("foo:str %s is at %x", str, &str);
}

std::string bar( std::string* str)
{
    std::printf("bar:str %s is at %x", *str, str);
}

int main() {
    std::string hello1 = "Hello, World!";
    std::cout << hello1 << std::endl;

    std::printf("hello1 is at %x", &hello1);
    std::printf("main:str %s is at %x", hello1, &hello1);
    foo(hello1);
    bar(&hello1);

    return 0;
}


