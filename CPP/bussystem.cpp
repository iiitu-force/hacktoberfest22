#include <iostream>
using namespace std;
class BUS_RESERVATION
{
public:
    int num, select, mode, shift, type, year, month, day, seat_number;
    char Fname[100];
    char Lname[100];
};
int main()
{
    BUS_RESERVATION B;
    cout << "------------------------------------------" << endl;
    cout << "Welcome to Sachin Tours and Travels" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Press 1 for booking a ticket" << endl;
    cout << "Press 2 to know about Sachin tours and travels" << endl;
    cout << "Press 3 to know about price of bus seat::>" << endl
         << "::>";
    cin >> B.num;
    cout << "------------------------------------------" << endl;
    if (B.num == 1)
    {
        cout << "WELCOME TO THE BOOKING ZONE!!!" << endl;
        cout << "Enter your first name" << endl
             << "FIRST NAME::>";
        cin >> B.Fname;
        cout << endl
             << endl;
        cout << "Enter your last name" << endl
             << "LAST NAME::>";
        cin >> B.Lname;
        cout << "------------------------------------------" << endl;
        cout << "Select your destination" << endl;
    Label:
        cout << "1.Kathmandu\t2.Biratnagar\t3.Birgunj\t4.Sunsari\t5.Dharan" << endl
             << "::>";
        cin >> B.select;
        if (B.select == 1)
        {
            cout << "YOU SELECTED KATHMANDU!!!" << endl;
            cout << "------------------------------------------" << endl;
            cout << "There are two shifts running currently" << endl;
        Label1:
            cout << "Press 1 for Day Route at 3:00pm and Press 2 for night route at 9:00pm" << endl
                 << "::>";
            cin >> B.shift;
            if (B.shift == 1)
            {
                cout << "YOU SELECTED DAY ROUTE!!" << endl;
                cout << "------------------------------------------" << endl;
            }
            else if (B.shift == 2)
            {
                cout << "YOU SELECTED NIGHT ROUTE!!" << endl;
                cout << "------------------------------------------" << endl;
            }
            else
            {
                cout << "Invalid choice!" << endl;
                cout << "Please reselect the correct choice!" << endl;
                goto Label1;
            }
        }
        else if (B.select == 2)
        {
            cout << "YOU SELECTED BIRATNAGAR!!!" << endl;
            cout << "------------------------------------------" << endl;
            cout << "There are two shifts running currently" << endl;
        Label2:
            cout << "Press 1 for Day Route at 3:00pm and Press 2 for night route at 9:00pm" << endl
                 << "::>";
            cin >> B.shift;
            if (B.shift == 1)
            {
                cout << "YOU SELECTED DAY ROUTE!!" << endl;
                cout << "------------------------------------------" << endl;
            }
            else if (B.shift == 2)
            {
                cout << "YOU SELECTED NIGHT ROUTE!!" << endl;
                cout << "------------------------------------------" << endl;
            }
            else
            {
                cout << "Invalid choice!" << endl;
                cout << "Please reselect the correct choice!" << endl;
                goto Label2;
            }
        }
        else if (B.select == 3)
        {
            cout << "YOU SELECTED BIRGUNJ!!!" << endl;
            cout << "------------------------------------------" << endl;
            cout << "There are two shifts running currently" << endl;
        Label3:
            cout << "Press 1 for Day Route at 3:00pm and Press 2 for night route at 9:00pm" << endl
                 << "::>";
            cin >> B.shift;
            if (B.shift == 1)
            {
                cout << "YOU SELECTED DAY ROUTE!!" << endl;
                cout << "------------------------------------------" << endl;
            }
            else if (B.shift == 2)
            {
                cout << "YOU SELECTED NIGHT ROUTE!!" << endl;
                cout << "------------------------------------------" << endl;
            }
            else
            {
                cout << "Invalid choice!" << endl;
                cout << "Please reselect the correct choice!" << endl;
                goto Label3;
            }
        }
        else if (B.select == 4)
        {
            cout << "YOU SELECTED SUNSARI!!!" << endl;
            cout << "------------------------------------------" << endl;
            cout << "There are two shifts running currently" << endl;
        Label4:
            cout << "Press 1 for Day Route at 3:00pm and Press 2 for night route at 9:00pm" << endl
                 << "::>";
            cin >> B.shift;
            if (B.shift == 1)
            {
                cout << "YOU SELECTED DAY ROUTE!!" << endl;
                cout << "------------------------------------------" << endl;
            }
            else if (B.shift == 2)
            {
                cout << "YOU SELECTED NIGHT ROUTE!!" << endl;
                cout << "------------------------------------------" << endl;
            }
            else
            {
                cout << "Invalid choice!" << endl;
                cout << "Please reselect the correct choice!" << endl;
                goto Label4;
            }
        }
        else if (B.select == 5)
        {
            cout << "YOU SELECTED DHARAN!!!" << endl;
            cout << "------------------------------------------" << endl;
            cout << "There are two shifts running currently" << endl;
        Label5:
            cout << "Press 1 for Day Route at 3:00pm and Press 2 for night route at 9:00pm" << endl
                 << "::>";
            cin >> B.shift;
            if (B.shift == 1)
            {
                cout << "YOU SELECTED DAY ROUTE!!" << endl;
                cout << "------------------------------------------" << endl;
            }
            else if (B.shift == 2)
            {
                cout << "YOU SELECTED NIGHT ROUTE!!" << endl;
                cout << "------------------------------------------" << endl;
            }
            else
            {
                cout << "Invalid choice!" << endl;
                cout << "Please reselect the correct choice!" << endl;
                goto Label5;
            }
        }
        else
        {
            cout << "Invalid choice!" << endl;
            cout << "Please reselect the correct choice!" << endl;
            goto Label;
        }
    Label6:
        cout << "Type the year of departure ranging between (2078-2079)" << endl
             << "::>";
        cin >> B.year;
        if (B.year >= 2078 && B.year <= 2079)
        {
        Label7:
            cout << "Type the month of departure ranging between (1-12)" << endl
                 << "::>";
            cin >> B.month;
            if (B.month >= 1 && B.month <= 12)
            {
            Label8:
                cout << "Type the date of departure ranging between(1-30)" << endl
                     << "::>";
                cin >> B.day;
                cout << "------------------------------------------" << endl;
                if (B.day >= 1 && B.day <= 30)
                {
                Label9:
                    cout << "Select a bus type!" << endl;
                    cout << "1.Deluxe\t\t2.Normal" << endl
                         << "::>";
                    cin >> B.type;
                    if (B.type == 1)
                    {
                        cout << "You selected Deluxe type" << endl;
                        cout << "------------------------------------------" << endl;
                    Label10:
                        cout << "Enter the seat number ranging from (1-30)!" << endl
                             << "::>";
                        cin >> B.seat_number;
                        if (B.seat_number >= 1 && B.seat_number <= 30)
                        {
                            cout << "------------------------------------------" << endl;
                            cout << "--------" << endl;
                            cout << "TICKET!!" << endl;
                            cout << "--------" << endl;
                            cout << "NAME::" << B.Fname << " " << B.Lname << endl;
                            cout << "DESTINATION::" << B.select << endl;
                            cout << "SHIFT::" << B.shift << endl;
                            cout << "DEPARTURE DATE:" << B.year << "/" << B.month << "/" << B.day << endl;
                            cout << "SEAT NUMBER::" << B.seat_number << endl;
                            cout << "TICKET STATUS::Booked!!" << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << "Please transferr the required money as listed to number 98xxxxxxxx through E-sewa to get your E-Ticket verified!!" << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << "Please show this E-ticket to TC on Departure date to get your respective seat" << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << "CODED BY SACHIN PANTHA!!!\n"
                                 << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------" << endl;
                        }
                        else
                        {
                            cout << "Invalid choice!" << endl;
                            cout << "Please reselect the correct choice!" << endl;
                            goto Label10;
                        }
                    }
                    else if (B.type == 2)
                    {
                        cout << "You selected Normal type" << endl;
                        cout << "------------------------------------------" << endl;
                    Label11:
                        cout << "Enter the seat number ranging from (1-30)!" << endl
                             << "::>";
                        cin >> B.seat_number;
                        if (B.seat_number >= 1 && B.seat_number <= 30)
                        {
                            cout << "------------------------------------------" << endl;
                            cout << "------------------------------------------" << endl;
                            cout << "--------" << endl;
                            cout << "TICKET!!" << endl;
                            cout << "--------" << endl;
                            cout << "NAME::" << B.Fname << " " << B.Lname << endl;
                            cout << "DESTINATION::" << B.select << endl;
                            cout << "SHIFT::" << B.shift << endl;
                            cout << "DEPARTURE DATE:" << B.year << "/" << B.month << "/" << B.day << endl;
                            cout << "SEAT NUMBER::" << B.seat_number << endl;
                            cout << "TICKET STATUS::Booked!!" << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << "Please transferr the required money as listed to number 98xxxxxxxx through E-sewa to get your E-Ticket verified!!" << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << "Please show this E-ticket to TC on Departure date to get your respective seat" << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << "CODED BY SACHIN PANTHA!!!\n"
                                 << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------" << endl;
                        }
                        else
                        {
                            cout << "Invalid choice!" << endl;
                            cout << "Please reselect the correct choice!" << endl;
                            goto Label11;
                        }
                    }
                    else
                    {
                        cout << "Invalid choice!" << endl;
                        cout << "Please reselect the correct choice!" << endl;
                        goto Label9;
                    }
                }
                else
                {
                    cout << "Invalid date entered!" << endl;
                    cout << "Please reselect the correct choice!" << endl;
                    goto Label8;
                }
            }
            else
            {
                cout << "Invalid month entered!" << endl;
                cout << "Please reselect the correct choice!" << endl;
                goto Label7;
            }
        }
        else
        {
            cout << "Invalid year entered!" << endl;
            cout << "Please reselect the correct choice!" << endl;
            goto Label6;
        }
    }

    else if (B.num == 2)
    {
        cout << "Sachin tours and travels is an emerging travel company located in the lap of small chure hills in Butwal.Sachin tours and travels specially focuses in luxury and deluxe travels even in tough roads.ST&T has currenty 5 destinations running in the 2 shifts by highly qualified drivers and experts.";
    }
    else if (B.num == 3)

    {
        cout << "Select a bus type!" << endl;
        cout << "1.Deluxe\t\t2.Normal" << endl
             << "::>";
        cin >> B.type;
        if (B.type == 1)
        {
            cout << "The price list of Deluxe seats are!" << endl;
            printf("1.Kathamandu------->Rs.1500\n2.Biratnagar------->Rs.1300\n3.Birgunj------->Rs.1500\n4.Sunsari------->Rs.1300\n5.Dharan------->Rs.1400");
        }
        else if (B.type == 2)
        {
            cout << "The price list of normal seats are!" << endl;
            cout << "1.Kathamandu------->Rs.800" << endl
                 << "2.Biratnagar------->Rs.700" << endl
                 << "3.Birgunj------->Rs.600" << endl
                 << "4.Sunsari------->Rs.750" << endl
                 << "5.Dharan------->Rs.800";
        }
        else
        {
            cout << "Invalid choice!";
        }
    }
    else
    {
        cout << "Invalid choice!";
    }
}