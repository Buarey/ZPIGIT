#include <cstdio>
#include <iostream>
using namespace std;

//Test GITA

int uzupelnienie;
void menuUzupelnienie()
{
    cout << "Czy chcesz uzupełnic tablicę własnymi danymi?" << endl;
    cout << "1. Tak" << endl; cout << "2. Nie" << endl;
    cout << "Decyzja: ";
    cin >> uzupelnienie;
}

int main()
{
    int wybor;
    int i, j, k; // zmienne do po pętli For
    int x, y, w = 0; //zmienne zastępcze do tabel
    int row = 0; // zmienna numerująca rzędy
    int col = 0; // zmienna numerujaca kolumny

    cout << "Witaj w wizualizatorze Tablic Jedno- i Dwuwymiarowych" << endl;
    cout << "Wybierz typ tablicy" << endl;
    cout << "1. Tablica jednowymiarowa" << endl;
    cout << "2. Tablica dwuwymiarowa" << endl;
    cout << "Wybór: ";
    cin >> wybor;

    switch (wybor)
    {
        case 1:
        {
            x = 3; //modyfikując wartość tej zmiennej przed kompilacja kodu zmienisz wielkość tablicy
            int tab1[x];

            menuUzupelnienie();

            if (uzupelnienie == 1)
            {
                for (j=0; j<x;j++)
                {
                    cout << "Podaj cyfrę od 0 do 9: ";
                    cin >> tab1[j];
                }
            }else
            {
                for (j=0; j<x;j++)
                {
                    tab1[j] = 0;
                }
            }

            cout << "Kolumna  0" << endl;
            for(i=0;i<8;i++)
            {
                cout << " ";
            }
            cout << "_ _" << endl;

            for (j=0; j<x;j++)
            {
                for (i=0; i<1;i++)
                {
                    cout << "Rząd " << row << " ";
                }
                row++;

                for (i=0; i<1;i++)
                {
                    cout << "| " << tab1[w] << " |";

                }
                w++;
                cout << endl;

                for(i=0;i<7;i++)
                {
                    cout << " ";
                }
                cout << "|_ _|";
                cout << endl;


            }
            break;
        }

        case 2:
        {
            x = 3; //modyfikując wartość tej zmiennej przed kompilacja kodu zmienisz wielkość tablicy
            y = 4; //modyfikując wartość tej zmiennej przed kompilacja kodu zmienisz wielkość tablicy

            int tab2[x][y];

            menuUzupelnienie();

            if (uzupelnienie == 1)
            {
                for (i=0;i<x;i++)
                {
                    for (j=0;j<y;j++)
                    {
                        cout << "Podaj cyfrę od 0 do 9: ";
                        cin >> tab2[i][j];
                    }
                }
            }else
            {
                for (i=0;i<x;i++)
                {
                    for(j=0;j<y;j++)
                    {
                        tab2[i][j] = 0;
                    }
                }
            }

            cout << "Kolumna  ";
            for (i=0; i<y; i++)
            {
                cout << col << "   ";
                col++;
            }

            cout << endl;

            for(i=0;i<8;i++) //górna belka do przerobienia na funkcje
            {
                cout << " ";
            }

            for (i=0; i < y; i++)
            {
                cout << "_ _ "; // koniec
            }

            cout << endl;

            for(j=0;j<x;j++)
            {
                cout << "Rząd " << row << " ";
                row++;
                for (k=0; k<y;k++)
                {
                    cout << "| " << tab2[j][k] << " ";
                }
                cout <<"|" << endl;

                for(i=0;i<7;i++)
                {
                    cout << " ";
                }
                for (i=0; i < y; i++)
                {
                    cout << "|_ _";
                }
                cout << "|" << endl;
            }

            /*cout << "Tablica 0/0: " << tab2[0][0] << endl;  //Kod kontrolny zapisu w tablicy
            cout << "Tablica 1/1: " << tab2[1][1] << endl;
            cout << "Tablica 2/2: " << tab2[2][2] << endl;
            cout << "Tablica 0/3: " << tab2[0][3] << endl;*/

            break;
        }
        default:
            cout << "Wybór poza zakresem." <<endl;
            break;

    }



    return 0;
}
