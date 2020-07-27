#include <iostream>
using namespace std;

int main()
{
	char eins;
	char zwei;
	cout << "Bitte geben Sie die erste Ziffer ein: ? ";
	cin >> eins;
	cout << "Bitte geben Sie die zweite Ziffer ein: ? ";
	cin >> zwei;

	/*
	cout << "Der erste eingegebene Buchstabe lautet: " << eins << " " << int(eins) << endl;
	cout << "Der zweite eingegebene Buchstabe lautet: " << zwei << " " << int(zwei) << endl;
	*/

	if (int(eins) > int('9') || int(eins) < int('0'))
	{
		cout << "Das Programm wurde durch Eingabe von " << eins << " beendet." << endl;
		system("PAUSE");
		return 1;
	}

	else if (int(zwei) > int('9') || int(zwei) < int('0'))
	{
		cout << "Das Programm wurde durch Eingabe von " << zwei << " beendet." << endl;
		system("PAUSE");
		return 1;
	}
	else
	{
		int ergebnis = (int(eins) - int('0')) + (int(zwei) - int('0'));
		cout << eins << " + " << zwei << " = " << ergebnis << endl;
	}
	system("PAUSE");
	return 0;
}