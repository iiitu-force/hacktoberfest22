// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "hello world";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//         int num1, num2,sum;
//         cout<< "num1"<<"  "<< "num2" <<endl;
//         cin >> num1 >> num2;
//         sum = num1 + num2;
//         cout << "sum =" << sum << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// { 
//     int a=5;
//     int b=7;
//     cout << "sum = "<< a+b;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=30;
//     int b=a;
//     int *roll = &b;
//     // const int roll=b;
//     cout<<"roll no.="<<" "<< *roll << endl<< a <<endl<< &b <<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"What is your age="<<endl;
//     cin>> age;
//     if((age<18) &&(age>4))
//     {
//         cout<<"you are more than 4 but less than 18"<<endl;
//     }
//     else if((age==18))
//     {
//         cout<<"You are of 18"<<endl;
//     }
//     else{
//         cout<<"You are more than 18"<<endl;
    // }

    
//     switch (age)
//     {
//     case 12:
//         /* code */
//         cout<<"you are less than 18"<<endl;
//         break;
//     case 19:
//     cout<<"you are more than 18"<<endl;
//     default:
//     cout<<"no cases left"<<endl;
//         break;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i, n=5;
//     for (i=0; i<=10;i++)
//     {
//         cout<<i*n<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int* s=&a;
    cout<< s <<endl;
    cout<< &a <<endl;
    cout<< *s <<endl;
    return 0;
}
