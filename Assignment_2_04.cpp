/*
Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
Instead of char[] use string datatype

*/

#include <iostream>

using namespace std;

class Address
{
    
    private:
    string building;
    string street;
    string city;
    int pin;

    public:

    Address()
    {
        /*
        building = "X";
        street = "Y";
        city = "Z";
        pin = 1;
        */
        cout<<"Building:";
        getline(cin,building);
        cout<<"street:";
        getline(cin,street);
        cout<<"city:";
        getline(cin,city);
        cout<<"pin:";
        cin>>pin;
    }

    Address(string building,string street,string city,int pin)
    {
        this->building = building;
        this->street = street;
        this->city=city;
        this->pin=pin;

    
    }

    void accept()
    {
        cout<<"Building:";
        getline(cin,building);
        scanf("%*c");
        cout<<"street:";
        getline(cin,street);
        scanf("%*c");
        cout<<"city:";
        getline(cin,city);
        scanf("%*c");
        cout<<"pin:";
        cin>>pin;
    }

    void disp()
    {
        cout<<"Building:"<<building<<endl;
        cout<<"street:"<<street<<endl;
        cout<<"city:"<<city<<endl;
        cout<<"pin:"<<pin<<endl;
    }

    void setBuilding()
    {
        string Build;
        scanf("%*c");
        cout<<"Build:";
        getline(cin,Build);
        building = Build;
    }

    string getBuilding()
    {
        return building;
    }

    void setCity()
    {
        string City;
        scanf("%*c");
        cout<<"city:";
        getline(cin,City);
        city = City;
    }

    string getCity()
    {
        return city;
    }
    void setStreet()
    {
        
        string Street;
        scanf("%*c");
        cout<<"street:";
        getline(cin,Street);
        street = Street;
    }
    string getStreet()
    {
        return street;
    }
    void setPin()
    {
        int Pin;
        cout<<"Pin:";
        cin>>Pin;
        pin = Pin;
    }
    int getPin()
    {
        return pin;
    }


};

int menu()
{
    
    
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.Accept deatails of Address"<<endl;
    cout<<"2.Display details of Address"<<endl;
    cout<<"3.Set building"<<endl;
    cout<<"4.Get building"<<endl;
    cout<<"5.set city"<<endl;
    cout<<"6.Get city"<<endl;
    cout<<"7.set street"<<endl;
    cout<<"8.get street"<<endl;
    cout<<"9.set pin"<<endl;
    cout<<"10.get pin"<<endl;
    

    cin>>choice;
    return choice;
}

int main()
{
    Address a1;
    int choice;
    while((choice=menu())!=0)
    {   
        switch(choice)
        {
            case 1:
                a1.accept();
                break;
            case 2:
                a1.disp();
                break;
            case 3:
                a1.setBuilding();
                break;
            case 4:
                a1.getBuilding();
                break;
            case 5:
                a1.setCity();
                break;
            case 6:
                a1.getCity();
                break;
            case 7:
                a1.setStreet();
                break;
            case 8:
                a1.getStreet();
                break;
            case 9:
                a1.setPin();
                break;
            case 10:
                a1.getPin();
                break;
            default:
                cout<<"Invalid Choice";
        }

            

    }

    return 0;
}

