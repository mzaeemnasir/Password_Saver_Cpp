#include<iostream>
#include <fstream>
#include<string>
#include<Windows.h>
using namespace std;

class Password_Store
{
private:
	const string Private_Key = "8$]![$/>,<_-_O_oP$#!`#&*{)^%~`";
	string UserName;
	string UserPass;
	ifstream input;
	ofstream output;
public:
	void Log_in();
	void Add_New_Password();
	void Recover_Password();
	void Forget_Password();
	void Password_Validation();
	void Encrypt_Password();
	void Decrypt_Password();
	void Read_Data_From_File();

};


void Loading()
{
	cout << "\t\t\t\t";
	char ch;
	system("color 0A");
	for (int i = 0; i < 30; i++)
	{
		Sleep(100);
		ch = 219;
		cout << ch;
	}
	cout << "\n\n\n\n";
	system("CLS");
	system("color 7"); 
}

void Password_Store::Log_in()
{

	input.open("save.txt");
	if (!input.is_open())
	{
		// ????? Creat New File with this Name ???? //

		output.open("save.txt");
		output.close();
		// If There is No File Then Create A New User 
		cout << "\t\t\t Create You Account \n\n\n";
		cout << "Enter your UserName";
		getline(cin, UserName);
		cout << "Enter your Password";
		getline(cin, UserPass);
		system("CLS");
		Sleep(500);
		cout << "\n\n\t\t\t Creating Account\n\n\n";
		
	}
	else
	{
		
		// IF the Files Already Exist then Read the Data from the File
		cout << "\n\n\t\t\t Please Wait ... \n\n\n";

	//	Read_Data_From_File();
		

	}
	input.close();
}



int main()
{
	Loading();
	//char ch = 219;
	//cout << ch;
	system("PAUSE");
	return 0;

}