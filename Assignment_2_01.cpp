// Write a menu driven program to calculate volume of the box(length * width * height).
//Provide necessary constructors.

#include<iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;
public:
    //Parameterized Constructor
    Box()
    {
        length=1;
        width=1;
        height=1;
    }

    void acceptData()
    {
        cout<<"Enter the lengh of a box:";
        cin>>length;
        cout<<"Enter the width of a box:";
        cin>>width;
        cout<<"Enter the height of a box:";
        cin>>height;
    }

    void dispData()
    {
        cout<<"length:"<<length<<endl;
        cout<<"width:"<<width<<endl;
        cout<<"height:"<<height<<endl;
        //cout<<"hello"<<endl;
        


    }

    void calculatedVolume()
    {
        cout<<"Volume of given Box is:"<<length*width*height<<endl;
    }
};

int menu()
{
    
    
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.Accept Data"<<endl;
    cout<<"2.Display Data"<<endl;
    cout<<"3.Volume"<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    Box b1;
    int choice;
    while((choice=menu())!=0)
    {   
        switch(choice)
        {
            case 1:
                b1.acceptData();
                break;
            case 2:
                b1.dispData();
                break;
            case 3:
                b1.calculatedVolume();
                break;
            default:
                cout<<"Invalid Choice";
        }

            

    }

    return 0;
}

    
