#include <string>
#include <iostream>
#include "Stock.h"

using namespace std; 

Stock::Stock () {
    ticker = "";
    company = "";
    price = 0;
    year_range = 0;
    avg_200 = 0;
    avg_50 = 0;
    div_pay = 0;
    div_freq = 0;
    div_pay1 = 0;
    div_pay2 = 0;
    div_pay3 = 0;
    div_pay4 = 0;
    growth = false;
    growth_consistancy = 0;
    dividend_consistancy = 0;
}

Stock::Stock (std::string ticker, std::string company, double price, double year_range, double avg_200, double avg_50,
        double div_pay, double div_freq, double div_pay1, double div_pay2, double div_pay3, double div_pay4) { 

    this->ticker = ticker;
    this->company = company;
    this->price = price;
    this->year_range = year_range;
    this->avg_200 = avg_200;
    this->avg_50 = avg_50;
    this->div_pay = div_pay;
    this->div_freq = div_freq;
    this->div_pay1 = div_pay1;
    this->div_pay2 = div_pay2;
    this->div_pay3 = div_pay3;
    this->div_pay4 = div_pay4;
    this->growth = false;
    this->growth_consistancy = 0;
    this->dividend_consistancy = 0;
    }

std::string Stock::get_tickerName () {return this->ticker;}
std::string Stock::get_companyName () {return this->company;}
double Stock::get_price () {return this->price;}
double Stock::get_range () {return this->year_range;}
double Stock::get_200DayAVG () {return this->avg_200;}
double Stock::get_50DayAVG () {return this->avg_50;}
double Stock::get_dividendPay () {return this->div_pay;}
double Stock::get_dividendFrequency () {return this->div_freq;}
double Stock::get_divPay1 () {return this->div_pay1;}
double Stock::get_divPay2 () {return this->div_pay2;}
double Stock::get_divPay3 () {return this->div_pay3;}
double Stock::get_divPay4 () {return this->div_pay4;}
bool Stock::get_growth() {return this->growth;}
double Stock::get_growthConsistancy() {return this->growth_consistancy;}
double Stock::get_dividendConsistancy() {return this->dividend_consistancy;} 

void Stock::set_tickerName (std::string ticker) {this->ticker = ticker;}
void Stock::set_companyName (std::string company) {this->company = company;}
void Stock::set_price (double price) {this->price = price;}
void Stock::set_range (double year_range) {this->year_range = year_range;}
void Stock::set_200DayAVG (double avg_200) {this->avg_200 = avg_200;}
void Stock::set_50DayAVG (double avg_50) {this->avg_50 = avg_50;}
void Stock::set_dividendPay (double div_pay) {this->div_pay = div_pay;}
void Stock::set_dividendFrequency (double div_freq) {this->div_freq = div_freq;}
void Stock::set_divPay1 (double div_pay1) {this->div_pay1 = div_pay1;}
void Stock::set_divPay2 (double div_pay2) {this->div_pay1 = div_pay2;}
void Stock::set_divPay3 (double div_pay3) {this->div_pay1 = div_pay3;}
void Stock::set_divPay4 (double div_pay4) {this->div_pay1 = div_pay4;}
void Stock::set_growth(bool growth) {this->growth = growth;}
void Stock::set_growthConsistancy(double growth_consistancy) {this->growth_consistancy = growth_consistancy;}
void Stock::set_dividendConsistancy(double dividend_consistancy) {this->dividend_consistancy = dividend_consistancy;} 

std::string Stock::getInformation () {
    return "Stock Ticker Symbol: " + this->get_tickerName() + "\n" +
    "Stock ETF Name or Company: " + this->get_companyName() + "\n" +
    "Stock Current Trading Price: $" + std::to_string(this->get_price()) + "\n" +
    "Stock 52 Week Price Range: $" + std::to_string(this->get_range()) + " 200 Day Moving Average: $" + std::to_string(this->get_200DayAVG()) + " 50 Day Moving Average: $" + std::to_string(this->get_50DayAVG()) + "\n" +
    "Stock Dividend Pay : " + std::to_string(this->get_dividendPay()) + "%" + " Dividend Frequency: " + std::to_string(this->get_dividendFrequency()) + "\n" + 
    "Recent Dividend Payments: $" + std::to_string(this->get_divPay1()) + " -> $" + std::to_string(this->get_divPay2()) + " -> $" + std::to_string(this->get_divPay3()) + " -> $" + std::to_string(this->get_divPay4());


}