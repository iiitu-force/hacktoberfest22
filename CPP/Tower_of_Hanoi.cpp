#include <bits/stdc++.h>
using namespace std;
void towers(int, char, char, char);
int main()
{
    int num;
    cout<<"Enter the no. of Disks : ";
    cin>>num;
    cout<<"The Required sequence by which disks will move correctly :n";
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        cout<<"n Move disk 1 from peg "<<frompeg<<" to peg "<<topeg;
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    cout<<"n Move disk "<<num<<" from peg "<<frompeg<<" to peg "<<topeg;
    towers(num - 1, auxpeg, topeg, frompeg);
}