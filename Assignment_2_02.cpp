/*
Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.
*/

#include <iostream>

using namespace std;

class Toolbooth
{
    private:
    unsigned int total_no_of_cars;
    double total_amount_of_money;
    public:
    //parameterized constructor
    Toolbooth()
    {
        total_no_of_cars = 0;
        total_amount_of_money = 0;
    } 

    void payingCar()
    {
        total_no_of_cars=total_no_of_cars+1;
        total_amount_of_money=total_amount_of_money+0.5;
        
    }

    void noPayCar()
    {
        total_no_of_cars ++;
    }

    void printOnConsole()
    {
        cout<<"total no of cars:"<<total_no_of_cars<<endl;
        cout<<"total no of money:"<<total_amount_of_money<<endl;
    }




};


int menu()
{
    
    
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.Toll payed by cars:"<<endl;
    cout<<"2.Toll not paid by cars:"<<endl;
    cout<<"3.display:"<<endl;
    
    cin>>choice;
    return choice;
}

int main()
{
    Toolbooth t1;
    int choice;
    while((choice=menu())!=0)
    {   
        switch(choice)
        {
            case 1:
                t1.payingCar();
                break;
            case 2:
                t1.noPayCar();
                break;
            case 3:
                t1.printOnConsole();
                break;
            
            default:
                cout<<"Invalid Choice";
        }

            

    }

    return 0;
}