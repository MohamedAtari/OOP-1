#include<iostream>
#include<string>

using namespace std;

class clsA {

public:

	int var;
	static int counter;

	clsA(){
		counter++;
	}

	void print() {

		cout << "\nVar : " << var << endl;
		cout << "Counter : " << counter << endl;

	}

};

int clsA::counter = 0;

int main() {

	clsA A1, A2, A3;

	A1.var = 10;
	A2.var = 20;
	A3.var = 30;

	A1.print();
	A2.print();
	A3.print();

	A1.counter = 500;
	cout << "\nafter changing the static member in one object";

	A1.print();
	A2.print();
	A3.print();

	system("pause>null");
}