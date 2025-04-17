#include <stdio.h>
#define FLOORS 2
#define SECTIONS 3

// 0 = Empty, 1 = Occupied
int parking[FLOORS][SECTIONS] = {
    {0, 1, 0,1,0},
    {1, 0, 0,1,0},
    
};

// Function to display parking status
void showParking() {
    printf("\n--- Parking Status (0 = Empty, 1 = Occupied) ---\n");
    for (int i = 0; i < FLOORS; i++) {
        printf("Floor %d: ", i);
        for (int j = 0; j < SECTIONS; j++) {
            printf("%d ", parking[i][j]);
        }
        printf("\n");
    }
}

// Function to park a vehicle
void parkVehicle() {
    for (int i = 0; i < FLOORS; i++) {
        for (int j = 0; j < SECTIONS; j++) {
            if (parking[i][j] == 0) {
                parking[i][j] = 1;
                printf("Vehicle parked at Floor %d, Section %d\n", i, j);
                return;
            }
        }
    }
    printf("Garage is full. No space available.\n");
}

int main() {
      int choice;

    do {
        printf("\n--- Parking Garage Menu ---\n");
        printf("1. Show Parking\n");
        printf("2. Park a Vehicle\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showParking();
                break;
            case 2:
                parkVehicle();
                break;
            case 3:
                printf("Exiting Program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 3);
 //Group O Members 
    NAIKA CORNELLIOUS 2024/DCS/DAY/0958G
    MIKENGA ADONIA 2024/DCS/DAY/0306
    SENFUMA ROBERT 2024/DCS/DAY/1704G
    MUTEBI NICHOLAS 2024/DCS/DAY/1708G
    KARL PETER 2024/DCS/DAY/
    return 0;
}
