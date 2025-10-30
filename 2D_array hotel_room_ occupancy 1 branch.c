//2D array for hotel room occupancy with one branch
/*
Name:Brian Masakhwe 
Reg NO:PA106/G/28765/25
*/

#include <stdio.h>

int main() {
    int occupancy[5][10]; 
    int floor, room;
    int occupied, vacant;

    printf("Enter occupancy for each floor:\n");

    for (floor = 0; floor < 5; floor++) {
        printf("Floor %d:\n", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("  Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);

        }
        printf("\n");
    }
    

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d : Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}