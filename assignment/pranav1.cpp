#include <iostream>
#include <vector>
#include <fstream>
#include <stdexcept>
using namespace std;

class Item
{
public:
    int itemID, stockQuantity;
    string itemName;
    double price;

    Item(int id=0, string name="", double p=0.0, int qty=0)
    {
        if(p < 0 || qty < 0)
        {
            throw invalid_argument("Price/Quantity cannot be negative!");
        }

        itemID = id;
        itemName = name;
        price = p;
        stockQuantity = qty;
    }
};

class Bill
{
    int billID;
    string customerName;
    vector<Item> purchasedItems;
public:
    Bill(int id=0, string name="")
    {
        billID = id;
        customerName = name;
    }

    // Overload + to add item
    Bill& operator+(Item &it)
    {
        if(it.stockQuantity <= 0)
        {
            throw runtime_error("Item out of stock!");
        }
        purchasedItems.push_back(it);
        it.stockQuantity--;  // reduce stock
        return *this;
    }

    // Overload << to display bill
    friend ostream& operator<<(ostream &out, const Bill &b)
    {
        if(b.purchasedItems.empty())
        {
            throw runtime_error("Cannot generate empty bill!");
        }
        out << "\nBill ID: " << b.billID << "\nCustomer: " << b.customerName << "\nItems:\n";
        double total=0;
        for (size_t i = 0; i < b.purchasedItems.size(); i++)
        {
        out << b.purchasedItems[i].itemID << " "
            << b.purchasedItems[i].itemName << " Rs."
            << b.purchasedItems[i].price << "\n";

        total += b.purchasedItems[i].price;
        }
        out << "Total: Rs." << total << "\n";
        return out;
    }

    // Save bill to file
    void saveBill()
    {
        ofstream onFile("bills.txt", ios::app);

        if(!onFile)
        {
            throw runtime_error("File error!");
        }
        onFile << "BillID:" << billID << " Customer:" << customerName << "\n";
        double total=0;
        for (size_t i = 0; i < purchasedItems.size(); i++)
        {
            onFile << purchasedItems[i].itemID << " "
                 << purchasedItems[i].itemName << " "
                 << purchasedItems[i].price << "\n";

        total += purchasedItems[i].price;
        }

        onFile << "Total: " << total << "\n\n";
        onFile.close();
    }
};

int main() {
    try {

        // Inventory
        Item laptop(1,"Laptop",50000,2);
        Item mouse(2,"Mouse",500,5);
        Item keyboard(3,"Keyboard",1500,3);

        // Create Bill
        Bill b1(101,"Pranav");

        b1 + laptop;//b1.operator+(laptop);
        b1 + mouse;
        b1 + keyboard;

        cout << b1;  // Display bill
        b1.saveBill(); // Save bill

    } catch(exception &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}