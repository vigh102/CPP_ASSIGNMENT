/*
Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities.
*/




#include <iostream>

using namespace std;


namespace NStudent
{
    class Student
{
    private:
    int roll_no;
    string name;
    int marks;

    public:
    //initialise student
    void initStudent()
    {
        /*roll_no;
        name;
        marks;
        */
        cout<<"Roll No:";
        cin>>roll_no;
        cout<<"Name:";
        cin>>name;
        cout<<"marks:";
        cin>>marks;
    }

    void printStudentOnConsole()
    {
        cout<<"Roll No:"<<roll_no<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"marks:"<<marks<<endl;
    }

    void acceptStudentFromConsole()
    {
        cout<<"Roll No:";
        cin>>roll_no;
        cout<<"Name:";
        cin>>name;
        cout<<"marks:";
        cin>>marks;
    }
    
};
}



int menu()
{
    
    
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.Inintialise student"<<endl;
    cout<<"2.Display Details of student"<<endl;
    cout<<"3.Accept details of student"<<endl;
    
    cin>>choice;
    return choice;
}

int main()
{
    NStudent::Student d1;
    int choice;
    while((choice=menu())!=0)
    {   
        switch(choice)
        {
            case 1:
                d1.initStudent();
                break;
            case 2:
                d1.printStudentOnConsole();
                break;
            case 3:
                d1.acceptStudentFromConsole();
                break;
            
            default:
                cout<<"Invalid Choice";
        }

            

    }

    return 0;
}