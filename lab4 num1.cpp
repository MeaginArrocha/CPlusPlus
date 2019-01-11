#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Please enter a number"<<endl;
	cin >> number;

	if(number == 0)
		cout << "zero"<<endl;

	else if(number < 0)
		cout << "negative"<<endl;

	else
		cout << "positive"<<endl;


	return 0;
}