#include <iostream>
using namespace std;
int main()
{
	double Number1 = 0, Number2 = 0;
	int Operation=0;
}
/*this function used to take numbers only from user and return those using &(calling by reference )
in defensive code */
#pragma region TakeNumbersFromUserFunction

void TakeTwoNumbersFromUser(double &Number1,double &Number2)
{
	while (true)
	{
		cout << "Enter your first number ";
		cin >> Number1;
		cout << "Enter your second number ";
		cin >> Number2;
		if (cin.fail())
		{
			cout << "You should enter correct values ";
			cin.clear();
			cin.ignore(10000, '\n');
		}
		else
		{
			break;
		}
	}
}
#pragma endregion

#pragma region ChooseOperationFunction
void ChooseOperation(int& Operation)
{
	while (true)
	{
		cout << "Choose Your Operation from this Menu";
		cout << " choose 1 for +";
		cout << " choose 2 for -";
		cout << " choose 3 for *";
		cout << " choose 4 for /";
		cin >> Operation;
		if (Operation > 4 || Operation < 0 || cin.fail())
		{
			cout << "Your cohice isn't correct please choose again";
			cin.clear();
			cin.ignore(10000, '\n');
		}
		else
		{
			break;
		}

	}

}
#pragma endregion

