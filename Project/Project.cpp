// Project.cpp 
//

#include <iostream>
using namespace std;

//Function for calculating cost of the item price multiplied by the quantity
static double FinalCost(int ItemNumber, int Quantity) {
    double Price = 0;
    double TotalCost;
    switch (ItemNumber) {
    case 1:
        Price = 150.00;
        break;
    case 2:
        Price = 250.00;
        break;
    case 3:
        Price = 100.00;
        break;
    case 4:
        Price = 500.00;
        break;
    case 5:
        Price = 750.00;
        break;
    case 6:
        Price = 1200.00;
        break;
    case 7:
        Price = 1000.00;
        break;
    case 8:
        Price = 300.00;
        break;
    }
    TotalCost = Price * Quantity;

    return TotalCost;

}

//function for calculating discount
static double Discount(double Total) {
    double discount;
    if (Total > 2000) {
        discount = Total * 0.15;
    }
    return discount;
}

//function for calculating final total 
static double FinalTotal(double Total, double Discount) {
    int finalTotal;
    finalTotal = Total - Discount;

    return finalTotal;
}


int main()
{
    string firstName;
    string lastName;
    int NumberOfItems;
    int ItemNumber;
    int Quantity;
    int times = 1;
    double finalTotal;
    double Cost;
    double Total = 0;
    double discount;

    cout << "First name: ";
    cin >> firstName;
    cout << "Last name: ";
    cin >> lastName;
    cout << endl;

    cout << "Tech  Store Catalogue:" << endl;
    cout << "1. Wireless Mouse - R150.00" << endl;
    cout << "2. Bluetooth Speaker - R250.00" << endl;
    cout << "3. USB Flash Drive - R100.00" << endl;
    cout << "4. Gaming Keyboard - R500.00" << endl;
    cout << "5. Noise-Cancelling Headphones - R750.00" << endl;
    cout << "6. Smartwatch - R1,200.00" << endl;
    cout << "7. External Hard Drive - R1,000.00" << endl;
    cout << "8. Portable  Charger - R300.00" << endl;
    cout << endl;

    cout << "How many items would you like to purchase (up to 10)? ";
    cin >> NumberOfItems;

    //switch case for user input based on how many items they want to buy.
    switch (NumberOfItems) {
    case 1:
        cout << "Enter the item number (1-8): ";
        cin >> ItemNumber;
        cout << "Enter the quantity: ";
        cin >> Quantity;
        Cost = FinalCost(ItemNumber,Quantity);
        Total += Cost;
        
        break;

    case 2:
        do {
            cout << "Enter the item number (1-8): ";
            cin >> ItemNumber;
            cout << "Enter the quantity: ";
            cin >> Quantity;
            times += 1;
            Cost = FinalCost(ItemNumber, Quantity);
            Total += Cost;
            
        } while (times <= 2);
        break;

    case 3:
        do {
            cout << "Enter the item number (1-8): ";
            cin >> ItemNumber;
            cout << "Enter the quantity: ";
            cin >> Quantity;
            times += 1;
            Cost = FinalCost(ItemNumber, Quantity);
            Total += Cost;

        } while (times <= 3);
        break;

    case 4:
        do {
            cout << "Enter the item number (1-8): ";
            cin >> ItemNumber;
            cout << "Enter the quantity: ";
            cin >> Quantity;
            times += 1;
            Cost = FinalCost(ItemNumber, Quantity);
            Total += Cost;

        } while (times <= 4);
        break;

    case 5:
        do {
            cout << "Enter the item number (1-8): ";
            cin >> ItemNumber;
            cout << "Enter the quantity: ";
            cin >> Quantity;
            times += 1;
            Cost = FinalCost(ItemNumber, Quantity);
            Total += Cost;

        } while (times <= 5);
        break;

    case 6:
        do {
            cout << "Enter the item number (1-8): ";
            cin >> ItemNumber;
            cout << "Enter the quantity: ";
            cin >> Quantity;
            times += 1;
            Cost = FinalCost(ItemNumber, Quantity);
            Total += Cost;

        } while (times <= 6);
        break;

    case 7:
        do {
            cout << "Enter the item number (1-8): ";
            cin >> ItemNumber;
            cout << "Enter the quantity: ";
            cin >> Quantity;
            times += 1;
            Cost = FinalCost(ItemNumber, Quantity);
            Total += Cost;

        } while (times <= 7);
        break;

    case 8:
        do {
            cout << "Enter the item number (1-8): ";
            cin >> ItemNumber;
            cout << "Enter the quantity: ";
            cin >> Quantity;
            times += 1;
            Cost = FinalCost(ItemNumber, Quantity);
            Total += Cost;

        } while (times <= 8);
        break;


        
    }
    discount = Discount(Total);
    finalTotal = FinalTotal(Total, discount);
    cout << endl;
    cout << "Subtotal: R" << Total << endl;
    cout << "Discount: R" << discount << endl;
    cout << "Final Total: R" << finalTotal << endl;


}
