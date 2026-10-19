#include <iostream>
using std::cin;
using std::cout;
using std::string;


int main()
{
    std::setlocale(LC_ALL, ".UTF-8");    
    
    // Объявление статического массива
    // (ИНИЦИАЛИЗАЦИЯ ЕСТЬ!!!).
    // Массив целых чисел на NUMBER_COUNT элементов
    const size_t NUMBER_COUNT = 10;  // size_t!!! не бывает отрицательным
    int numbers[NUMBER_COUNT]{};
    
    // Элементы нумерются, начиная с 0.
    // В данном примере от 0 до 9
    
    numbers[0] = 999;  // Здесь 0 - это уже индекс (номер) элемента
    numbers[5] = numbers[0] + 100000;
    
    // Распечатка элементов массива.
    for (size_t index = 0; index < NUMBER_COUNT; ++index)
    {
        // Возможно, какие-то элементы будут
        // имет "мусорные" значения
        cout << index << ": " << numbers[index] << "\n";
    }
    
    return 0;
}









