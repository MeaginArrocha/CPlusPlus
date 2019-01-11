#include <iostream>

using namespace std;

int main()
{
	cout << "Hi. What's your favorite number?"<<endl;
	int a;
	cin >> a;

	if(a == 5)
	{
		cout << "Lucky number"<<endl;
		cout << "How did you go"<<endl;
	}

	else if (a == 12)
		cout << "close to lucky number"<<endl;

	else
		cout << "Not lucky number"<<endl;





	cout << "Please give me a grade and I will give you a letter"<<endl;
	int grade;
	cin >> grade;

	switch(grade/10)
	{
	case 10:
	case 9:
		cout << "A" <<endl;
		cout << "Super" <<endl;
		break;
	case 8:
		cout << "B" <<endl;
		break;
	case 7:
		cout << "C" <<endl;
		break;
	default:
		cout << "F" <<endl;
		break;
	}



	char gender;
	cout << "Please enter letter for male or female"<<endl;
	cin >> gender;

	switch(gender)
	{
	case 'f':
	case 'F':
		cout << "Female"<<endl;
		break;
	case 'm':
	case 'M':
		cout << "Male"<<endl;
		break;
	default:
		cout << "alien!!!"<<endl;
	}






	return 0;
}