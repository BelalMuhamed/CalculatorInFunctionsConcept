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


