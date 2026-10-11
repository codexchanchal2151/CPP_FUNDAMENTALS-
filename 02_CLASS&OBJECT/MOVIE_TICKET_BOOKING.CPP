#include <iostream>
#include <string>
using namespace std;

class MovieTicket {
private:
    string movieName;
    char seatType; // 'N' for Normal, 'V' for VIP
    int tickets;
    float totalPrice;

public:
    void bookTicket() {
        cout << "Enter Movie Name: ";
        cin >> ws;
        getline(cin, movieName);
        cout << "Enter Seat Type ('N' for Normal @ Rs.150, 'V' for VIP @ Rs.300): ";
        cin >> seatType;
        cout << "Enter Number of Tickets: ";
        cin >> tickets;
    }

    void calculatePrice() {
        if (seatType == 'V' || seatType == 'v') {
            totalPrice = tickets * 300.0;
        } else {
            totalPrice = tickets * 150.0;
        }
    }

    void displayBooking() {
        cout << "\n--- Ticket Booking Summary ---" << endl;
        cout << "Movie: " << movieName << endl;
        cout << "Seat Type: " << (seatType == 'V' || seatType == 'v' ? "VIP" : "Normal") << endl;
        cout << "Tickets Booked: " << tickets << endl;
        cout << "Total Amount: Rs. " << totalPrice << endl;
    }
};

int main() {
    MovieTicket mt;
    mt.bookTicket();
    mt.calculatePrice();
    mt.displayBooking();
    return 0;
}
