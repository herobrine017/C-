#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ----------------- Item Class -----------------
class Item {
public:
    int itemID;
    string itemName;
    double price;
    int stockQuantity;

    Item(int id, string name, double p, int stock) {
        itemID = id;
        itemName = name;
        price = p;
        stockQuantity = stock;
    }
};

// ----------------- Bill Class -----------------
class Bill {
public:
    int billID;
    string customerName;
    vector<pair<Item, int>> purchasedItems;  // pair = {Item, Quantity}

    Bill(int id, string name) {
        billID = id;
        customerName = name;
    }

    void addItem(Item item, int qty) {
        purchasedItems.push_back({item, qty});
    }

    void displayBill() {
        cout << "\n===== BILL DETAILS =====\n";
        cout << "Bill ID: " << billID << endl;
        cout << "Customer: " << customerName << endl;
        cout << "Items Purchased:\n";

        double total = 0;
        for (int i = 0; i < purchasedItems.size(); i++) {
            cout << "  " << purchasedItems[i].first.itemName 
                 << " x" << purchasedItems[i].second
                 << " - Rs." << purchasedItems[i].first.price * purchasedItems[i].second 
                 << endl;
            total += purchasedItems[i].first.price * purchasedItems[i].second;
        }

        cout << "-------------------------\n";
        cout << "Total Amount: Rs." << total << endl;
        cout << "=========================\n";
    }
};

// ----------------- Main -----------------
int main() {
    // Inventory
    vector<Item> inventory;
    inventory.push_back(Item(101, "Laptop", 50000, 10));
    inventory.push_back(Item(102, "Smartphone", 20000, 20));
    inventory.push_back(Item(103, "Headphones", 2000, 50));
    inventory.push_back(Item(104, "Keyboard", 1500, 30));

    // Enter customer details
    string name;
    cout << "Enter customer name: ";
    getline(cin, name);

    Bill b1(1, name);

    // Purchase items
    int choice, qty;
    while (true) {
        cout << "\nEnter Item ID to buy (0 to finish): ";
        cin >> choice;

        if (choice == 0) break;

        cout << "Enter quantity: ";
        cin >> qty;

        bool found = false;
        for (int i = 0; i < inventory.size(); i++) {
            if (inventory[i].itemID == choice) {
                if (inventory[i].stockQuantity >= qty) {
                    b1.addItem(inventory[i], qty);
                    inventory[i].stockQuantity -= qty; // reduce stock
                    cout << qty << " " << inventory[i].itemName << "(s) added to bill.\n";
                } else {
                    cout << "Sorry, only " << inventory[i].stockQuantity << " left in stock!\n";
                }
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Invalid Item ID!\n";
        }
    }

    // Display final bill
    b1.displayBill();

    return 0;
}
