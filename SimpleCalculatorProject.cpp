#include <iostream>

using namespace std;

class clsCalculator {

private:

    string _LastOperation = "Clear";
    float _Result = 0;
    float _LastNumber = 0;
    float _PreviousResult = 0;

    bool _IsZero(int Number) {
        return (Number == 0);
    }

public:

    void Add(float NumberToAdd) {
        _LastNumber = NumberToAdd;
        _PreviousResult = _Result;
        _Result += NumberToAdd;
        _LastOperation = "Adding";
    }

    void Subtract(int NumberToSubtract) {
        _LastNumber = NumberToSubtract;
        _PreviousResult = _Result;
        _Result -= NumberToSubtract;
        _LastOperation = "Subtracting";
    }

    void Divide(int NumberToDivide) {

        _LastNumber = NumberToDivide;

        if (_IsZero(NumberToDivide))
            NumberToDivide = 1;

        _PreviousResult = _Result;
        _Result /= NumberToDivide;
        _LastOperation = "Dividing";

    }

    void Multyply(int NumberToMultyply) {
        _LastNumber = NumberToMultyply;
        _PreviousResult = _Result;
        _Result *= NumberToMultyply;
        _LastOperation = "Multiplying";
    }

    float GetFinalResult() {
        return _Result;
    }

    void Clear() {
        _LastNumber = 0;
        _PreviousResult = 0;
        _Result = 0;
        _LastOperation = "Clear";
    }

    void CancelLastOperation() {
        _LastNumber = 0;
        _LastOperation = "Cancelling Last Operision";
        _Result = _PreviousResult;
    }

    void PrintResult() {
        cout << "Result ";
        cout << "After " << _LastOperation << " " << _LastNumber << " is: " << _Result << endl;
    }

};

int main()
{

    clsCalculator Calculator1;

    Calculator1.Clear();

    Calculator1.Add(10);
    Calculator1.PrintResult();

    Calculator1.Add(100);
    Calculator1.PrintResult();

    Calculator1.Subtract(20);
    Calculator1.PrintResult();

    Calculator1.Divide(0);
    Calculator1.PrintResult();

    Calculator1.Divide(2);
    Calculator1.PrintResult();

    Calculator1.Multyply(3);
    Calculator1.PrintResult();

    Calculator1.Clear();
    Calculator1.PrintResult();

    system("pause>0");
    return 0;
}
