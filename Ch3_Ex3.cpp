/* Program File Name: Ch3_Ex3
Programmer: Frank Sonsini
Date: October 2026
Requirements:
Write a program that inputs the following monthly costs:
   rent or mortgage payment, phones, internet service, utilities and cable
   then calculate and display the monthly and annual totals for these costs
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double housing_cost, phones, internet, utilities, cable;
    double monthly_total, annual_total;
    
    cout << fixed << setprecision(2);

    cout << "What is your monthly rent or mortgage payment?" << endl;
    cin >> housing_cost;
    cout << "What is your monthly cost for phones?" << endl;
    cin >> phones;
    cout << "What is your monthly cost for internet service?" << endl;
    cin >> internet;
    cout << "What is your monthly cost for utilities?" << endl;
    cin >> utilities;
    cout << "What is your monthly cost for cable?" << endl;
    cin >> cable;

    monthly_total = housing_cost + phones + internet + utilities + cable;
    annual_total = 12 * monthly_total;

    cout << "Your total costs are $" << monthly_total <<" monthly, and $" <<annual_total << " annually" << endl;
    return 0;
}