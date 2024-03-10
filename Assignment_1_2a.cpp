/*
Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/



#include <iostream>

using namespace std;

struct Date
{
    
    int day;
    int month;
    int year;


    
    void initDate()
    {
        cout<<"Day is:";
        cin>>day;
        cout<<"Month is:";
        cin>>month;
        cout<<"year is:";
        cin>>year;

    }


    void printDateOnConsole()
    {
        cout<<day<<"-"<<month<<"-"<<year<<endl;

    }
    void acceptDateFromConsole()
    {
        cout<<"Day is:";
        cin>>day;
        cout<<"Month is:";
        cin>>month;
        cout<<"year is:";
        cin>>year;

    }

    bool isLeapYear()
    {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { 

        return true;

    } else { 

        cout<<" is not a leap year.";

    } 
    }
        
};

int menu()
{
    
    
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.Inintialise Date"<<endl;
    cout<<"2.Display Date"<<endl;
    cout<<"3.Accept date"<<endl;
    cout<<"4.check leap year"<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    Date d1;
    int choice;
    while((choice=menu())!=0)
    {   
        switch(choice)
        {
            case 1:
                d1.initDate();
                break;
            case 2:
                d1.printDateOnConsole();
                break;
            case 3:
                d1.acceptDateFromConsole();
                break;
            case 4:
                d1.isLeapYear();
                break;
            default:
                cout<<"Invalid Choice";
        }

            

    }

    return 0;
}