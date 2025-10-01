//Programme for data bundles purchase 
/*
NAME: BRIAN MASAKHWE 
REG NO:PA106/G/28765
DESCRIPTION: Programme for data bundles purchase 
*/

#include<stdio.h>
int main(){
int choice;

//displaying the menu for data bundle 
printf("Select data bundle\n");
printf("1.100MB @ KES50\n");
printf("2.500mb @ KES200\n");
printf("3.1GB @ KES350\n");
printf("4.2GB @ KES600\n");

//asking the user to enter the choice 
printf("Enter your choice (1-4)  ");
scanf("%d",&choice);

//displaying the data bundle selected and it's cost
if (choice==1)
{
printf("your choice is 100MB @ KES50");
}
else if(choice==2)
{
printf("your choice is 500MB @ KES200");
}
else if(choice==3)
{
printf("your choice is 1GB @ KES350");
}
else if(choice==4)
{
printf("your choice is 2GB @ KES600");
}
else if(choice== 0 && choice >4);
{
printf("invalid choice");
}
return 0;
}