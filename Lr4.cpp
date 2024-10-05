// Lr4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

// Оголошення змінних
    double x, y, z, result;

    // Введення
    printf("Уведіть x: ");
    scanf_s("%lf", &x);

    printf("Уведіть y: ");
    scanf_s("%lf", &y);

    printf("Уведіть z: ");
    scanf_s("%lf", &z);

    // Розрахунки
    result = ((1 + cos(y - 2)) / ((pow(x, 4) / 2) + pow(sin(z), 2))) - cos(13);

    // Виведення
    printf("Результат: %lf\n", result);

    // Приведення типу в стилі мови С
    int intResultC = (int)result;

    // Приведення типу в стилі мови C++ (оператор static_cast)
    int intResultCpp = static_cast<int>(result);

    // Виведення результатів обох способів приведення типів
    printf("Приведення типу в стилі C: %d\n", intResultC);
    printf("Приведення типу в стилі C++: %d\n", intResultCpp);

    return 0;
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
