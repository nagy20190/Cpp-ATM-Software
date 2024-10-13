#include <iostream>
#include <vector>

using namespace std;

// Variables 
double balance = 10000;
int deposit;
int withdraw;
int pass;
int choice;


void process()
{
	// Default Password = 0000
	if (pass == 0000)
	{
		cout << "--------------------------------" << endl;
		cout << "1- balance " << endl;
		cout << "2- withdraw " << endl;
		cout << "3- deposit " << endl;
		cout << "4- Exit " << endl;

		cout << "\n --------------------------------" << endl;
		cout << "enter your choise : ";
		cin >> choice;


		switch (choice)
		{
		case 1:
			cout << "your balance is : " << balance << endl;
			break;

		case 2:
			cout << "enter The amount you want to withdraw : ";
			cin >> withdraw;
			cout << endl;
			if (withdraw > balance)
			{
				cout << "Your balance is not enough" << endl;
			}
			else
			{
				cout << "Successful process , your current balance : " << balance - withdraw << endl;

			}
			break;

		case 3:
			cout << "enter the amount you want to deposit : ";
			cin >> deposit;
			cout << endl;
			cout << "Successful process , your current balance : " << balance + deposit << endl;
			break;

		case 4:
			cout << "thank you " << endl;
			break;

		default:
			cout << "please choice from 1-4" << endl;
			break;
		} // end of switch 

	} // end of (if)


	else
	{
		cout << "plese enter the correct password : ";
		cin >> pass;
		cout << endl;
	}

}
int main()
{
	cout << "enter your password : ";
	cin >> pass;
	cout << endl;
	while (choice != 4)
	{

		process();
	}

}