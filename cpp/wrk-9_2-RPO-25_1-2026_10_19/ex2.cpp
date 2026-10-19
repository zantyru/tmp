#include <iostream>
using std::cin;
using std::cout;
using std::string;


int main()
{
    std::setlocale(LC_ALL, ".UTF-8");    
    
    // Массиву предзаданы первые пять элементов.
    // Остальные элементы будут нулями
    const size_t NUMBER_COUNT = 10;
    int numbers[NUMBER_COUNT] = {4, 5, 6, 7, 8, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    
    numbers[0] = 999;
    numbers[5] = numbers[0] + 100000;
    
    for (size_t index = 0; index < NUMBER_COUNT; ++index)
    {
        cout << index << ": " << numbers[index] << "\n";
    }
    
    return 0;
}









