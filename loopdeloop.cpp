#include <iostream>
#include <string>


using namespace std;

int main()
{
	int count = 0;
	while( count < 5)
	{
		cout << "Go Ravens" <<endl;
		count++;
	}

	string names;
	cout << "Enter names, when you are done enter Done"<<endl;
	cin >> names;

	while(names != "Done")
	{
		cout << "Happy Birthday " << names << endl;
		cin >> names;
	}

	bool done = false;
	while(!done)
	{
		cin >> names;
		if(names == "Kip")
			done = true;

		cout << names <<endl;
	}

	int counter = 0;
	do
	{
		cout << counter <<endl;
		counter++;

	}while(counter < 10);


	for (int i = 10; i > 0; i--)
		cout << i <<endl;




	return 0;
}