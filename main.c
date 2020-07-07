#include <stdio.h>			//header files
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include <conio.h>


void m_m();         // prototype's
void complete();
void burgers();


                    //global variable

float price;        //this refers to price of each item
char choice;        //this refer to a choice a user makes in main menu and sub menu.
int a[16];          //contains the total cost per item in each element. Each element is a multiplication of price and the input quantity.
int i;              //to carry out loops and other activities related to an array
int sum=0;          //this refers to the total amount payable by the customer

char b[16][40] = {  "",                         //2-D array of the items offered at the restaurant.
                    "Grilled Chicken Sandwich",
                    "Cheese Burger",
                    "Veg Fajita",
                    "Bacon Ranch Salad",
                    "Buttermilk Crispy Chicken Salad",
                    "Side Salad",
                    "French Fries",
                    "Low Fat Strawberry Yoghurt",
                    "Fruit and Yoghurt Parfait",
                    "Chocolate Shake",
                    "Vanilla Shake",
                    "Strawberry Shake",
                    "Coke",
                    "Sprite",
                    "Fanta",
                 };


void main()
{
	m_m();
}


void m_m()  // main menu screen
{
    void order();                                       //local variable
    void waitFor(unsigned int secs);
	char choice = ' ' ;


    printf("                Welcome to D'10 Restaurant.          \n ");
    printf("             +============================+          \n\n");
    printf("  && Please select the meal that you would like to purchase. && \n\n");
    printf("\t\t      [A] Burgers\n");
    printf("\t\t      [B] Salads\n");
    printf("\t\t      [C] Snacks & Sides\n");
    printf("\t\t      [D] Desserts & Shakes\n");
    printf("\t\t      [E] Drinks\n");
    printf("\t\t      [F] Exit\n\n");

    printf("Enter your choice here : ");
    scanf("%c", &choice);

    system("cls");              //clears the screen
		{
            if (toupper(choice) == 'A' )
                {
                        //local variables
                    int choice = 0;     //each integer selects a particular meal in a sub-menu.
                    int quantity = 0;   //quantity of each meal, input by user, after selecting an item from sub-menu


                    fflush(stdin);
                    printf("                Welcome to D'10 Restaurant.          \n ");
                    printf("             +============================+          \n\n");
                    printf("                  $  Burgers  $ \n\n");
                    printf("  && Please select the food that you would like to purchase. && \n\n");
                    printf("\t\t   [1] Grilled Chicken Sandwich - KES 500\n");
                    printf("\t\t   [2] Cheese Burger - KES 200\n");
                    printf("\t\t   [3] Veg Fajita - KES 350\n\n");
                    printf("\t\t   [4] Back to Main Menu\n");

                    printf("\nEnter your choice here : ");
                    scanf("%d", &choice);
                    printf("Enter quantity : ");
                    scanf("%d", &quantity);
                        {
                            if (choice == 1)
                                {
                                    a[1] = 500 * quantity;
                                }

                            else if ( choice == 2)
                                {
                                    a[2] = 200 * quantity;
                                }

                            else if ( choice == 3 )
                                {
                                    a[3] = 350 * quantity;
                                }

                            else if ( choice == 4 )
                                {
                                    m_m();
                                }

                            else
                                {
                                    fflush(stdin);
                                    system("cls");
                                    printf("\n\n\t\t   Invalid Choice Entered\n\n");
                                    m_m();
                                }
                                system("cls");
                                order();
                        }
                }

            else if (toupper(choice) == 'B')
                {
                    int choice = 0; //local variables
                    int quantity = 0;


                    fflush(stdin);
                    printf("                Welcome to D'10 Restaurant.          \n ");
                    printf("             +============================+          \n\n");
                    printf("                  $  Salads  $ \n\n");
                    printf("  && Please select the food that you would like to purchase. && \n\n");
                    printf("\t\t   [1] Bacon Ranch Salad - KES 450\n");
                    printf("\t\t   [2] Buttermilk Crispy Chicken Salad - KES 350\n");
                    printf("\t\t   [3] Side Salad - KES 200\n\n");
                    printf("\t\t   [4] Back to Main Menu\n");

                    printf("\nEnter your choice here : ");
                    scanf("%d", &choice);
                    printf("Enter quantity : ");
                    scanf("%d", &quantity);
                        {
                            if (choice == 1)
                                {
                                    a[4] = 450 * quantity;
                                }

                            else if ( choice == 2)
                                {
                                    a[5] = 350 * quantity;
                                }

                            else if ( choice == 3 )
                                {
                                    a[6] = 200 * quantity;
                                }

                            else if ( choice == 4 )
                                {
                                    m_m();
                                }

                            else
                                {
                                    fflush(stdin);
                                    system("cls");
                                    printf("\n\n\t\t   Invalid Choice Entered\n\n");
                                    m_m();
                                }
                                system("cls");
                                    order();
                        }
                }

            else if (toupper(choice) == 'C')
                {
                    int choice = 0; //local variables
                    int quantity = 0;


                    fflush(stdin);
                    printf("                Welcome to D'10 Restaurant.          \n ");
                    printf("             +============================+          \n\n");
                    printf("                  $  Snacks & Sides  $ \n\n");
                    printf("  && Please select the food that you would like to purchase. && \n\n");
                    printf("\t\t   [1] French Fries - KES 150\n");
                    printf("\t\t   [2] Low Fat Strawberry Yoghurt - KES 100\n");
                    printf("\t\t   [3] Fruit and Yoghurt Parfait - KES 150\n\n");
                    printf("\t\t   [4] Back to Main Menu\n");

                    printf("\nEnter your choice here : ");
                    scanf("%d", &choice);
                    printf("Enter quantity : ");
                    scanf("%d", &quantity);
                                        {
                            if (choice == 1)
                                {
                                    a[7] = 150 * quantity;
                                }

                            else if ( choice == 2)
                                {
                                    a[8] = 100 * quantity;
                                }

                            else if ( choice == 3 )
                                {
                                    a[9] = 150 * quantity;
                                }

                            else if ( choice == 4 )
                                {
                                    m_m();
                                }

                            else
                                {
                                    fflush(stdin);
                                    system("cls");
                                    printf("\n\n\t\t   Invalid Choice Entered\n\n");
                                    m_m();
                                }
                                system("cls");
                                order();


                        }
                }

            else if (toupper(choice) == 'D')
                {
                    int choice = 0; //local variables
                    int quantity = 0;


                    fflush(stdin);
                    printf("                Welcome to D'10 Restaurant.          \n ");
                    printf("             +============================+          \n\n");
                    printf("                  $  Shakes  $ \n\n");
                    printf("  && Please select the milkshake that you would like to purchase. && \n\n");
                    printf("\t\t   [1] Chocolate Shake - KES 250\n");
                    printf("\t\t   [2] Vanilla Shake - KES 250\n");
                    printf("\t\t   [3] Strawberry Shake - KES 250\n\n");
                    printf("\t\t   [4] Back to Main Menu\n");

                    printf("\nEnter your choice here : ");
                    scanf("%d", &choice);
                    printf("Enter quantity : ");
                    scanf("%d", &quantity);
                                        {
                            if (choice == 1)
                                {
                                    a[10] = 250 * quantity;
                                }

                            else if ( choice == 2)
                                {
                                    a[11] = 250 * quantity;
                                }

                            else if ( choice == 3 )
                                {
                                    a[12] = 250 * quantity;
                                }

                            else if ( choice == 4 )
                                {
                                    m_m();
                                }

                            else
                                {
                                    fflush(stdin);
                                    system("cls");
                                    printf("\n\n\t\t   Invalid Choice Entered\n\n");
                                    m_m();
                                }
                                system("cls");
                                order();

                        }
                }

            else if (toupper(choice) == 'E')
                {
                    int choice = 0; //local variables
                    int quantity = 0;


                    fflush(stdin);
                    printf("                Welcome to D'10 Restaurant.          \n ");
                    printf("             +============================+          \n\n");
                    printf("                  $  Drinks  $ \n\n");
                    printf("  && Please select the drink that you would like to purchase. && \n\n");
                    printf("\t\t   [1] Coke - KES 250\n");
                    printf("\t\t   [2] Sprite - KES 250\n");
                    printf("\t\t   [3] Fanta - KES 250\n\n");
                    printf("\t\t   [4] Back to Main Menu\n");

                    printf("\nEnter your choice here : ");
                    scanf("%d", &choice);
                    printf("Enter quantity : ");
                    scanf("%d", &quantity);

                        {
                            if (choice == 1)
                                {
                                    a[13] = 100 * quantity;
                                }

                            else if ( choice == 2)
                                {
                                    a[14] = 100 * quantity;
                                }

                            else if ( choice == 3 )
                                {
                                    a[15] = 100 * quantity;
                                }

                            else if ( choice == 4 )
                                {
                                    m_m();
                                }

                            else
                                {
                                    fflush(stdin);
                                    system("cls");
                                    printf("\n\n\t\t   Invalid Choice Entered\n\n");
                                    m_m();
                                }
                                system("cls");
                                order();

                        }
                }

            else if (toupper(choice) == 'F')
                {
                    complete();
                    waitFor(3);
                    m_m();
                }

            else
                {
                    m_m();
                }
        }
}

