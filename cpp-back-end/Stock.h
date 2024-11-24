
/* 
* Creator: Earl John Castillo
* Date: 20/11/2024
* Purpose:
*   This is the stock object. Holds all nessisary information about a stock. 
*   Also contains getters and setters of nessisary Stock Object attributes
*   and has a formatted output to be used to display to React front-end
*/

//Compiler guards 
#ifndef STOCK_H 
#define STOCK_H
#endif

#include <string>

class Stock {
    private: 
        std::string ticker;    //This holds the ticker name of the stock
        std::string company;   //What the name of the company the stock represents or the name of the ETF
        double price;          //Current price of the stock as of Friday Nov 23, 2024
        double year_range;     //52 week range of the stock price 
        double avg_200;        //200 day moving average of the stock price
        double avg_50;         //50 day moving average of the stock price
        double div_pay;        //Dividend pay as a percentage 
        double div_freq;       //Dividend pay freuqency 1 -> Yearly 0.25 -> Quarterly 0.1 -> Monthly 
        double div_pay1;       //The most recent dividend pay amount 
        double div_pay2;       //The second most recent dividend pay amount 
        double div_pay3;       //The thrid most recent dividend pay amount 
        double div_pay4;       //The fourth most recent dividend pay amount 
        bool growth;           //True or false classification for the stock if it is a growth or dividend stock
        double growth_consistancy;   //How consistant is the growth of the stock 0-1. 1-> very consisant growth
        double dividend_consistancy; //How consistant is the dividend pay. 0-1. 1-> very consistant pay amount

    public:
        //function prototype for default constructor 
        Stock (); 

        //Fucntion prototype for Stock object constructor if all information is already aquired
        Stock (std::string ticker, std::string company, double price, double year_range, double avg_200, double avg_50,
        double div_pay, double div_freq, double div_pay1, double div_pay2, double div_pay3, double div_pay4); 

        //Getters for stock object attributes
        std::string get_tickerName ();
        std::string get_companyName (); 
        double get_price (); 
        double get_range (); 
        double get_200DayAVG ();
        double get_50DayAVG ();
        double get_dividendPay ();
        double get_dividendFrequency ();
        double get_divPay1 ();
        double get_divPay2 ();
        double get_divPay3 ();
        double get_divPay4 ();
        bool get_growth();
        double get_growthConsistancy();
        double get_dividendConsistancy();

        //Setters for stock object attributes
        void set_tickerName (std::string ticker);
        void set_companyName (std::string company);
        void set_price (double price);
        void set_range (double year_range);
        void set_200DayAVG (double avg_200);
        void set_50DayAVG (double avg_50);
        void set_dividendPay (double div_pay);
        void set_dividendFrequency (double div_freq);
        void set_divPay1 (double div_pay1);
        void set_divPay2 (double div_pay2);
        void set_divPay3 (double div_pay3);
        void set_divPay4 (double div_pay4);
        void set_growth(bool growth);
        void set_growthConsistancy(double growth_consistancy);
        void set_dividendConsistancy(double dividend_consistancy);

        //Save the stock's information into a string to output to React
        std::string getInformation ();

};