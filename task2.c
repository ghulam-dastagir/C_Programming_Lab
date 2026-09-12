#include<stdio.h>
int main()
{
int balance, withdrawAmount;
 printf("PLEASE Enter you Balance amount:");
 scanf("%d",&balance);
 printf("PLEASE Enter your withdrawAmount:");
 scanf("%d",&withdrawAmount);
 if(balance>0 && balance >= withdrawAmount){
    printf("withdrawal approved");
 } else{
    printf("withdrawal denied");
 }
 return 0;
}
