#include <list>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

#include "StockAnalyzer.h"

using namespace std; 

StockAnalyzer::StockAnalyzer() {
    this->stocksList = {}; //Initalization of list
    getFromCSV(); //Call to populaulate list
}

void StockAnalyzer::getFromCSV() {

    //Opening CSV file
    ifstream stockCSVFile;
    stockCSVFile.open("./Resources/stocks.csv");
    if (!stockCSVFile.is_open()) {
        cerr << "Error Opening file!" << endl; 
    } else {

        //Creating temp variables to hold each element in the csv file
        std::string tName;
        std::string cName;
        std::string sPrice;
        std::string sRange; 
        std::string sAvg200;
        std::string sAvg50;
        std::string sDPay;
        std::string sDFreq;
        std::string sDP1;
        std::string sDP2;
        std::string sDP3;
        std::string sDP4;

        while (stockCSVFile.good()) { //Iterating through each row 
            getline(stockCSVFile, tName, ',');
            getline(stockCSVFile, sPrice, ',');
            getline(stockCSVFile, sRange, ',');
            getline(stockCSVFile, sAvg200, ',');
            getline(stockCSVFile, sAvg50, ',');
            getline(stockCSVFile, sDPay, ',');
            getline(stockCSVFile, sDFreq, ',');
            getline(stockCSVFile, sDP1, ',');
            getline(stockCSVFile, sDP2, ',');
            getline(stockCSVFile, sDP3, ',');
            getline(stockCSVFile, sDP4, ',');
            getline(stockCSVFile, cName, '\n');

            //Saving into a new Stock Object
            Stock saveStock(tName, cName, stod(sPrice), stod(sRange), stod(sAvg200), stod(sAvg50), 
            stod(sDPay), stod(sDFreq), stod(sDP1), stod(sDP2), stod(sDP3), stod(sDP4));

        stocksList.push_back(saveStock); 
    }
        stockCSVFile.close(); 
    }
}

std::list<Stock> StockAnalyzer::getStockList () {return stocksList;}

void StockAnalyzer::printStocksList(){ 
    //Testing saved information
        for (auto it = stocksList.begin(); it != stocksList.end(); ++it){
            cout << it->getInformation(); 
            cout << "\n \n";
        }
}