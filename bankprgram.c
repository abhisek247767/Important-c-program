//Question: Making a simple bank account using C programming

//Soution:

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char name[30];
char add[50];
float amt;
void CACC();
void WCSH();
void DCSH();
void EACC();
void DACC();
void BCHK();
int main()
{
 int i,d;
 do{
 printf("\nEnter 1 to create account");
 printf("\nEnter 2 to withdraw cash");
 printf("\nEnter 3 to deposit cash");
 printf("\nEnter 4 to edit account");
 printf("\nEnter 5 to display account");
 printf("\nEnter 6 to balance check");
 printf("\nEnter 7 to exit");
 printf("\nEnter your choice:");
 scanf("%d",&i);
 switch (i)
 {
  case 1: CACC();
   break;
  case 2: WCSH();
   break;
  case 3: DCSH();
   break;
  case 4: EACC();
   break;
  case 5: DACC();
   break;
  case 6: BCHK();
   break;
  case 7: exit(0);
   break;
  default: printf("\nInvalid Input");
 }
 printf("\nEnter -1 to continue:");
 scanf("%d",&d);
 }while(d==-1);
 return 0;
}
void CACC()
{
 printf("\nEnter your name:");
 scanf("%s",name);
 fflush(stdin);
 printf("\nEnter your address:");
 scanf("%s",add);
 fflush(stdin);
 printf("\nEnter your entry amount:");
 scanf("%f",&amt);
}
void WCSH()
{
 float wamt;
 printf("\nEnter the amount for withdraw:");
 scanf("%f",&wamt);
 while(wamt>amt)
 {
  printf("\nWithdrawal amount exceeds the balance.");
  printf("\nEnter withdraw amount again:");
  scanf("%f",&wamt);
 }
 amt-=wamt;
 printf("Available amount:%.2f",amt);
}
void DCSH()
{
 float damt;
 printf("\nEnter the amount for deposit:");
 scanf("%f",&damt);
 while(damt<0)
 {
  printf("\nInvalid input.");
  printf("\nEnter the deposit amount again:");
  scanf("%f",&damt);
 }
 amt+=damt;
 printf("Available amt:%.2f",amt);
}
void EACC()
{
 printf("\nEnter new name:");
 scanf("%s",name);
 printf("\nEnter new address:");
 scanf("%s",add);
}
void DACC()
{
 printf("\nName:");
 puts(name);
 printf("\nAddress:");
 puts(add);
}
void BCHK()
{
 printf("Available amount:%.2f",amt);
}
