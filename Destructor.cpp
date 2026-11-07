#include <iostream>

using namespace std;

class clsPerson {

private:
    string _FullName = "";

public:
    
    clsPerson() {

        _FullName = "Mohamed Atari";
        cout << "\nHi ,im the costructor";

    }

    ~clsPerson() {
        cout << "\nHi ,im the destructor";
    }

};

void Fun1() {
    clsPerson Person1;
}

void Fun2() {
    clsPerson* Person2 = new clsPerson;
    delete Person2;
}

int main()
{

    Fun1();

    Fun2();

    return 0;
}
