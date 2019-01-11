#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double mass, density, volume;
	cout << fixed << showpoint << setprecision(2);

	cout << "Please enter the mass, in grams, and density, in grams per cubic centimeter" <<endl;
	cin >> mass >> density;

	volume = mass / density;
	cout << volume;




	return 0;
}