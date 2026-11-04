#include <iostream>

using namespace std;

class clsPerson {

private:

    int Variable1 = 20;

    int Function1() {

        return 40;

    }

protected:

    int Variable2 = 60;

    int Function2() {
        return 40;
    }

public:
    string FirstName = "";
    string LastName = "";

    int Variable3 = 100;

    string FullName() {

        return FirstName + " " + LastName;

    }

    float Function3() {
        return Function1() * Variable1 * Variable2;
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
