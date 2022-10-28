#include <iostream>

 using namespace std;

 
class Teacher 
 
{
  
 
int tid;
  
 
string subject;

 
public:
 
void TeacherRead () 
 
  {
    
 
cout << "Enter teacher's id:" << endl;
    
 
cin >> tid;
    
 
cout << "Enter teacher's subject:" << endl;
    
 
cin >> subject;
  
 
} 
 
void TeacherDisplay () 
 
  {
    
 
cout << "Teacher's Id:" << tid << endl;
    
 
cout << "Teacher's subject:" << subject << endl;

 
} 
 
};


 
class Staff 
 
{
  
 
int sid;
  
 
string position;

 
public:
 
void StaffRead () 
 
  {
    
 
cout << "Enter staff's id:" << endl;
    
 
cin >> sid;
    
 
cout << "Enter staff's position:" << endl;
    
 
cin >> position;
  
 
} 
 
void StaffDisplay () 
 
  {
    
 
cout << "Staff's id:" << sid << endl;
    
 
cout << "Staff's position:" << position << endl;

 
} 
 
};


 
class Coordinator:public Teacher, public Staff 
 
{
  
 
string department;

 
public:
 
void CoordinatorRead () 
 
  {
    
 
cout << "Enter department:" << endl;
    
 
cin >> department;
  
 
} 
 
void CoordinatorDisplay () 
 
  {
    
 
cout << "Department:" << department << endl;

 
} 
 
};


 
int
main () 
 
{
  
 
Coordinator c1, c2;
  
 
c1.TeacherRead ();
  
 
c1.CoordinatorRead ();
  
 
c1.TeacherDisplay ();
  
 
c1.CoordinatorDisplay ();
  
 
c2.StaffRead ();
  
 
c2.CoordinatorRead ();
  
 
c2.StaffDisplay ();
  
 
c2.CoordinatorDisplay ();
  
 
return 0;

 
}
