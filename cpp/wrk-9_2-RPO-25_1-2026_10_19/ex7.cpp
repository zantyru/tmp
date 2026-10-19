#include <iostream>
using std::cin;
using std::cout;
using std::string;


void PopulateFloatArray(float arrayData[], size_t arraySize)
{
    // В функцию через аргумент arrayData приходит
    // не копия массива, а копия адреса его
    // месторасположения; то есть эта функция меняется
    // содержимое массива
    
    const float START_VALUE = 13.4f;
    const float GROW_KOEF = 1.177f;
    
    float value = START_VALUE;
    
    for (size_t i = 0; i < arraySize; i++)
    {
        arrayData[i] = value;
        value += i * GROW_KOEF;
    }
}


void PrintFloatArray(float arrayData[], size_t arraySize)
{
    for (size_t i = 0; i < arraySize; i++)
    {
        cout << arrayData[i] << "  ";
    }
    
    cout << "\n";
}


int main()
{
    std::setlocale(LC_ALL, ".UTF-8");    
    
    const size_t NUMBER_COUNT = 5;
    float numbers[NUMBER_COUNT]{};
    
    PopulateFloatArray(numbers, NUMBER_COUNT);
    PrintFloatArray(numbers, NUMBER_COUNT);
    
    return 0;
}









