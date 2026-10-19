#include <random>
#include <iostream>
using std::cin;
using std::cout;
using std::string;


void PopulateIntArray(int arrayData[], size_t arraySize)
{    
    const int MAX_VALUE = 100;
    
    std::mt19937 rnd{ std::random_device{}() };
    
    for (size_t i = 0; i < arraySize; i++)
    {
        arrayData[i] = rnd() % (MAX_VALUE + 1);
    }
}


void PrintIntArray(int arrayData[], size_t arraySize)
{
    for (size_t i = 0; i < arraySize; i++)
    {
        cout << arrayData[i] << "  ";
    }
    
    cout << "\n";
}


void ReverseIntArray(int arrayData[], size_t arraySize)
{
    for (size_t i = 0; i < arraySize / 2; i++)
    {
        int tmp = arrayData[i];
        arrayData[i] = arrayData[arraySize - 1 - i];
        arrayData[arraySize - 1 - i] = tmp;
    }
}


int main()
{
    std::setlocale(LC_ALL, ".UTF-8");    
    
    const size_t NUMBER_COUNT = 11;
    int numbers[NUMBER_COUNT]{};
    
    cout << "\nИсходный массив:\n";
    PopulateIntArray(numbers, NUMBER_COUNT);
    PrintIntArray(numbers, NUMBER_COUNT);
    
    cout << "\nПеревёрнутый массив:\n";
    ReverseIntArray(numbers, NUMBER_COUNT);
    PrintIntArray(numbers, NUMBER_COUNT);
    
    return 0;
}









