

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 5;
    int b = 2;

    //1
    //int c = a;
    //a = b;
    //b = c;
    ////2
    /*a = a + b;
    b = a - b;
    a = a - b;*/
    //3
    a = a - b;
    b = a + b;
    a = a + b;

    cout << "a = " + to_string(a) << "b = " + to_string(b);

    
}

