#include <iostream>


using namespace std;

int main(){
    const double sales = 95000;

    const double stateTaxRate = .04;
    double stateTax = stateTaxRate * sales;
    cout << "State Tax = $" << stateTax << endl;

    const double countyTaxRate = .02;
    double countyTax = countyTaxRate * sales;
    cout << "County Tax = $" << countyTax << endl;


    const double totalTax = (stateTax + countyTax);
    double netEarnings = sales - totalTax;
    cout << "Net Earnings = $" << netEarnings << endl;


}