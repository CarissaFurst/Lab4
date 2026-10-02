#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "\n--- Menu ---\n";
    cout << left << setw(15) << "Drink" << setw(15) << "Small (S)" << right << setw(15) << "Medium (M)" << setw(15) << "Large (L)" << endl;
    cout << string(60, '-') << endl;
    cout << left << setw(15) << "Water (W)" << setw(15) << "$1.00" << right << setw(10) << "$1.50" << setw(16) << "$2.00" << endl;
    cout << left << setw(15) << "Soda (S)" << setw(15) << "$2.00" << right << setw(10) << "$2.50" << setw(16) << "$3.00" << endl;
    cout << left << setw(15) << "Coffee (C)" << setw(15) << "$1.50" << right << setw(10) << "$2.00" << setw(16) << "$2.50" << endl;
    cout << left << setw(15) << "Tea (T)" << setw(15) << "$1.50" << right << setw(10) << "$2.00" << setw(16) << "$2.50" << endl;
    cout << string(60, '-') << endl;

    cout << "Please make an item selection: ";
    string itemchoice;
    cin >> itemchoice;

    cout << "Please select a size (S/M/L): ";
    string sizechoice;
    cin >> sizechoice;

    string FoodName;
    char ItemCode;
    double UnitPrice;
    switch (itemchoice[0]) {
        case 'W':
            FoodName = "Water";
            ItemCode = 'W';
            switch (sizechoice[0]) {
                case 'S': UnitPrice = 1.00; break;
                case 'M': UnitPrice = 1.50; break;
                case 'L': UnitPrice = 2.00; break;
            }
            break;
        case 'S':
            FoodName = "Soda";
            ItemCode = 'S';
            switch (sizechoice[0]) {
                case 'S': UnitPrice = 2.00; break;
                case 'M': UnitPrice = 2.50; break;
                case 'L': UnitPrice = 3.00; break;
            }
            break;
        case 'C':
            FoodName = "Coffee";
            ItemCode = 'C';
            switch (sizechoice[0]) {
                case 'S': UnitPrice = 1.50; break;
                case 'M': UnitPrice = 2.00; break;
                case 'L': UnitPrice = 2.50; break;
            }
            break;
        case 'T':
            FoodName = "Tea";
            ItemCode = 'T';
            switch (sizechoice[0]) {
                case 'S': UnitPrice = 1.50; break;
                case 'M': UnitPrice = 2.00; break;
                case 'L': UnitPrice = 2.50; break;
            }
            break;
    }

    cout << "Quantity: ";
    int Quantity;
    cin >> Quantity;

    cout << "Member? ";
    bool Member;
    cin >> Member;
    double subtotal = Quantity * UnitPrice;
    double discount = 0.0;
    if (Member) {
       discount = subtotal * 0.1; // 10% discount for members
}
double afterDiscount = subtotal - discount;
string cashierNote;
const double ARKANSAS_TAX_RATE = 0.065;
const double FAULKNER_TAX_RATE = 0.005;
const double CONWAY_TAX_RATE = 0.02125;

double arkansasTax = afterDiscount * ARKANSAS_TAX_RATE;
double faulknerTax = afterDiscount * FAULKNER_TAX_RATE;
double conwayTax = afterDiscount * CONWAY_TAX_RATE;
double totalTax = arkansasTax + faulknerTax + conwayTax;
double tipAmount = 0.0;
int tipChoice;

cout << fixed << setprecision(2);
cout << "\n--- Tip Options ---\n";
cout << "1. 15% ($" << afterDiscount * 0.15 << ")\n";
cout << "2. 20% ($" << afterDiscount * 0.20 << ")\n";
cout << "3. 25% ($" << afterDiscount * 0.25 << ")\n";
cout << "4. Other Amount\n";
cout << "Select an option (1-4): ";
cin >> tipChoice;

switch (tipChoice) {
    case 1:
        tipAmount = afterDiscount * 0.15;
        break;
    case 2:
        tipAmount = afterDiscount * 0.20;
        break;
    case 3:
        tipAmount = afterDiscount * 0.25;
        break;
    case 4:
        cout << "Enter tip amount: $";
        cin >> tipAmount;
        break;
    default:
        cout << "Invalid option. No tip added.\n";
}

double total = afterDiscount + totalTax + tipAmount;
cin.ignore();
cout << "Cashier Note: ";
getline(cin, cashierNote);
// Customer requested extra sugar.
cout << left << setw(15) << "Subtotal:" <<fixed << setprecision(2) << subtotal << endl;
cout << left << setw(15) << "Discount:" <<fixed<< setprecision(2) << discount << endl; 
cout << left << setw(15) << "After Discount:" << fixed << setprecision(2) << afterDiscount << endl;
cout << left << setw(25) << "Arkansas Tax (6.5%):"
     << "$" << arkansasTax << endl;
cout << left << setw(25) << "Faulkner Tax (0.5%):"
     << "$" << faulknerTax << endl;
cout << left << setw(25) << "Conway Tax (2.125%):"
     << "$" << conwayTax << endl;
cout << left << setw(25) << "Total Tax:"
     << "$" << totalTax << endl;
cout << left << setw(25) << "Tip:"
     << "$" << tipAmount << endl;
cout << left << setw(25) << "Total:"
     << "$" << total << endl;
cout << left << setw(15) << "Cashier Note:" << cashierNote << endl;
    cout << left << setw(15) << "Food Name: " << FoodName << endl;
    cout << left << setw(15) << "Item Code: " << ItemCode << endl;
    cout << left << setw(15) << "Quantity: " << Quantity << endl;
    cout << left << setw(15) << "Unit Price: " << fixed << setprecision(2) << UnitPrice << endl;
    cout << left << setw(15) << "Member? " << (Member ? "Yes" : "No") << endl;
cout << "\n--- Inventory Audit ---\n";
cout << left << setw(20) << "Item";
cout << setw(10) << "Code";
cout << right << setw(10) << "Quantity";
 cout << setw(12) << "Price" << endl;   
cout << string(52, '-') << endl;
cout << left << setw(20) << FoodName;
cout << setw(10) << ItemCode;
cout << right << setw(10) << Quantity;
cout << setw(12) << fixed << setprecision(2) << UnitPrice << endl;
cout << string(52, '-') << endl;

return 0;
}