#include<stdio.h>
int main()
{
int Rating,Years;

printf(" PLEASE Enter your Rating:");
scanf("%d",&Rating);

printf("PLEASE Enter your working Years:");
scanf("%d",&Years);

if( Rating == 5 && Years >= 3){
    printf("Excellent Bonus");
}

else if (Rating == 4 && Years >= 2){
    printf("Good Bonus");
}
else if (Rating == 3 && Years >= 1){
    printf("Basic Bonus");
}
else{
    printf("No Bonus");
}
return 0;
}