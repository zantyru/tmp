#include <iostream>
using std::cin;
using std::cout;
using std::string;


void PrintStringArray(string arrayData[], size_t arraySize)
{
    for (size_t i = 0; i < arraySize; i++)
    {
        cout << i << ": \"" << arrayData[i] << "\"\n";
    }
}


int main()
{
    std::setlocale(LC_ALL, ".UTF-8");    
    
    const size_t TEXT_COUNT = 7;
    string texts[TEXT_COUNT]{};
    
    
    cout << "\nМассив строк до изменения:\n";
    PrintStringArray(texts, TEXT_COUNT);
    
    
    texts[3] = "Абракадабра!!!";
    texts[1] = "Карамба!";
    
    
    cout << "\nМассив строк после изменения:\n";
    PrintStringArray(texts, TEXT_COUNT);
    
    return 0;
}









