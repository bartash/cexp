#include <iostream>

using namespace std;

void foo(string str)
{
    cout << "foo:str '" << str << "' is at " << &str << endl;
}

void bar(string* str)
{
    cout << "bar:str '" << *str << "' is at " << str << endl;
}

int main() {

    
   string hello1 = "Hello, World!";
   cout << hello1 <<endl;

    cout << "main:str '" << hello1 << "' is at " << &hello1 << endl;
    bar(&hello1);
    foo(hello1);


    return 0;
}


