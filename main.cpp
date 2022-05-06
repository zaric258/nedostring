#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    string str1 = "", str2 = "";
    int coma = 0;
    int dot = 0;

    cout << "Enter coma: ";
    getline(cin, str1);
    cout << "\nEnter points: ";
    getline(cin, str2);

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == ',')
        {
            coma++;
        }
    }

    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] == '.')
        {
            dot++;
        }
    }

    cout << "\nNumber of rooms: " << coma << endl << "Amount of points: " << dot << endl;
	return 0;
}
