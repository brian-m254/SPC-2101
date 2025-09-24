//Programme to calculate the volume and surface area of a cylinder 
/*
Name:Brian Masakhwe 
Reg No:PA106/G/28761/25
Description: Programme to calculate the volume and surface area of a cylinder 
*/

#include<stdio.h>
int main(){

float radius,height,volume, surface_area;
float pi=3.142;

printf("Enter the radius: ");
scanf("%f",& radius);

printf("Enter the height: ");
scanf("%f",& height);

volume=pi*radius *radius *height;
surface_area=2*pi*radius*radius+2*pi*radius*height;


printf("The volume is %f\n", volume);
printf("The surface_area is %f",surface_area);

return 0;
}