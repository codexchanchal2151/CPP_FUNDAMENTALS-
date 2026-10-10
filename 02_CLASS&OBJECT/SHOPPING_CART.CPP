#include <iostream>
using namespace std;

class ShoppingCart {
    int itemCode[50];
    float itemPrice[50];
    int count;
public:
    void initCount() { count = 0; }
    
    void addItem() {
        cout << "Enter Item Code: ";
        cin >> itemCode[count];
        cout << "Enter Item Price: ";
        cin >> itemPrice[count];
        count++;
    }
    
    void displayTotal() {
        float sum = 0;
        for(int i = 0; i < count; i++) {
            sum += itemPrice[i];
        }
        cout << "\nTotal Cart Value: Rs. " << sum << endl;
    }
};

int main() {
    ShoppingCart cart;
    cart.initCount();
    int choice;
    do {
        cout << "\n1. Add Item\n2. Display Total\n3. Exit\nEnter your choice: ";
        cin >> choice;
        if(choice == 1) cart.addItem();
        else if(choice == 2) cart.displayTotal();
    } while(choice != 3);
    
    return 0;
}
