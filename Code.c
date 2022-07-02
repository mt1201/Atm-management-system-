#include<stdio.h>
#include<conio.h>

int main()
{
 int bal=10000,da,aad,wa,aaw;
 char en;
 int ch,ac,re; int i;

do{
 for(i=1;i<85;i++)
 {
  printf("*");
 }
 printf("\n\t\t\t\t WELCOME TO HDFC BANK\n");

 for(i=1;i<85;i++)
 {
  printf("*");
 }

 printf("\nEnter 1 For Balance Enquiry");
 printf("\nEnter 2 For Deposit Money");
 printf("\nEnter 3 For Withdraw Money");
 printf("\n");
 for(i=1;i<85;i++)
 {
  printf("*");
 }

 printf("\nEnter Your Choice = ");
 scanf("%d",&ch);
     for(i=1;i<85;i++)
     {
      printf("*");
     }

 if(ch<=3 && ch>=1)
 {

 printf("\nEnter your Account Number = ");
 scanf("%d",&ac);
     if(ac==12345)
     {
     printf("\nRe Enter your Account Number = ");
     scanf("%d",&re);
   if(ac==re)
   {
    switch(ch)
    {
    case 1:
     printf("\n");
     for(i=1;i<85;i++)
     {
      printf("*");
     }
    printf("\nAccount Balance = %d Rs\n",bal);
     for(i=1;i<85;i++)
     {
      printf("*");
     }
    break;

    case 2:
     printf("\n");
     for(i=1;i<85;i++)
     {
      printf("*");
     }
    printf("\nEnter Deposit Amount = ");
    scanf("%d",&da);
    aad=bal+da;
     for(i=1;i<85;i++)
     {
      printf("*");
     }
    printf("\nAccount Balance = %d Rs\n",aad);
     for(i=1;i<85;i++)
     {
      printf("*");
     }
    break;

    case 3:
     printf("\n");
     for(i=1;i<85;i++)
     {
      printf("*");
     }
    printf("\nEnter Withdraw Amount = ");
    scanf("%d",&wa);
     if(wa<=bal)
     {
     aaw=bal-wa;
      for(i=1;i<85;i++)
      {
       printf("*");
      }
     printf("\nAccount Balance = %d Rs\n",aaw);
      for(i=1;i<85;i++)
      {
       printf("*");
      }
     }
     else
     {
      for(i=1;i<85;i++)
      {
       printf("*");
      }
     printf("\nInsufficient Balance\n");
      for(i=1;i<85;i++)
      {
       printf("*");
      }
     }
    break;

    default:
     for(i=1;i<85;i++)
     {
      printf("*");
     }
    printf("\nEnter A Valid Choice\n");
     for(i=1;i<85;i++)
     {
     printf("*");
     }
    break;
    }
   }
   else
   { 
     for(i=1;i<85;i++)
     {
      printf("*");
     }
   printf("\nAccount Number Mis Match\n");
     for(i=1;i<85;i++)
     {
      printf("*");
     }
   }
  }
     else
     {
   printf("\nEnter A Valid Account Number\n");
     for(i=1;i<85;i++)
     {
      printf("*");
     }
        }
 }
 else
 {
 printf("\nEnter A Valid Choice\n");
  for(i=1;i<85;i++)
  {
  printf("*");
  }
 }

 printf("\nEnter y to Continue Again = ");
 scanf("%s",&en);
}while(en=='y' || en=='Y');
 
    printf("\nThank You For Visiting HDFC ATM");
    printf("\n\t\t\t\t   Have a Nice Day\n");
 for(i=1;i<85;i++)
 {
  printf("*");
 }

return 0;

}
