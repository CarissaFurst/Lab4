#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Food Name: ";
    string FoodName;
    getline(cin, FoodName);

    cout << "Item Code: ";
    char ItemCode;
    cin >> ItemCode;

    cout << "Quantity: ";
    int Quantity;
    cin >> Quantity;

    cout << "Unit Price: ";
    double UnitPrice;
    cin >> UnitPrice;

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
cin.ignore();
cout << "Cashier Note: ";
getline(cin, cashierNote);
// Customer requested extra sugar.
cout << left << setw(15) << "Subtotal:" <<fixed << setprecision(2) << subtotal << endl;
cout << left << setw(15) << "Discount:" <<fixed<< setprecision(2) << discount << endl; 
cout << left << setw(15) << "After Discount:" << fixed << setprecision(2) << afterDiscount << endl;
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

return 0;
}