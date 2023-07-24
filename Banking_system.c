#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int accn;
char name[25];
char dob[15];
char gender[10];
char nomineee[10]; 
char panc[10];
char address[100];
char gstin[20];
long long int phno;
int totalsavings=0;
int wdamt;
void createacc();
void savings();
void current();
int moneydep();
int statement();
int withdrawl();
void feedback();
void help();
void main()
{
    int ch;
    do
    {    
    printf("\n\n\t\t*********Welcome to SVCE bank*********\n\n");
    
    
    printf("\t1.Create account\n");
    printf("\t2.Money deposit\n");
    printf("\t3.Statement\n");
    printf("\t4.Withdrawl\n");
    printf("\t5.Feedback\n");
    printf("\t6.Helpdesk\n");
    printf("\t7.Exit\n");
    printf("\n\n\tEnter your choice:");
    scanf("%d",&ch);
    
    
    switch(ch)
    {
        case 1: createacc();
        break;
        case 2: moneydep();
        break;
        case 3: statement();
        break;
        case 4: withdrawl();
        break;
        case 5: feedback();
        break;
        case 6: help();
        break;
        case 7: 
        {
            printf("\t\t******Thanks for visiting SVCE Bank******");
            exit(0);
            break;
        }
        default:printf("\n\n!!Invalid choice!!");
        break;
    }
    }while(ch!=7);
}

