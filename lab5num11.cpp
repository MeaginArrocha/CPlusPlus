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
		do
		{
		cout << oddNum <<endl;
		oddNum = oddNum + 2;
		}while(oddNum <= secondNum);
	}
	else
	{
		oddNum = oddNum + 1;
		do
		{
			cout<< oddNum <<endl;
			oddNum = oddNum + 2;
		}while(oddNum <= secondNum);
	}


	int evenNum;
	evenNum = firstNum;
	int sum;
	sum = 0;

	if(firstNum % 2 == 0)
	{
		do
		{
			sum = evenNum + sum;
			evenNum = evenNum + 2;
		}while(evenNum <= secondNum);
		cout << sum <<endl;
	}
	else
	{
		evenNum = evenNum + 1;
		do
		{
			sum = evenNum + sum;
			evenNum = evenNum + 2;
		}while(evenNum <= secondNum);
		cout << sum <<endl;
	}




	int count, squareCount;
	count = 1;

	do
	{
		squareCount = count * count;
		cout << count << "  " << squareCount << endl;
		count++;
	}while(count <= 10);




	int newOddNum, squareSum;
	newOddNum = firstNum;
	squareSum = 0;

	if(firstNum % 2 != 0)
	{
		do
		{
			squareSum = squareSum + newOddNum * newOddNum ;
			newOddNum = newOddNum + 2;
		}while(newOddNum <= secondNum);
		cout << squareSum <<endl;
	}
	else
	{
		newOddNum = newOddNum + 1;
		do
		{
			squareSum = squareSum + newOddNum * newOddNum;
			newOddNum = newOddNum + 2;
		}while(newOddNum <= secondNum);
		cout << squareSum <<endl;
	}



	char a = 65;
	
	do
	{
		cout << a << " ";
		a++;
	}while(a < 91);








	return 0;
}