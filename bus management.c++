#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Bus
{
private:
    bool booked[10];
    string passengerName[10];       
    string arrival[10];
    string destination[10];

public:

    // Constructor
    Bus()        
    {
        for (int i = 0; i < 10; i++)
        {
            booked[i] = false;
            passengerName[i] = "";
            arrival[i] = "";
            destination[i] = "";
        }

        loadData();
    }

    // Load previous bookings from file
    void loadData()
    {
        ifstream file("tickets.txt");

        if (!file)
            return;

        int seat;
        string name, from, to;

        while (file >> seat)
        {
            file.ignore();

            getline(file, name);
            getline(file, from);
            getline(file, to);

            if (seat >= 1 && seat <= 10)
            {
                booked[seat - 1] = true;
                passengerName[seat - 1] = name;
                arrival[seat - 1] = from;
                destination[seat - 1] = to;
            }
        }

        file.close();
    }

    // Display bus
    void showBus()
    {
        cout << "\n\n";
        cout << "        _______________________________________________\n";
        cout << "       /                                               \\\n";
        cout << "      /              ARYA SERVICES BUS                  \\\n";
        cout << "     /___________________________________________________\\\n";
        cout << "     |                                                   |\n";

        for (int row = 0; row < 5; row++)
        {
            int leftSeat = row * 2;
            int rightSeat = row * 2 + 1;

            cout << "     |     +---------+          +---------+             |\n";

            cout << "     |     |  SEAT " << leftSeat + 1;

            if (leftSeat + 1 < 10)
                cout << " |          |  SEAT " << rightSeat + 1;
            else
                cout << " |          |  SEAT" << rightSeat + 1;

            cout << "  |\n";

            cout << "     |     |    ";

            if (booked[leftSeat])
                cout << "X";
            else
                cout << "O";

            cout << "    |          |    ";

            if (booked[rightSeat])
                cout << "X";
            else
                cout << "O";

            cout << "    |\n";

            cout << "     |     +---------+          +---------+             |\n";
            cout << "     |                                                   |\n";
        }

        cout << "     |                  +-----------+                   |\n";
        cout << "     |                  |  DRIVER   |                   |\n";
        cout << "     |                  +-----------+                   |\n";
        cout << "     |___________________________________________________|\n";
        cout << "           O = AVAILABLE       X = BOOKED\n";
        cout << "\n";
    }

    // Count available seats
    int availableSeats()
    {
        int count = 0;

        for (int i = 0; i < 10; i++)
        {
            if (!booked[i])
                count++;
        }

        return count;
    }

    // Save booking in file
    void saveTicket(int seat)
    {
        ofstream file("tickets.txt", ios::app);

        file << seat << endl;
        file << passengerName[seat - 1] << endl;
        file << arrival[seat - 1] << endl;
        file << destination[seat - 1] << endl;

        file.close();
    }

    // Book tickets
    void bookTicket()
    {
        int number;

        cout << "\n============================================\n";
        cout << "             TICKET BOOKING\n";
        cout << "============================================\n";

        cout << "How many passengers do you want to book? ";
        cin >> number;

        if (number <= 0)
        {
            cout << "\nInvalid number of passengers!\n";
            return;
        }

        int available = availableSeats();

        // If requested tickets are more than available seats
        if (number > available)
        {
            cout << "\nOnly " << available << " seats are available.\n";

            char choice;

            cout << "Do you want to book the available "
                 << available << " seats? (Y/N): ";

            cin >> choice;

            if (choice == 'Y' || choice == 'y')
            {
                number = available;
            }
            else
            {
                cout << "\nBooking cancelled.\n";
                return;
            }
        }

        for (int i = 0; i < number; i++)
        {
            cout << "\n--------------------------------------------\n";
            cout << "             PASSENGER " << i + 1 << "\n";
            cout << "--------------------------------------------\n";

            cin.ignore();

            cout << "Enter passenger name: ";
            getline(cin, passengerName[i]);

            cout << "Enter arrival place: ";
            getline(cin, arrival[i]);

            cout << "Enter destination: ";
            getline(cin, destination[i]);

            // Show bus before selecting seat
            showBus();

            int seat;

            while (true)
            {
                cout << "Enter seat number (1-10): ";
                cin >> seat;

                if (seat < 1 || seat > 10)
                {
                    cout << "Invalid seat number! Try again.\n";
                }
                else if (booked[seat - 1])
                {
                    cout << "This seat is already booked! Choose another seat.\n";
                }
                else
                {
                    break;
                }
            }

            booked[seat - 1] = true;

            // Copy passenger details to correct seat
            passengerName[seat - 1] = passengerName[i];
            arrival[seat - 1] = arrival[i];
            destination[seat - 1] = destination[i];

            saveTicket(seat);

            // Display ticket
            cout << "\n\n";
            cout << "============================================\n";
            cout << "              TICKET BOOKED!\n";
            cout << "============================================\n";
            cout << "               ARYA SERVICES\n";
            cout << "--------------------------------------------\n";
            cout << "Passenger Name : " << passengerName[seat - 1] << endl;
            cout << "Arrival        : " << arrival[seat - 1] << endl;
            cout << "Destination    : " << destination[seat - 1] << endl;
            cout << "Seat Number    : " << seat << endl;
            cout << "--------------------------------------------\n";
            cout << "        Thank You For Booking!\n";
            cout << "============================================\n";

            // Show updated bus after booking
            cout << "\nUpdated Bus Status:\n";
            showBus();
        }
    }

    // Show all booked tickets
    void showTickets()
    {
        bool found = false;

        cout << "\n============================================\n";
        cout << "             BOOKED TICKETS\n";
        cout << "============================================\n";

        for (int i = 0; i < 10; i++)
        {
            if (booked[i])
            {
                found = true;

                cout << "\nSeat Number : " << i + 1 << endl;
                cout << "Passenger   : " << passengerName[i] << endl;
                cout << "Arrival     : " << arrival[i] << endl;
                cout << "Destination : " << destination[i] << endl;
                cout << "--------------------------------------------\n";
            }
        }

        if (!found)
        {
            cout << "\nNo tickets have been booked yet.\n";
        }
    }
};


// MAIN FUNCTION
int main()
{
    Bus bus;

    int choice;

    cout << "\n\n";
    cout << "====================================================\n";
    cout << "                                                    \n";
    cout << "             WELCOME TO ARYA SERVICES               \n";
    cout << "             BUS TICKET BOOKING SYSTEM              \n";
    cout << "                                                    \n";
    cout << "====================================================\n";

    do
    {
        cout << "\n\n";
        cout << "================ MAIN MENU ================\n";
        cout << "1. Show Bus & Seat Diagram\n";
        cout << "2. Book Ticket\n";
        cout << "3. Show Booked Tickets\n";
        cout << "4. Exit\n";
        cout << "============================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bus.showBus();
            break;

        case 2:
            bus.bookTicket();
            break;

        case 3:
            bus.showTickets();
            break;

        case 4:
            cout << "\nThank you for using Arya Services!\n";
            cout << "Have a safe journey!\n";
            break;

        default:
            cout << "\nInvalid choice! Please enter 1-4.\n";
        }

    } while (choice != 4);

    return 0;
}