void createacc()
{
    int ch;
    printf("\n\n\t\t\tWelcome to SVCE Bank services\n\n");
    
    printf("\n\t***The charges levied to create account is 300Rs.\n");
    printf("\n\t1.Savings Account\n\t2.Current account\n\n");
    printf("\n\t\tChoose your account type: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: savings();
        break;
        case 2: current();
        break;
        default: printf("\t\t\t!!Invalid choice!!");
        break;
    }
}
void savings()
{
    printf("\n\n\t\t\tPlease fill the following details to create your new account:\n\n");
    printf("\nAll the details should match with your valid ID proof(Aadhar/PAN):");
    printf("\n\n\tEnter your name(ALL CAPITALS)               :      ");
    scanf("%s",name);
    printf("\tEnter your Date of birth(format dd/mm/yyyy) :      ");
    scanf("%s",dob);
    printf("\tEnter gender                                :      ");
    scanf("%s",gender);
    printf("\tEnter PAN card number                       :      ");
    scanf("%s",panc);
    printf("\tEnter the nominee name                      :      ");
    scanf("%s",nomineee);
    printf("\tEnter your phone number                     :      ");
    scanf("%lld",&phno);
    printf("\n\n\t***Please deposit minimum of 1000Rs.(One thousand rupees initially) for creating savings account \n");
    printf("\tEnter the Amount for initial deposit : ");
    scanf("%d",&totalsavings);
    printf("\n\n\n\t\t\tPlease cross check the details with your valid ID proof\n\n");

    printf("\n\n\t\t\tYour savings account is created succesfully with following details: \n");
    printf("_______________________________________________\n\n");
    printf("|\tName                 : %s\t\n",name);
    printf("|\tDate of birth        : %s\t\n",dob);
    printf("|\tGender               : %s\t\n",gender);
    printf("|\tPAN card number      : %s\t\n",panc);
    printf("|\tNominee name         : %s\t\n",nomineee);
    printf("|\tPhone number         : %lld\t\n",phno);
    printf("|\tAccount number       : %lld\t\n",phno);
    printf("|\tBalance              : %d\t\n",totalsavings);
    printf("_______________________________________________\n\n");
    printf("\n\tYour account number is generated with your phone number(%lld)",phno);
    
}
void current()
{
    printf("\t\t\n\nPlease fill the following details to create your new account:\n\n");
    printf("All the details should match with your valid ID proof(Aadhar/PAN):");
    printf("\n\nEnter your name(ALL CAPITALS)               :      ");
    scanf("%s",name);
    printf("Enter your Date of birth(format dd/mm/yyyy) :      ");
    scanf("%s",dob);
    printf("Enter gender                                :      ");
    scanf("%s",gender);
    printf("Enter GST number                            :      ");
    scanf("%s",gstin);
    printf("Enter business PAN card number              :      ");
    scanf("%s",panc);
    printf("Enter the nominee name                      :      ");
    scanf("%s",nomineee);
    printf("Enter your phone number                     :      ");
    scanf("%lld",&phno);
    printf("The charges levied to create account is 1000Rs.\n");
    printf("\n***Please deposit 5000Rs.(Five thousand rupees initially) for savings account \n");
    printf("Amount: ");
    scanf("%d",&totalsavings);
    printf("\n\n\t\t\tYour current account is created succesfully with following details: \n");
    printf("_______________________________________________\n\n");
    printf("|\tName                 : %s\t\n",name);
    printf("|\tDate of birth        : %s\t\n",dob);
    printf("|\tGender               : %s\t\n",gender);
    printf("|\tGST number           :    %s\n",gstin);
    printf("|\tPAN card number      : %s\t\n",panc);
    printf("|\tNominee name         : %s\t\n",nomineee);
    printf("|\tPhone number         : %lld\t\n",phno);
    printf("|\tAccount number       : %lld\t\n",phno);
    printf("|\tBalance              : %d\t\n",totalsavings);
    printf("_______________________________________________\n\n");
    printf("\n\tYour account number is generated with your phone number(%lld)",phno);
}
int moneydep()
{
    int depamt;
    printf("Enter your Account Number: ");
    scanf("%d",&accn);
    if(accn==phno)
    {
    printf("Please enter the amount to deposit:    ");
    scanf("%d",&depamt);
    totalsavings=totalsavings+depamt;
    printf("\n\n_______________________________________________\n\n");
    printf("|\tAccount holder Name       :%s\n",name);
    printf("|\tAccount number            :%lld\n",phno);
    printf("|\tPrevious balance          :%d\n",(totalsavings-depamt));
    printf("|\tDeposited Amount          :%d\n",depamt);
    printf("|\tUpdated balance           :%d",totalsavings);
    printf("\n_______________________________________________\n\n");
    printf("\t\tThanks for depositing money");
    }
    else 
    {
        printf("\t\t\t!!!INVALID ACCOUNT NUMBER!!!\n\n");
        return 0;
    }
}
int statement()
{
    printf("Enter your Account Number: ");
    scanf("%d",&accn);
    if(accn==phno)
    {
    printf("\n\n_______________________________________________\n\n");
    printf("|\tAccount holder Name       :%s\n",name);
    printf("|\tAccount number            :%lld\n",phno);
    printf("|\tTotal balance             :%d\n",totalsavings);
    printf("_______________________________________________\n\n");
    }
    else 
    {
        printf("\t\t\t!!!INVALID ACCOUNT NUMBER!!!\n\n");
        return 0;
    }
}
int withdrawl()
{ 
    printf("Enter your Account Number: ");
    scanf("%d",&accn);
    if(accn==phno)
    {
    printf("Your current balance is            : %d\n\n",totalsavings);
    printf("You can with draw upto             : %d\n",(totalsavings-1000));
    if(totalsavings<=1000)
    {
        printf("\n\t\t!!!!!INSUFFICIENT BALANCE!!!!!");
    }
    else 
    {
    printf("Please enter the amount to withdraw: ");
    scanf("%d",&wdamt);
    if(wdamt>(totalsavings-1000))
    {
        printf("\n\n\t\t!!!!!INSUFFICIENT BALANCE!!!!!\n\t\t\t(Amount entered should be less than %d)",(totalsavings-1000));
    }
    else
    {
    totalsavings=(totalsavings-wdamt);
    printf("\n\nYour updated balance           : %d\n ",totalsavings);
    }
    }
    }
    else 
    {
        printf("\t\t\t!!!INVALID ACCOUNT NUMBER!!!\n\n");
        return 0;
    }
}
   
void feedback()
{
    char rat[10],sugg[100];
    printf("\t\tThank you for visiting SVCE bank please Rate us 5 star\n\n");
    printf("\tEnter rating using *: ");
    scanf("%s",&rat);
    printf("\n\tSuggestions: \n\n");
    scanf("%s",sugg);
    printf("\n\n\t\tThanks for your valuable feedback!!\n\n");
    printf("\n\n\t\t\t***Please visit again***\n\n");
}
void help()
{
    char conno[10]="8861678308";

    printf("\n\nFor further queries: %s\n\n",conno);
    printf("SVCE Bank Bengaluru,\n");
    printf("KIA Road vidyanagara,\n");
    printf("Bangalore-562157.");
    
    printf("\n\n\n\t\t***Please visit again***\n\n");
}