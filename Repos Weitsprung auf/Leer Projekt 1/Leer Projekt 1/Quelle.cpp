#include <iostream>
using namespace std;

float tabelle[11][4], zw, maximal;
int i1, i2;
char menue;


void main()
{
	do
	{
		cout << "eingabe(e), ausgabe(a)oder abbruch(j/n) noten suche(s)";
		cin >> menue;
		cout << "\n";
		switch (menue)
		{
		case'e':
			for (i1 = 1; i1 < 11; i1++)
			{
				for (i2 = 1; i2 <= 4; i2++)
				{
					if (i2 == 4)
					{
						tabelle[i1][i2] = maximal;
						cout << "der Maximale wert betraegt " << tabelle[i1][i2] << "m\n";
					}
					else if (i2 != 0)
					{
						cout << "Geben sie die Sprungweite" << i2 << " ein von Schueler : " << i1 << " an: ";
						cin >> tabelle[i1][i2];
						if (maximal < (tabelle[i1][i2]))
						{
							maximal = tabelle[i1][i2];
						}
					}

				}
				maximal = 0;
			}
			break;

		case 'a':
			for (i2 = 0; i2 <= 4; i2++)
			{
				for (i1 = 0; i1 < 11; i1++)
				{
					if (i1 == 0 && i2 == 0)
					{
						cout << "Schueler\t";
					}
					else if (i2 == 0 && i1 != 0)
					{
						cout << i1 << "\t";
					}
					else if (i2 != 0)
					{
						if (i1 == 0 && i2 != 4)
						{
							cout << "Versuch" << i2 << "\t";
						}
						else if (i2 == 4 && i1 == 0)
						{
							cout << "Maximal" << "\t\t";
						}
					}
					if (i2 > 0 && i1 > 0)
					{

						cout << tabelle[i1][i2] << "\t";
					}
				}
				cout << "\n";
			}
			break;
		/case 's':
			for (size_t i = 0; i < length; i++)
			{
				cout << "Hallo";
			}
				break
		}


	} while (menue != 'j');
}
