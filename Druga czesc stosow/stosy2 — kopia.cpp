#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{

	/*
	int liczby[3];
	cout << "Podaj liczbe 1:";
	cin >> liczby[0];
	cout << "Podaj liczbe 2:";
	cin >> liczby[1];
	liczby[2] = 567;
	cout << "liczby[2] wynosi " << liczby[2] << endl;
	int suma = liczby[0] + liczby[1] + liczby[2];
	cout << "Suma trzech liczb wynosi:" << suma << endl;
	*/

	int i, m, x=0, c=0, v=0;
	int n = 0;

	string wejsciowe[5];
	string wyjsciowe[20];
	string stos[20];

	wejsciowe[0] = "6";
	wejsciowe[1] = "5";
	wejsciowe[2] = "15";
	wejsciowe[3] = "*";
	wejsciowe[4] = "+";



	for (i = 0; i < 5; i++)
	{
		
			if (wejsciowe[i] == "*")
			{
				n = stof(stos[v - 2]) * stof(stos[v - 1]);
				v = v - 2;
				stos[v] = to_string((int)n);
				n = 0;
				v++;
				stos[v] = '\0';
			}

			if (wejsciowe[i] == "/")
			{
				n = stof(stos[v - 2]) / stof(stos[v - 1]);
				v = v - 2;
				stos[v] = to_string((int)n);
				n = 0;
				v++;
				stos[v] = '\0';
			}

			if (wejsciowe[i] == "-")
			{
				n = stof(stos[v - 2]) - stof(stos[v - 1]);
				v = v - 2;
				stos[v] = to_string((int)n);
				n = 0;
				v++;
				stos[v] = '\0';
			}

			if (wejsciowe[i] == "+")
			{
				n = stof(stos[v - 2]) + stof(stos[v - 1]);
				v = v - 2;
				stos[v] = to_string((int)n);
				n = 0;
				v++;
				stos[v] = '\0';
			}

		
		else
		{
			stos[v] = wejsciowe[i];
			v++;
		}
	}

	cout << "Element to " << wejsciowe[1] << endl;

	for (i = 0; i < 20; i++)
	{
		cout << stos[i];
	}

	for (i = 0; i < 20; i++)
	{
		cout << wyjsciowe[i];
	}
	cout << endl;
	system("PAUSE");

	return 0;
}