#include <iostream>
using std::cin;
using std::cout;
using std::string;


int main()
{
    std::setlocale(LC_ALL, ".UTF-8");    
    
    const size_t TEXT_COUNT = 7;
    string texts[TEXT_COUNT]{};
    
    
    cout << "\nМассив строк до изменения:\n";
    
    for (size_t i = 0; i < TEXT_COUNT; i++)
    {
        cout << i << ": \"" << texts[i] << "\"\n";
    }
    
    
    texts[3] = "Абракадабра!!!";
    texts[1] = "Карамба!";
    
    
    cout << "\nМассив строк после изменения:\n";
    
    for (size_t i = 0; i < TEXT_COUNT; i++)
    {
        cout << i << ": \"" << texts[i] << "\"\n";
    }
    
    return 0;
}









