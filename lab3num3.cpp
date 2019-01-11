#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double kil, lbs;
	cout << fixed << showpoint << setprecision(2);

	cout << "Please enter your weight in kilograms" <<endl;
	cin >> kil;

	lbs = kil * 2.2;
	cout << kil;
	cout << lbs;

	
	return 0;
}