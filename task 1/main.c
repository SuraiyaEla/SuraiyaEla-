#include<stdio.h>
#include<stdlib.h>
// part 2
struct Booking
{
    char code[20];
    char name[20];
    char date[20];
    char time[20];
    int cost;
};

struct Booking b[100];
int seat =50;

void movie_details();
void buy_ticket();
void old_record();
void main()
{
    login();
    int ch;
    do{
        printf("\n\t\t\t\t\t\t++++++++++++++++++++++++++++++++++++");
        printf("\n");
        printf("\n\t\t\t\t\t\t        MOVIE TICKET BOOKING ");
        printf("\n\t\t\t\t\t+++++++++++++++++++++++++++++++++++++++");

        printf("Enter <1> For Movie Details\n");
        printf("Enter <2> For Buy Ticket\n");
        printf("Enter <3> TO View All Transactions\n");
        printf("Enter <4> To Exit\n");

        printf("Enter Your Choice : ");
        scanf("%d",&ch);
           system ("cls");

        switch (ch)
        {
           case 1:
                movie_details();
           break;

           case 2:
               buy_ticket();
           break;

           case 3:
              old_record();
           break;

           case 0:
               exit(0);
           break;

           default:
              printf("Wrong choice!");
           break;
        }
    } while (ch!=0);

}
