/* Bill Generating Program for Grocery Shop*/
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<math.h>
float calculate(float quant[],float price[],int Nitem) //function to Calculate the Amount of Bill
{

    float FTOTAL=0.0,Total,BP=0.0,disc=0.0;
    int con;
    for(int i=0;i<Nitem;i++)
    {
        Total=price[i]*quant[i];
        FTOTAL=Total+FTOTAL;;
    }


   printf("\n\t\t\t\t\t---------------------------------------------------------------------\n");
   printf("\t\t\t\t\t\t\t\t\t\t\t BILL::   %.3f",FTOTAL);
   printf("\n\t\t\t\t\t\t\t\t\t\t     DISCOUNT(*/*):: ");
   scanf("%f",&disc);
   disc=FTOTAL*(disc/100);
   FTOTAL=FTOTAL-disc;
   printf("\n\t\t\t\t\t\t\t\t\t\t\t----------------------");
   printf("\n\t\t\t\t\t\t\t\t\t\t\t TOTAL BILL::%.2f",FTOTAL);
   printf("\n\t\t\t\t\t\t\t\t\t\t\t----------------------");
   printf("\n\t\t\t\t\t\t\t\t\t\t\t BILL PAID::");
   scanf("%f",&BP);
   if(BP<=FTOTAL)
   {printf("\n\t\t\t\t\t\t\t\t\t\t\t BALANCE::%.2f",(FTOTAL-BP));
    printf("\n\t\t\t\t\t---------------------------------------------------------------------\n");
   }
   else
    {printf("\n\t\t\t\t\t\t\t\t\t\t\t Excess Amount::%.2f\t",(BP-FTOTAL));
     printf("\n\t\t\t\t\t---------------------------------------------------------------------\n");
    }
   printf("\n\t\t-------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\n\t\t\t*************************** Visit Again! Have a Nice Day *****************\n");
   printf("\n\t\t-------------------------------------------------------------------------------------------------------------------------------\n");
   printf("\n\n\t\t\t\t\t\t\tWant TO Continue(0/1)???::");
   scanf("%d",&con);
   if(con==0)
   {
       exit(0);
   }
   else
   {
       printf("\n\n\n\t\t\/***\/\***/\/\***/\/\***/\/\***/\/\/\***/\/\/\  Welcome Again!  /\/\***/\/***\/\***/\/***\/\***/\/***\/\***/\/***\/\***/\/***\/***/\\n");
   }
}




float details(int Nitem)                        //Function to Get details of Customers
{   float quant[10],price[10];
    int Aitem,item_New;
    long int Mobno;
    float q,Price;
    int n=Nitem,i;
    char iname[n][20];
    char CName[30];
                     printf("\n\t\t\t\tENTER CUSTOMER NAME:: ");
                     scanf("%s",&CName);
                     printf("\n\t\t\t\tENTER CUSTOMER MOB NO.:: ");
                     scanf("%lli",&Mobno);

        for(int i=0;i<Nitem;i++)
        {
                printf("\n\t*****************************************************************************************************************************************************");
                printf("\n\t\t\t\t\t\tEnter Details of (%d /%d) items\n\t\t\t",i+1,Nitem);
                printf("\n\t\t\t\t\t\tFill Details of %d Item\n\t\t\t",i+1);
                printf("\n\t\t\tITEM NAME::");
                scanf("%s",&iname[i]);
                printf("\n\t\t\tITEM PRICE(PER KG/LITRE):: ");
                scanf("%f",&Price);
                printf("\n\t\t\tITEM QUANTITY(KG/LITRE):: ");
                scanf("%f",&q);
                printf("\n\t\t\t[Do you Want to Add another Item(Press '1' to add item else (Press any Key To Conitnue)]:: ");
                scanf("%d",&Aitem);
                quant[i]=q;
                price[i]=Price;
                if(Aitem == 1)
                  {
                      printf("\n\t\t\t(Add No of Items):: ");
                     scanf("%d",&item_New);
                    Nitem=Nitem+item_New;}

       }
                printf("\n\t******************************************************************************************************************************************************");
                int name=Nitem;
                printf("\n\n\n\t\t-------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n\n\t\t\t\t\t\t\t\tBILL GENERATED\n");
                printf("\n\t\t-------------------------------------------------------------------------------------------------------------------------------\n");

                printf("\n\t\t\t\t\t\t\tCustomer Name:- %s||",CName);
                printf("Customer Mob no:-");
                printf("%lli",&Mobno);
                printf("\n\t\t");
                printf("\n\t\t\t\t\t---------------------------------------------------------------------\n");
                printf("\n\n\t\t\t\t\t\tITEM\tITEM RATE\tQUANTITY\tPRICE");
                printf("\n\t\t\t\t\t\t    \t         \t(KG/LITRE)");
                printf("\n\t\t\t\t\t---------------------------------------------------------------------\n");
                for(int i=0;i<name;i++)
                {
                    printf("\t\t\t\t\t\t%s\t%.2f\t\t%.2f\t\t%.2f\n",iname[i],price[i],quant[i],price[i]*quant[i]);
                }

                    calculate(quant,price,Nitem);
}



int main()
{
printf("\n::::::::::::::::::::::::::::::::::::::::::  W E L C O M E  TO  G R O C E R Y   S T O R E :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
printf("\n\t\t\t\t\t\t\t(FAIR PRIICE FOR ALL)\n");
printf("\n*******************************************************************************************************************************************************************");
int i,j,s,n,Nitem;
while(1)
{
    printf("\n\n\n\t\t\t\t\tNumber Of Items::----");
     scanf("%d",&Nitem);
     printf("\n\t\t\t\t-----------------------------------------");
    s=details(Nitem);
}
}
