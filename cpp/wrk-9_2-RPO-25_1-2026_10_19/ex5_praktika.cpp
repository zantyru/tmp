#include <random>
#include <iostream>
using std::cin;
using std::cout;
using std::string;


int main()
{
    std::setlocale(LC_ALL, ".UTF-8");    
    
    // Создание и настройка источника
    // псевдослучайных чисел    
    std::mt19937 rnd{ std::random_device{}() };    
    
    
    // Создание и заполнение массива
    const int NUMBER_DIAPASON = 100;
    const float FLOAT_KOEF = 0.001;
    const size_t NUMBER_COUNT = 13;
    float numbers[NUMBER_COUNT]{};
    
    for (size_t i = 0; i < NUMBER_COUNT; i++)
    {
        numbers[i] = (rnd() % NUMBER_DIAPASON) * FLOAT_KOEF;
    }
      
    
    // Вывод элементов массива
    cout << "Набор вещественных чисел:\n";
    
    for (size_t i = 0; i < NUMBER_COUNT; i++)
    {
        cout << numbers[i] << "  ";
    }
    
    cout << "\n";
    
    return 0;
}









