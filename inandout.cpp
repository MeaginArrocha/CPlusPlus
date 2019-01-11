#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream in;
	ofstream out;

	in.open("C:\\Test\\packers.txt");
	int a, b, c;
	in >> a >> b >> c;
	int sum = a + b + c;
	cout << sum;
	out.open("C:\\Test\\output.txt");
	out << sum <<endl;
	in.close();
	out.close();

	return 0;
}