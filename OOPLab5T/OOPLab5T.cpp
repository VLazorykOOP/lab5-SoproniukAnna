// OOPLab5T.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include "Dot.h"
using namespace std;

TColorDot dot(3.5, 5);

void MenuTask1() 
{
    int select = 0;
    do
    {
        cout << '\t' << '\t' << '\t' << "Select option " << endl;
        cout << "1. Set X" << endl;
        cout << "2. Set Y" << endl;
        cout << "3. Set color" << endl;
        cout << "4. Print Coordinates" << endl;
        cout << "5. Print All" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            system("cls");
            double x;
            cout << "Input X: ";
            cin >> x;
            dot.SetX(x);
            break;
        case 2:
            system("cls");
            double y;
            cout << "Input Y: ";
            cin >> y;
            dot.SetY(y);
            break;
        case 3:
            system("cls");
            unsigned long color;
            cout << "Input color: ";
            cin >> color;
            dot.SetColor(color);
            break;
        case 4:
            system("cls");
            cout << '\t' << '\t' << '\t' << "Print Coordinates: " << endl;
            dot.PrintСoordinates();
            cout << endl << endl;
            break;
        case 5:
            system("cls");
            dot.PrintAll();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}
void MenuTask2() {}
void MenuTask3() {}

void MainMenu()
{
    int select = 0;
    do
    {
        cout << '\t' << '\t' << '\t' << "Main menu" << endl;
        cout << "1. Task 1" << endl;
        cout << "2. Task 2" << endl;
        cout << "3. Task 3" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            system("cls");
            MenuTask1();
        case 2:
            system("cls");
            MenuTask2();
            break;
        case 3:
            system("cls");
            MenuTask3();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}

int main()
{
    MainMenu();
}
