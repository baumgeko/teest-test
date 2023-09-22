#include <iostream>
using namespace std;

float tabelle[11][4], maximal;
char menue;

int main()
{
    do
    {
        cout << "eingabe(e), ausgabe(a) oder abbruch(j/n) noten suche(s)";
        cin >> menue;
        cout << "\n";
        switch (menue)
        {
        case 'e':
            for (int i1 = 1; i1 < 11; i1++)
            {
                for (int i2 = 1; i2 <= 4; i2++)
                {
                    if (i2 == 4)
                    {
                        tabelle[i1][i2] = maximal;
                        cout << "Der Maximale Wert beträgt " << tabelle[i1][i2] << "m\n";
                    }
                    else
                    {
                        cout << "Geben Sie die Sprungweite " << i2 << " ein von Schueler : " << i1 << " an: ";
                        cin >> tabelle[i1][i2];
                        if (maximal < tabelle[i1][i2])
                        {
                            maximal = tabelle[i1][i2];
                        }
                    }
                }
                maximal = 0;
            }
            break;

        case 'a':
            for (int i2 = 0; i2 <= 4; i2++)
            {
                for (int i1 = 0; i1 < 11; i1++)
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

        case 's':
            // Durchsuche das Feld nach 0 in jeder Spalte
            for (int i2 = 1; i2 <= 4; i2++)
            {
                cout << "In Spalte " << i2 << ":\n";
                bool found = false; // Flag, um anzuzeigen, ob 0 gefunden wurde

                for (int i1 = 1; i1 < 11; i1++)
                {
                    if (tabelle[i1][i2] == 0)
                    {
                        cout << "In Zeile " << i1 << " wurde 0 gefunden.\n";
                        found = true;
                    }
                }

                if (!found)
                {
                    cout << "In keiner Zeile wurde 0 gefunden.\n";
                }

                cout << "\n";
            }
            break;
        }
    } while (menue != 'j');

    return 0;
}
