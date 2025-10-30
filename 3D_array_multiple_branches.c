/*
Brian Masakhwe 
PA106/G/28765/25
Array storing data data of occcupied rooms in branches of a hotel
*/
#include <stdio.h>
int main(){
	int chain[3][5][10]={
	{
	{0,1,0,1,1,0,0,1,1,0},
	{1,0,0,1,1,0,1,0,1,0},
	{0,0,0,0,0,1,1,0,1,0},
	{1,1,1,1,1,1,1,1,1,1},
	{0,0,0,0,0,0,0,0,1,1}
	},
	{
	{0,0,0,0,0,0,0,0,0,0},
	{1,1,0,0,1,0,1,0,1,0},
	{1,1,0,1,0,1,0,1,1,1},
	{0,0,1,1,0,0,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0}
	},
	{
	{1,1,1,1,1,1,1,1,1,0},
	{0,0,1,0,1,1,0,0,1,1},
	{0,0,1,1,0,0,1,0,0,1},
	{0,0,0,0,1,1,1,1,1,1},
	{0,1,0,1,0,1,0,1,0,0}
	}	
	};
	
	int branch,floor,room;
	int totaloccupied = 0;
	for(branch=0;branch<3;branch++){
		printf("   Branch  %d\n", branch +1);
		
		for(floor=0;floor<5;floor++){
			int occupied = 0;
			for(room=0;room<10;room++){
				occupied = occupied + chain[branch][floor][room];
			}
			int unoccupied = 10 - occupied;
			totaloccupied = totaloccupied + occupied;
			printf("Floor %d: occupied = %d , unoccupied = %d\n",floor + 1,occupied,unoccupied);
		}
	}
	printf("\nTotal occupied rooms across all branches = %d\n", totaloccupied);
    printf("Total unoccupied rooms across all branches = %d\n", (3 * 5 * 10) - totaloccupied);
    
    return 0;
}