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

	int i, m,x=0, c=0, v=0;
	float n = 0;

	string wejsciowe[11];
	string wyjsciowe[20];
	string stos[20];

	wejsciowe[0] = "6";
	wejsciowe[1] = "5";
	wejsciowe[2] = "-";
	wejsciowe[3] = "8";
	wejsciowe[4] = "4";
	wejsciowe[5] = "-";
	wejsciowe[6] = "*";
	wejsciowe[7] = "4";
	wejsciowe[8] = "1";
	wejsciowe[9] = "-";
	wejsciowe[10] = "/";



	for (i = 0; i < 11; i++)
	{
		
			if (wejsciowe[i] == "*")
			{
				n = ((stof(stos[v - 2])) * (stof(stos[v - 1])));
				v = v - 2;
				stos[v] = to_string(n);
				n = 0;
				v++;
				stos[v] = "\0";
			}

			else if (wejsciowe[i] == "/")
			{
				n = (stof(stos[v - 2]) / stof(stos[v - 1]));
				printf("N TO: %f", n);
				v = v - 2;
				stos[v] = to_string(n);
				n = 0;
				v++;
				stos[v] = '\0';
			}

			else if (wejsciowe[i] == "-")
			{
				n = (stof(stos[v - 2]) - stof(stos[v - 1]));
				v = v - 2;
				stos[v] = to_string(n);
				n = 0;
				v++;
				stos[v] = '\0';
			}

			else if (wejsciowe[i] == "+")
			{
				n = (stof(stos[v - 2]) + stof(stos[v - 1]));
				v = v - 2;
				stos[v] = to_string(n);
				n = 0;
				v++;
				stos[v] = '\0';
			}

		
		else
		{
			stos[v] = wejsciowe[i];
			v++;
		}

			cout << endl;

			for (m = 0; m < 20; m++)
			{
				cout << stos[m]<<" ";
			}

			cout << endl;
	}

	cout << "Element to " << wejsciowe[1] << endl;

	for (i = 0; i < 20; i++)
	{
		cout << stos[i];
	}

	cout << endl;


	for (i = 0; i < 20; i++)
	{
		cout << wyjsciowe[i];
	}
	cout << endl;
	system("PAUSE");

	return 0;
}