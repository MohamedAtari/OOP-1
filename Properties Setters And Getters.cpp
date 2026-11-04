#include <iostream>

using namespace std;

class clsPerson {

private:
    
    //private variables.

    string _FirstName;
    string _LastName;

public:

    //setters and getters.

    void SetFirstName(string FirstName) {

        _FirstName = FirstName;
    }

    string FirstName() {
        return _FirstName;
    }

    void SetLastName(string LastName) {
        _LastName = LastName;
    }

    string LastName() {

         return _LastName;

    }

    string FullName() {

        return _FirstName + " " + _LastName;

    }

};

int main()
{

    clsPerson Person1;

    Person1.SetFirstName("Mohamed");
    Person1.SetLastName("Atari");

    cout << "First Name : " << Person1.FirstName();
    cout << "\nLast Name  : " << Person1.LastName();
    cout << "\nFull Name  : " << Person1.FullName();

    system("pause>0");
    return 0;
}
