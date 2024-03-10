/*
Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);
*/

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;

};

void initDate(struct Date* ptrdate)
{
    printf("Enter a Day");
    scanf("%d",&ptrdate->day);
    printf("Enter a month");
    scanf("%d",&ptrdate->month);
    printf("Enter a year");
    scanf("%d",&ptrdate->year);
}

void printDateOnConsole(struct Date* ptrdate)
{
    printf("Date is: %d-%d-%d",ptrdate->day,ptrdate->month,ptrdate->year);
}
void acceptDateFromConsole(struct Date* ptrdate)
{
    printf("Enter a Day:");
    scanf("%d",&(ptrdate->day));
    printf("Enter a month:");
    scanf("%d",&ptrdate->month);
    printf("Enter a year:");
    scanf("%d",&ptrdate->year);
}

int menu()
{
    
    
    int choice;
    printf("0.Exit");
    printf("1.Inintialise Date\n");
    printf("2.Display Date\n");
    printf("3.Accept date\n");
    
    scanf("%d",&choice);
    return choice;
}

int main()
{
    struct Date d1;
    int choice;
    while((choice=menu())!=0)
    {   
        switch(choice)
        {
            case 1:
                initDate(&d1);
                break;
            case 2:
                printDateOnConsole(&d1);
                break;
            case 3:
                acceptDateFromConsole(&d1);
                break;
            
            default:
                printf("Invalid Choice");
        }

            

    }

    return 0;
}