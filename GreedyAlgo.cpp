// GreedyAlgo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void changeNeeded(double ammount[], double total[], double dollarAmmount);


int main()
{
    double ammount[5] = {1.00, 0.25, 0.10, 0.05, 0.01};
    double total[5] = {0, 0, 0, 0, 0};
    double dollarAmmount;

    std::cin >> dollarAmmount;

    changeNeeded(ammount, total, dollarAmmount);

    std::cout << "Dollars: " << total[0] << "\n";
    std::cout << "quarters: " << total[1] << "\n";
    std::cout << "dimes: " << total[2] <<"\n";
    std::cout << "nickles: " << total[3] <<"\n";
    std::cout << "pennies: " << total[4] <<"\n";

}

void changeNeeded(double ammount[], double total[], double dollarAmmount) {
    for (int i = 0; i < 5; i++) {
        while (dollarAmmount >= ammount[i]) {
            total[i] += 1;
            dollarAmmount -= ammount[i];
            
        }
    }
}
