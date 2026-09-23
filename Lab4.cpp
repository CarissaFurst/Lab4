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

    cout << left << setw(15) << "Food Name: " << FoodName << endl;
    cout << left << setw(15) << "Item Code: " << ItemCode << endl;
    cout << left << setw(15) << "Quantity: " << Quantity << endl;
    cout << left << setw(15) << "Unit Price: " << fixed << setprecision(2) << UnitPrice << endl;
    cout << left << setw(15) << "Member? " << (Member ? "Yes" : "No") << endl;
}