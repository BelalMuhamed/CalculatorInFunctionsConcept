#include <iostream>
using namespace std;
double Number1 = 0, Number2 = 0;
int Operation = 0;
double Result = 0;
void CalculatorFunc();
int main()
{
	
	CalculatorFunc();
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

#pragma region OperationsFunctions
bool Sum(double Num01, double Num02, double& Result)
{
	Result = Num01 + Num02;
	return true;
}
bool Subtract(double Num01, double Num02, double& Result)
{
	Result = Num01 - Num02;
	return true;
}
bool Multiply(double Num01, double Num02,double &Result)
{
	Result =Num01 * Num02;
	return true;
}
bool Divide(double Num01, double Num02,double &Result)
{
	if (Num02 == 0)
	{
		return false;
	}
	else
	{
		Result = Num01 / Num02;
		return true;
	}
}
#pragma endregion

#pragma region Calculator
void CalculatorFunc()
{
	TakeTwoNumbersFromUser(Number1, Number2);
	ChooseOperation(Operation);
	switch (Operation)
	{
	case 1:
		Sum(Number1, Number2, Result);
		cout << Result;
		break;
	case 2:
		Subtract(Number1, Number2, Result);
		cout << Result;
		break;
	case 3:
		Multiply(Number1, Number2, Result);
		cout << Result;
		break;
			
	default:
		if (Divide(Number1, Number2, Result))
		{
			cout << Result;
		}
		else
		{
			
			CalculatorFunc();

		}
		
		break;
	}
}
#pragma endregion