void order()
{
    int position;
    int again;
    sum=0;
    int no = 1;
    int pay;
    int change;


    printf("                Welcome to D'10 Restaurant.          \n ");
    printf("             +============================+          \n\n");
    printf("                  $  Your Order  $ \n\n");
    printf("  && Please check your order and choose one of the following options. && \n\n");

    for( i = 1 ; i < 16 ; ++i )
        {
            if (a[i] == 0)
                {

                }

            else
                {
                    printf("[%d]. %s:%d\n",no,b[i],a[i]);
                    no++;
                }
        }



    for (i=1; i<16; ++i)
        {
            sum += a[i];
        }

    printf("\n\n\n\t\t\tTotal: KES %d\n", sum);

    printf("\nPlease choose one of the following options to continue\n[1] Buy another item, [2] Delete an item, [3] Checkout : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d", &again);

    if (again == 1 )
        {
            system("cls");
            m_m();
        }

    else if (again == 2 )
        {
            printf("\nPlease input the item number of the item to be deleted\n");
            printf("\nItem Number: ");
            scanf("%d", &position);
            i = position;
            a[i]=0;
            system("cls");
            order();
        }

    else if (again == 3)
        {
            system("cls");
            printf("                Welcome to D'10 Restaurant.          \n ");
            printf("             +============================+          \n\n");
            printf("                    $  Checkout  $ \n\n\n\n");
            printf("           Your total amount payable is KES %d    \n        ", sum);
            printf("\n           Amount Paid: ");
            scanf("%d", &pay);
            change = pay - sum;
            printf("\n           Your Change: %d",change);

            printf("\n\n\n        && Please pick your meal at the counter &&");
            printf("\n              +============================+          ");
            printf("\n               && Thank You Very Much &&       \n ");
            printf("             +============================+          \n");
            printf("                && Please come again && \n\n");
            printf("\n\n            && Press Enter to continue... && \n\n");

            getch();

            memset(a, 0, sizeof(a));
            sum=0;

            m_m();
        }

    else
        {
            fflush(stdin);
            system("cls");
            printf("\n\n\t\t   Invalid Choice Entered\n\n");
            order();
        }

}

void burgers()
{

}
void complete()  // Exit Screen
{
    memset(a, 0, sizeof(a));
    sum=0;


    printf("                  Thank You Very Much          \n ");
    printf("             +============================+          \n\n");
    printf("               && Please come again. && \n\n");


}
void waitFor(unsigned int secs)
{
    unsigned int retTime = time(0) + secs;
    while (time(0) < retTime);
}
