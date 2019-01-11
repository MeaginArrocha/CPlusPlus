#include <iostream>

using namespace std;

int main()
{

	int firstNum, secondNum;
	cout << "Please enter two numbers making the first number smaller than the second" <<endl;
	cin >> firstNum >> secondNum;

	int oddNum;
	oddNum = firstNum;

	if(firstNum % 2 != 0)
	{
		while(oddNum <= secondNum)
		{
		cout << oddNum <<endl;
		oddNum = oddNum + 2;
		}
	}
	else
	{
		oddNum = oddNum + 1;
		while(oddNum <= secondNum)
		{
			cout<< oddNum <<endl;
			oddNum = oddNum + 2;
		}
	}


	int evenNum;
	evenNum = firstNum;
	int sum;
	sum = 0;

	if(firstNum % 2 == 0)
	{
		while(evenNum <= secondNum)
		{
			sum = evenNum + sum;
			evenNum = evenNum + 2;
		}
		cout << sum <<endl;
	}
	else
	{
		evenNum = evenNum + 1;
		while(evenNum <= secondNum)
		{
			sum = evenNum + sum;
			evenNum = evenNum + 2;
		}
		cout << sum <<endl;
	}




	int count, squareCount;
	count = 1;

	while(count <= 10)
	{
		squareCount = count * count;
		cout << count << "  " << squareCount << endl;
		count++;
	}




	int newOddNum, squareSum;
	newOddNum = firstNum;
	squareSum = 0;

	if(firstNum % 2 != 0)
	{
		while(newOddNum <= secondNum)
		{
			squareSum = squareSum + newOddNum * newOddNum ;
			newOddNum = newOddNum + 2;
		}
		cout << squareSum <<endl;
	}
	else
	{
		newOddNum = newOddNum + 1;
		while(newOddNum <= secondNum)
		{
			squareSum = squareSum + newOddNum * newOddNum;
			newOddNum = newOddNum + 2;
		}
		cout << squareSum <<endl;
	}



	char a = 65;
	
	while(a < 91)
	{
		cout << a << " ";
		a++;
	}








	return 0;
}