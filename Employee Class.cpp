#include<iostream>
#include<string>

using namespace std;

class clsEmployee {

private:

	string _FirstName = "";
	string _LastName = "";
	string _Title = "";
	string _Email = "";
	string _Phone = "";
	string _Salary = "";
	string _Department = "";
	int _ID = 0;

public:

	clsEmployee(int ID,const string& FirstName, const string& LastName, const string& Title, const string& Email, const string& Phone, const string& Salary, const string& Department) {

		_FirstName = FirstName;
		_LastName = LastName;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
		_Department = Department;
		_ID = ID;

	}

	int ID() {
		return _ID;
	}

	void SetFirstName(const string &FirstName) {
		_FirstName = FirstName;
	}

	string FirstName() {
		return _FirstName;
	}

	string FullName() {
		return _FirstName + " " + _LastName;
	}

	void SetLastName(const string&LastName) {
		_LastName = LastName;
	}

	string LastName() {
		return _LastName;
	}

	void SetTitle(const string&Title) {
		_Title = Title;
	}

	string Title() {
		return _Title;
	}
	
	void SetEmail(const string&Email) {
		_Email = Email;
	}

	string Email() {
		return _Email;
	}

	void SetPhone(const string&Phone) {
		_Phone = Phone;
	}

	string Phone() {
		return _Phone;
	}

	void SetSalary(const string& Salary) {
		_Salary = Salary;
	}

	string Salary() {
		return _Salary;
	}

	void SetDepartment(const string&Department) {
		_Department = Department;
	}

	string Department() {
		return _Department;
	}

	void SendEmail(const string& Subject, const string& Message) {

		cout << "\n\nThe folowing email sent successfully to email : " << _Email;
		cout << "\n------------------------";
		cout << "\nSubject : " << Subject;
		cout << "\nMessage : " << Message;
		cout << "\n------------------------";


	}

	void SendSMS(const string& Message) {
		cout << "\n\nThe following message sent successfully to phone : " << _Phone;
		cout << "\n------------------------";
		cout << "\nBody : " << Message;
		cout << "\n------------------------";
	}

	void Print() {

		cout << "\nInfo: ";
		cout << "\n____________________";
		cout << "\nID         :" << _ID;
		cout << "\nFirstName  :" << _FirstName;
		cout << "\nLastName   :" << _LastName;
		cout << "\nFullName   :" << FullName();
		cout << "\nTitle      :" << _Title;
		cout << "\nEmail      :" << _Email;
		cout << "\nPhone      :" << _Phone;
		cout << "\nSalary     :" << _Salary;
		cout << "\nDepartment :"<<_Department;

	}

};

int main() {

	clsEmployee Founder(1, "Mohamed", "Atari", "Founder & CEO", "myemail@gmail.com", "+1832233331", "250000$/MONTHLY", "Executive Management");

	Founder.Print();

	Founder.SendEmail("Annual Revenue Report", "Hi today we got our revenue report to this year,\nWe got 183 million dollars in this year,\nCongratulations Alexanra smith/CFO.");
	Founder.SendSMS("Hi today we got our revenue report to this year\nWe got 183 million dollars in this year\nCongratulations Alexanra smith/CFO");

	system("pause>null");
}