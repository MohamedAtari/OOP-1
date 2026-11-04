#include <iostream>

using namespace std;

class clsPerson {

private:

    string _FirstName;

public:

    //Property Set
    void SetFirstName(const string& FirstName) {
        _FirstName = FirstName;
    }

    //Property Get
    string GetFirstName() {
        return _FirstName;
    }

    _declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;

};

int main()
{

    clsPerson Person1;

    Person1.SetFirstName("Mohamed");
    cout << Person1.GetFirstName();

    //instead of the above we only write this

    Person1.FirstName = "Mohamed";
    cout << Person1.FirstName;

    system("pause>0");
    return 0;
}
