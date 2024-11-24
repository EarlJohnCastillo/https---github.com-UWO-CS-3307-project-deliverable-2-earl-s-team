#include <iostream>
#include <string> 
#include "Stock.h"

using namespace std; 

int main()
{
    Stock testStock("NVDA", "Nvidia", 141.95, 107, 110.78, 134.01, 0.03, 1, 0.01, 0.01, 0, 0);

    std::cout << testStock.getInformation(); 

    return 0; 
}