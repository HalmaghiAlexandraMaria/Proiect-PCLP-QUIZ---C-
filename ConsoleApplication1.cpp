// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream> //randomizer din gama de 100 intrebari
#include <fstream>  //interfata
#include <cstring>
#include <chrono>
using namespace std;

int main()
{
    int nq, a, b, c, d, an, tq, p = 0, k = 1;
    char q[1000], n[1000];
    ifstream f1("intrebari.txt");
    while (k <= 10)
    {
        srand(chrono::duration_cast<chrono::milliseconds>(
            chrono::system_clock::now().time_since_epoch()).count()
        );
        int random = 1 + (rand() % 6);
        f1 >> nq;
        f1.getline(q, 1000);
        while(nq!=random)
        { 
            while (strchr(q, '?') == 0)
               f1.getline(q, 1000);
            f1 >> a >> b >> c >> d;        
            if (strchr(n, '2)') != 0)
                f1.getline(n, 1000);
            else while (strchr(n, '2)') == 0)
                f1.getline(n, 1000);
            if (strchr(n, '3)') != 0)
                f1.getline(n, 1000);
            else while (strchr(n, '3)') == 0)
                f1.getline(n, 1000);
            if (strchr(n, '4)') != 0)
                f1.getline(n, 1000);
            else while (strchr(n, '4)') == 0)
                f1.getline(n, 1000);
            while (strchr(n, '...') == 0)
                f1.getline(n, 1000);            
        f1 >> nq;
        f1.getline(q, 1000);
        }
        cout << endl;
        cout << q << endl;
        while (strchr(q, '?') == 0)
        {
            f1.getline(q, 1000);
            cout << q << endl;
        }
        cout << "                                                                                 " << k << "/10";
        f1 >> a >> b >> c >> d;
        f1.getline(n, 1000);
        cout << n << endl;
                if (strchr(n, '2)') != 0)
                {
                    f1.getline(n, 1000);
                    cout << n << endl;
                }
                else while (strchr(n, '2)') == 0)
                {
                    f1.getline(n, 1000);
                    cout << n << endl;
                }           
                if (strchr(n, '3)') != 0)
                {
                    f1.getline(n, 1000);
                    cout << n << endl;
                }
                else while (strchr(n, '3)') == 0)
                {
                    f1.getline(n, 1000);
                    cout << n << endl;
                }            
                if (strchr(n, '4)') != 0)
                {
                    f1.getline(n, 1000);
                    cout << n << endl;
                }
                else while (strchr(n, '4)') == 0)
                {
                    f1.getline(n, 1000);
                    cout << n << endl;
                } 
                while (strchr(n, '...') == 0)
                {
                    f1.getline(n, 1000);
                    cout << n << endl;
                }
        
            cout << endl << "Scrie cifra raspunsului: ";
            cin >> an;
            switch (an) {
            case 1:
                if (a == 0)
                    cout << "Gresit";
                else {
                    cout << "Corect";
                    p += 10;
                }
                break;
            case 2:
                if (b == 0)
                    cout << "Gresit";
                else {
                    cout << "Corect";
                    p += 10;
                }
                break;
            case 3:
                if (c == 0)
                    cout << "Gresit";
                else {
                    cout << "Corect";
                    p += 10;
                }
                break;
            case 4:
                if (d == 0)
                    cout << "Gresit";
                else {
                    cout << "Corect";
                    p += 10;
                }
                break;
            }
            cout << endl;
            k++;
        }

        /*if (tq == 2)
            while (nq < 2)
            {
                f2 >> nq;
                f2.getline(q, 100);
                cout << q;
                f2 >> a >> b >> c >> d;
                for (i = 1; i <= 5; i++) //se afiseaza raspunsurile, mai intai se afiseaza "1)" dupa se citeste din fisier raspunsul propriu zis
                {
                    f2.getline(n, 100);
                    cout << n << endl;
                }
                cout << endl << "Scrie cifra raspunsului: ";
                cin >> an;
                switch (an) {
                case 1:
                    if (a == 0)
                        cout << "Gresit";
                    else {
                        cout << "Corect";
                        p += 10;
                    }
                    break;
                case 2:
                    if (b == 0)
                        cout << "Gresit";
                    else {
                        cout << "Corect";
                        p += 10;
                    }
                    break;
                case 3:
                    if (c == 0)
                        cout << "Gresit";
                    else {
                        cout << "Corect";
                        p += 10;
                    }
                    break;
                case 4:
                    if (d == 0)
                        cout << "Gresit";
                    else {
                        cout << "Corect";
                        p += 10;
                    }
                    break;
                }
                cout << endl;
            }*/
        if (p >= 70)
            cout << "Ai castigat! Cu " << p << " puncte";
        else if (p == 100)
            cout << "Ai raspuns corect la toate intrebarile!";
        else if (p < 70)
            cout << "Ai pierdut! Ai avut " << p << " puncte";

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
