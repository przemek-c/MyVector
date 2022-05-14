// KlasyObiekty4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "MyVector.h"
using namespace std;

int main()
{
    MyVector v1("V1", 40, 40);
    MyVector v2("V2", 10, 20);
    MyVector v3("V3", 30, 40);
    int len = v3.length(v2);
    int ang = v3.angle(v1);
    cout << "Dlugosc wektora: " << len << endl << "Kat wynosi: " << ang << endl;
    return 0;
}
/*
    //cout << "Istnieje " << Wektor::numberOfPoints() << " punktow." << endl;

    for (int i = 0; i < 10; i++)
    {
        points[i].show();
    }


    {
        MyVector p1, p2, p3;
        cout << endl;
        cout << "Teraz istnieje " << Wektor::numberOfPoints() << " punktow." << endl;
    }

    cout << "A teraz istnieje " << Point::numberOfPoints() << " punktow." << endl;

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
*/