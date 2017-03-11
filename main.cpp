#include <iostream>

using namespace std;

std::string foo(string str)
{
    cout << "foo:str '" << str << "' is at " << &str << endl;
}

std::string bar(string* str)
{
    cout << "bar:str '" << *str << "' is at " << str << endl;
}

int main() {

    
   string hello1 = "Hello, World!";
   cout << hello1 <<endl;

    cout << "main:str '" << hello1 << "' is at " << &hello1 << endl;
    foo(hello1);
    bar(&hello1);

    return 0;
}


