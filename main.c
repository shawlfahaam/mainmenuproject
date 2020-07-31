
#include <stdio.h>
#include <string.h>
#include <conio.h>                       //console input and output





    struct order{
    char name[30];
    int order_number;
    int number_of_food;
    int cost;
}p[37];
int order_count = 0, served_count = 0, waiting_now = 0;

int order ()
{
    int a, b, c;
    printf ("please enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 37+order_count;
    orders();
    p[order_count].number_of_food = a;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;

    level:
    printf ("How many items do you want to order? ");
    scanf ("%d", &a);

    getchar ();
    while (a--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &b);
        getchar();
        switch(b){
    case 1 : {
        printf("Enter the size of Shawarma: 1.Half 2.Full\n");
        int i;
        scanf("%d",&i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &c);
        getchar();

        p[order_count].number_of_food +=c;
        if(i==1)p[order_count].cost +=(80*c);
        else p[order_count].cost += (160*c);
        break;
    }
    case 2 :{
        printf("Enter the size of Tandoori Chicken: 1.Half 2.Full 3.Bucket Meal\n");
        int i;
        scanf("%d",&i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &c);
        getchar();

        p[order_count].number_of_food +=c;

        if (i==1) p[order_count].cost += (200*c);

        else if (i==2) p[order_count].cost += (410*c);

        else  p[order_count].cost += (500*c);

        break;
    }
    case 3 :{
        printf("Enter the No of Meat Balls: 1.4 2.6 3.10\n");
        int i;
        scanf("%d",&i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &c);
        getchar();

        p[order_count].number_of_food +=c;

        if (i==1) p[order_count].cost += (90*c);
        else if (i==2) p[order_count].cost += (140*c);
        else  p[order_count].cost += (310*c);
        break;
    }
    case 4 :{
        printf ("Enter the size of Chicken Afhani: 1. Half  2.Full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &c);
        getchar();

        p[order_count].number_of_food +=c;

        if (i==1) p[order_count].cost += (140*c);
        else  p[order_count].cost += (250*c);

        break;
    }
    case 5 :{
        printf ("Enter the size of Chawmin: 1. Half  2.Full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &c);
        getchar();

        p[order_count].number_of_food +=c;
        if (i==1) p[order_count].cost += (60*c);
        else p[order_count].cost += (120*c);
        break;
    }
    case 6 :{
        printf ("Enter the Type of Momos: 1.Steam  2.Fried\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &c);
        getchar();

        p[order_count].number_of_food +=c;

        if (i==1) p[order_count].cost += (110*c);
        else p[order_count].cost += (220*c);

        break;
    }
    case 7 : {
        printf ("250 mg of Dalgona Coffee\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &c);
        getchar();
        p[order_count].number_of_food +=c;
        p[order_count].cost += (200*c);
        break;
    }
    case 8 : {
        printf ("250 mg of Orange Juice\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &c);
        getchar();
        p[order_count].number_of_food +=c;
        p[order_count].cost += (50*c);
        break;
    }
    case 9 : {
        printf ("250 mg of Ginger Tea\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &c);
        getchar();
        p[order_count].number_of_food +=c;
        p[order_count].cost += (30*c);
        break;
    }
    case 10 :{
        printf ("Enter the size of Coke: 1. 250mg  2. 500mg\n");
        printf("Please enter the quantity: ");
        scanf ("%d", &c);
        getchar();

        p[order_count].number_of_food +=c;
        p[order_count].cost += (80*c);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        a++;
    }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %dRs.\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
    order_count ++;
}
int serve ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("All order served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n", p[served_count].order_number);
}

 void orders ()
{

    printf("..................................MENU....................................\n");

    printf("Item Code   Description-----------------Size--------------------Price(Rs)\n");

    printf("[1]---------Shawarma---------------------Half/Full------------------80/160\n");
    printf("[2]---------Tandoori Chicken---------Half/Full/Bucket meal--------200/410/500\n");
    printf("[3]---------Meat Balls----------------4/6/10 balls----------------90/140/310\n");
    printf("[4]---------Chicken Afghani------------Half/Full------------------140/250\n");
    printf("[5]---------Chawmin--------------------Half/Full------------------60/120\n");
    printf("[6]---------Momos---------------------Steam/Fried-----------------110/220\n");
    printf("[7]---------Dalgona Coffee-------------500mg----------------------200\n");
    printf("[8]---------Orange Juice---------------250mg----------------------50\n");
    printf("[9]---------Ginger Tea-----------------250mg----------------------30\n");
    printf("[10]--------Mineral Water---------------1lt-----------------------80\n");

}
int main ()
{
    printf ("Welcome To CHINAR CAFE\n");
    while (1){                          //this will run untill the break statement is issued
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");

        int b;
        scanf ("%d", &b);
        getchar ();
        switch (b){                     //once the case match is found,the statement related to it is executed.
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                serve();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
            printf("Thank You for Visiting CAFE CHINAR\n");
             return 0;
            }
            }
            }
            }








//thank you I Have learned my basics from unschool and also with the help of the internet I wasable to do this.
