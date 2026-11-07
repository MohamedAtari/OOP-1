#include<iostream>
#include<string>

using namespace std;

class clsPerson {

private:

	int _ID = 0;
	string _FirstName = "";
	string _LastName = "";
	string _FullName = "";
	string _Email = "";
	string _Phone = "";

public:

	clsPerson(int ID , const string& FirstName, const string& LastName, const string& Email, const string& Phone) {

		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_FullName = FirstName+" "+LastName;
		_Email = Email;
		_Phone = Phone;

	}

	//Read Only ID
	int GetID() {
		return _ID;
	}

	_declspec(property(get = GetLastName))string ID;

	void SetFirstName(const string&FirstName) {
		_FirstName = FirstName;
	}

	string GetFirstName() {
		return _FirstName;
	}

	_declspec(property(get = GetFirstName, put = SetFirstName))string FirstName;

	void SetLastName(const string& LastName) {
		_LastName = LastName;
	}

	string GetLastName() {
		return _LastName;
	}

	_declspec(property(get = GetLastName, put = SetLastName))string LastName;

	void SetFullName(const string& FullName) {
		_FullName = FullName;
	}

	string GetFullName() {
		return _FullName;
	}

	_declspec(property(get = GetFullName, put = SetFullName))string FullName;

	void SetEmail(const string& Email) {
		_Email = Email;
	}

	string GetEmail() {
		return _Email;
	}

	_declspec(property(get = GetEmail, put = SetEmail))string Email;

	void SetPhoneNumber(const string& PhoneNumber) {
		_Phone = PhoneNumber;
	}

	string GetPhoneNumber() {
		return _Phone;
	}

	_declspec(property(get = GetPhoneNumber, put = SetPhoneNumber))string Phone;

	void SendEmail(const string& Subject, const string& Message) {
		cout << "\n\nThe following message sent successfully to email : " << _Email;
		cout << "\nSubject : " << Subject;
		cout << "\nBody : " << Message;
	}

	void SendSMS(const string &Message) {
		cout << "\n\nThe following message sent successfully to phone : " << _Phone;
		cout << "\nBody : " << Message;
	}

	void Print() {

		cout << "\nInfo: ";
		cout << "\n____________________";
		cout << "\nID       :" << _ID;
		cout << "\nFirstName:" << _FirstName;
		cout << "\nLastName :" << _LastName;
		cout << "\nFullName :" << _FullName;
		cout << "\nEmail    :" << _Email;
		cout << "\nPhone    :" << _Phone;

	}

};

int main() {

	clsPerson Person1(10, "Mohamed", "Atari", "mohamed.t.attari@gmail.com", "12999320");
	Person1.Print();

	Person1.SendEmail("Hi", "How are you ?");
	Person1.SendSMS("How are you ?");

	system("pause>null");
}