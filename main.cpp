#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string line;
	int counter = 0;
	char letter;

	cout << "Enter text: ";
	getline(cin, line);
	cout << "Enter letter: ";
	cin >> letter;

	for (unsigned int i = 0; i < line.length(); i++)
		if (line[i] == letter)
		{
			counter++;
		}
	cout << "In the text " << counter << " letter" << endl;
	return 0;
}