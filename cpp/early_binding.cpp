// operator overloading | early binding

#include <iostream>
using namespace std;

class time1
{
    int hrs;
    int mins;

public:
    time1() // constructor for 1st object ie. t1;
    {
        hrs = 0;
        mins = 0;
    }
    time1(int h, int m) // this constructor is for another object that we will create as t2;
    {
        hrs = h;
        mins = m;
    }
    friend ostream &operator<<(ostream &otime, time1 t);
    friend istream &operator>>(istream &input, time1 t);
};

ostream &operator<<(ostream &otime, time1 t)
{
    otime << "t1 is: " << t.hrs << " : " << t.mins << endl;
    return otime;
}

istream &operator>>(istream &input, time1 t)
{
    input >> t.hrs;
    input >> t.mins;
    return input;
}

int main()
{
    time1 t1;

    cout << "enter your t1: ";
    cin >> t1;
    cout << t1;

    time1 t2(12, 13);
    cout << "your t2 is: " << t2;

    return 0;
}
