#include <iostream>

std::string foo(string str)
{
   printf("foo:str %s is at %x", str, &str);
}

std::string bar(string* str)
{
   printf("bar:str %s is at %x", *str, str);
}

int main() {
    using namespace std;
    
   string hello1 = "Hello, World!";
   cout << hello1 <<endl;

   printf("hello1 is at %x", &hello1);
   printf("main:str %s is at %x", hello1, &hello1);
    foo(hello1);
    bar(&hello1);

    return 0;
}


