﻿// LocalAndGlobal.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int intGlobalVar; // инициализируется 0
char charGlobalVar; // инициализируется 0 в символьном представлении это null
char charGlobalVar1 = 35; // инициализируется 35. В символьном представлении #
char charGlobalVar2 = 'a'; // инициализируется a
double doubGlobalVar; // инициализируется 0

int main()
{
    cout << "GlobalVars:" << endl;
    cout << "int intGlobalVar: " << intGlobalVar << endl;
    cout << "char charGlobalVar: " << charGlobalVar << endl;
    cout << "double doubGlobalVar: " << doubGlobalVar << endl;

    cout << "char charGlobalVar1: " << charGlobalVar1 << endl;
    cout << "char charGlobalVar2: " << charGlobalVar2 <<endl;
    

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
