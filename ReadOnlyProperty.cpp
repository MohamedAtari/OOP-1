#include <iostream>

using namespace std;

class clsPerson {

private:

    int ID;
    string _FirstName;
    string _LastName;

public:

    //Property Get , this is read only property because we dont have a set function
    int getID() {
        return ID;
    }

    //Property Set
    void setFirstName(const string& FirstName) {
        _FirstName = FirstName;
    }

    //Property Get
    string FirstName() {
        return _FirstName;
    }

    //Property Set
    void setLastName(const string& LastName) {
        _LastName = LastName;
    }

    //Property Get
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

    Person1.setFirstName("Mohamed");
    Person1.setLastName("Atari");

    cout << "ID : " << Person1.getID();
    cout << "\nFirst Name : " << Person1.FirstName();
    cout << "\nLast Name  : " << Person1.LastName();
    cout << "\nFull Name  : " << Person1.FullName();


    system("pause>0");
    return 0;
}
