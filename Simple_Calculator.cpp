#include <iostream>
using namespace std;
int main()
{
	int num1, num2, count;
	cout << "Enter the First number : " << endl;
	cin >> num1;
	cout << "Enter the Second number : " << endl;
	cin >> num2;
	cout << "Enter an option : \n \t 1=Addition \n \t 2=Subtraction \n \t 3=Multiplication \n \t 4=Division " << endl;
	cin >> count;
	
	switch (count)
	{case 1:
		cout << "The answer is :"  << num1 + num2;
		break;
	case 2:
		cout << "The answer is :" << num1 - num2;
		break;
	case 3:
		cout << "The answer is :" << num1 * num2;
		break;
	case 4:
		cout << "The answer is :" << num1 / num2;
		break;
	default:
		cout << "Pay Attention To The Details :" << endl
			<< "1 : Addition(+)" << endl
			<< "2 : Subtraction(-)" << endl
			<< "3 : Multiplication(*)" << endl
			<< "4 : Division(/)" << endl;
	}
}
