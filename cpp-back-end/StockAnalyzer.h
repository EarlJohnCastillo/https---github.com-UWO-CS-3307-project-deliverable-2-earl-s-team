/*
* Creator: Earl John Castillo
* Date: 24/11/2024 
* Purpose: 
*   We can consider this class to be the API that connects information about a stock stored in a data base or CSV and populates and 
*   initializes the Stock object. In the future this class will call an API to obtain latest data about a stock. However, in the 
*   interest of time, a pre populated CSV containing various hand picked stocks will be used and this will read from the csv file. 
*
*   This class is also responsible for updating if the stock is a growth stock or not and it's consistancy values for the stock 
*/

//Compiler guards
#ifndef STOCKANALYZER_H 
#define STOCKANALYZER_H
#endif

#include <list>
#include <iostream>
#include <fstream>
#include "Stock.h"

using namespace std;

class StockAnalyzer {
    private: 
        std::list<Stock> stocksList; //Stock object list

        //This function generates the stock object list by reading 
        //a CSV file. Future improvements is to replace this with an API 
        //To read live data instead of a pre generated CSV file 
        void getFromCSV (); 
    public: 
        //Function prototype for default constructor of StockAnalyzer class
        StockAnalyzer(); 

        //Gets a list of stock objects for further processing
        std::list<Stock> getStockList (); 

        //
        void printStocksList(); 
};