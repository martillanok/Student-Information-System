#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    
    int select;
    
    cout << " WELCOME!" << endl;
   
    cout << "----------------------------------------------------------"<<endl;
    cout << "Please Select an option!"<< endl;
    cout << " 1. Student" <<endl;
    cout << " 2. Exit "<<endl;
    cout << "----------------------------------------------------------"<<endl;
    cin >> select;
    cout << endl;
    
    switch ( select) {
        
        case 1: {
  
            string Id1;
            string name1;
            string pass1; 
            string course, Level;
            int select1;
            
          cout << "Student ID number: ";
    cin >> Id1;
    cin.ignore();
    
    cout << "Student Name: ";
    getline( cin,name1);
    
    cout << "Enter Your Course: ";
    getline(cin, course);
    
    cout << "Enter Your Year Level: ";
    getline (cin, Level);
    
    cout << "Please enter your user password: ";
        cin >> pass1;
        
         do{
        cout << endl;
           
            if ( pass1 == "XJ6BNSOJ") {
                cout << " Welcome to " << name1 << " Information " <<endl;
                
    cout << endl;         
              
    cout << "----------------------------------------------------------"<<endl;
    cout << "Please Select an option that you want to see!"<< endl;
    cout << " 1. My grades"<< endl;
    cout << " 2. My Personal Information" <<endl;
    cout << " 3. My Achievements"<<endl;
    cout << " 4. Exit"<<endl;
    cout << "If you don't have any transactions please select exit"<<endl;
    cout << "----------------------------------------------------------"<<endl;
    cin >> select1; }
    
    else if (pass1 != "XJ6BNSOJ" ){
       cout << "INVALID PASSWORD!";
         exit(0);}
    
    
    switch (select1) {
    
    case 1: {
                
                cout << "Course Diploma in Computer Engineering Technology"<<endl;
                cout << endl; 
                cout << "Subject Grades"<< endl;
                cout<< "Physical Fitness: 1.25" <<endl;
                cout << "Object Oriented Programming: 1.75"<< endl;
                cout << "Consumer Electronics Servicing: 1.50"<<endl;
                cout << "Engineering Drawing: 1.25" << endl;
                 
                
                break; }
                    
    case 2:  {
           
           cout << "Welcome to My Personal Information" << endl;
           cout << endl;
           
           cout << "Place of Birth: Brgy. Tubigan Biñan City of Laguna" << endl;
           
           cout<<endl;
           
           cout << "Date of Birth: May 3, 2002"<< endl;
           cout << endl;
           
           cout << "My Address:  103 Purok 1 Barangay Tubigan Binan City of Laguna" << endl;
           cout << endl;
           
           cout << "Contact Number: 0985-375-6918" << endl;
           cout<< endl;
           
           cout << "Email Address: kristinemaymartillano@gmail.com" << endl;
           
       break;   }    
       
     case 3: {
          
           cout << "WELCOME TO MY ACHIEVEMENTS!" << endl<<endl;
           
           cout << "First Year First Semester Dean Lister with a General Weighted Average of 1.46"<< endl;  
           
           break; }
           
           case 4: {
           
           cout<<  "Thank You For Using the System!"<<endl;
           exit(0);}
           
            
                                                       
    }
            } while (select1 !=4); {
                exit(0);}
          
                         
                break; }
                
     case 2:{
                cout << "Thank You for using the System" << endl;
              exit(0); }
                
      
               
  
    }
  
    
 
    
    return 0;
}
