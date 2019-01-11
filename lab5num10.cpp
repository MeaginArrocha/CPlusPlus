#include <iostream>

using namespace std;

int main()
{

	int firstNum, secondNum;

	cout << "Please enter two numbers where the first number is less than the second" <<endl;
	cin >> firstNum >> secondNum;

	int number, evenSum, squareSum;
	evenSum = 0;
	squareSum = 0;

	for(number = firstNum ; number < secondNum ; number++)
	{
		if(number % 2 != 0)
		{
		cout << number <<endl;
		squareSum = number * number + squareSum;
		}
		
		else
		{
			evenSum = evenSum + number;
		}

	}
	cout << evenSum <<endl;




	int count, square;

	for(count = 1 ; count <= 10 ; count++)
	{
		square = count * count;
		cout << count << " " << square << endl;
	}


	cout << squareSum <<endl;
	
	

	
	for(char a = 65 ; a < 91 ; a++)
	{
		cout << a << " ";
	}




















	return 0;



}