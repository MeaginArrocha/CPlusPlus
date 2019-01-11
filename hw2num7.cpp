#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	out << fixed << showpoint << setprecision(2);

	in.open("C:\\C++\\Ch3_Ex7Data.txt");
	string lastName, firstName;
	double salary, percent, newSalary, difference;

	in >> lastName >> firstName >> salary >> percent;
	percent = percent / 100;
	difference = salary * percent;
	newSalary = difference + salary;

	out.open("C:\\C++\\Ch3_Ex7Output.txt");
	out << firstName << " " << lastName << " " << newSalary <<endl;

	in >> lastName >> firstName >> salary >> percent;
	percent = percent / 100;
	difference = salary * percent;
	newSalary = difference + salary;

	out << firstName << " " << lastName << " " << newSalary <<endl;

	in >> lastName >> firstName >> salary >> percent;
	percent = percent / 100;
	difference = salary * percent;
	newSalary = difference + salary;

	out << firstName << " " << lastName << " " << newSalary <<endl;


	return 0;
}