#include<stdio.h>
#include<stdlib.h>

    int choice,pin,password;
    int anothertransaction;
    float balance=1000,Nbalance;
    void Withdraw_Cash();
    void Deposit_Cash();
    void Transfer_cash();
    void Check_Balance();

    struct input_pin{
        int pin;
        int password[10];
        };

/*Function to display available options in this application*/
void Display_Menu()
{
    printf("\n\n\n                                                        ============================================");
    printf("                                                                                                                                                HELLO!");
    printf("\n                                                        ============================================");
    printf("\n                                                          \"WELCOME TO THE SAMPATH BANK ATM SERVICE\"");
    printf("\n                                                        ============================================\n\n");
    printf("\n ~~~~~~~~~~~~~~~~~~~~~ MENU ~~~~~~~~~~~~~~~~~~\n");
    printf("\n ~ [1] Withdraw Cash                         ~\n");
    printf("\n ~ [2] Deposit Cash                          ~\n");
    printf("\n ~ [3] Transfer Cash                         ~\n");
    printf("\n ~ [4] Check Balance                         ~\n");
    printf("\n ~ [5] Exit                                  ~\n");
    printf("\n ~ [6] Clear the screen and display available~\n");
    printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("\n Enter your choice [1,2,3,4,5,6]: ");
    scanf("%d",&choice);

    switch(choice)
{
case 1:
    {
    Withdraw_Cash();
    break;
    }
case 2:
    {
    Deposit_Cash();
    break;
    }
case 3:
    {
    Transfer_cash();
    break;
    }
case 4:
    {
    Check_Balance();
    break;
    }
case 5:
    {
    return 0;
    }
case 6:
    {
    system("cls");
    break;
    }
default:
    {
        printf("INVALID CHOICE");
    }
}

}

// Function to withdraw cash
void Withdraw_Cash()
{
     printf("\n\n [1] Withdraw Cash\n");
     int amountwithdraw;
     printf("\nEnter the amount to withdraw:Rs. ");
     scanf("%d",&amountwithdraw);
     if(amountwithdraw>balance)
     {
        printf("!!====INSUFFIECIENT BALANCE IN YOUR ACCOUNT====!!\n");
        printf("\n\nDo you want to do another transaction?\n (press 1 to proceed/2 to exit) \n");
         scanf("%d",&anothertransaction);
         if(anothertransaction==1)
           {
              Display_Menu();
           }
      }
      else
      {
         Nbalance=balance-amountwithdraw;
         printf("You have withdrawn %d and your new balance is %.2f",amountwithdraw,Nbalance);
         printf("\n\nDo you want to do another transaction?\n (press 1 to proceed/2 to exit) \n");
         scanf("%d",&anothertransaction);
         if(anothertransaction==1)
           {
              Display_Menu();
           }
         else if(anothertransaction==2)
         {
             exit(0);
         }
       }
}

// Function to deposit cash
void Deposit_Cash()
{
    printf("\n[2] Deposit Cash\n");
    int cashdeposit;
    printf("\nEnter the amount you are going to deposit:Rs. ");
    scanf("%d",&cashdeposit);
    Nbalance=balance+cashdeposit;
    printf("\n\n---THANK YOU FOR DEPOSITING & DONT FORGET YOUR RECEIPT---\n\n You have successfully deposited Rs.%d and your new balance is:Rs. %.2f!!\n ",cashdeposit,Nbalance);
    printf("\n\nDo you want to do another transaction?\n (press 1 to proceed/2 to exit) \n");
    scanf("%d",&anothertransaction);
    if(anothertransaction==1)
    {
        Display_Menu();
    }
    else if(anothertransaction==2)
         {
             exit(0);
         }
}

// Function to transfer cash
void Transfer_cash()
{
    int transfer;
    printf("Your balance is;Rs. %.2f\n",balance);
    printf("\nEnter the amount to transfer:Rs. ");
    scanf("%d",&transfer);
    Nbalance=balance-transfer;
    printf("Your current balance is:Rs. %.2f",Nbalance);
    printf("\n\nDo you want to do another transaction?\n (press 1 to proceed/2 to exit) \n");
    scanf("%d",&anothertransaction);
    if(anothertransaction==1)
    {
        Display_Menu();
    }
    else if(anothertransaction==2)
         {
             exit(0);
         }
}

void Check_Balance()
{
    printf("[3] Check Balance\n");
    printf("\nYour Current Balance is Rs:%.2f\n\n",balance);
    printf("\n\nDo you want to do another transaction?\n (press 1 to proceed/2 to exit) \n");
    scanf("%d",&anothertransaction);
    if(anothertransaction==1)
    {
        Display_Menu();
    }
    else if(anothertransaction==2)
         {
             exit(0);
         }
}

int main()
{
    while(pin!=1520)
    {
        printf("Enter your pin: ");
        scanf("%d",&pin);

        if(pin!=1520)
        {
            printf("Enter valid password: ");
            scanf("%d",&password);
        }
    }
Display_Menu();

printf("\n\n=-=-=-=-=-= THANK YOU FOR USING OUT SAMPATH BANK ATM SERVICE, COME AGAIN =-=-=-=-=-=");

return 0;
}


