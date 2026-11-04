#include <iostream>

using namespace std;

class clsPerson {

private:
    int Number;

public:
    string FirstName = "";
    string LastName = "";

    string FullName() {

        return FirstName + " " + LastName;

    }

};

int main()
{

    clsPerson Person1;

    Person1.FirstName = "Mohamed";
    Person1.LastName = "Atari";
    
    cout << Person1.FullName() << endl;

    return 0;
}
