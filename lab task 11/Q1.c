#include <stdio.h>
#include <string.h>
struct Flight {
    char flightNumber[10];
    char departureCity[20];
    char destinationCity[20];
    char date[15];
    int availableSeats;
};

void displayFlight(struct Flight f) {
    printf("\n----- Flight Details -----\n");
    printf("Flight Number   : %s\n", f.flightNumber);
    printf("Departure City  : %s\n", f.departureCity);
    printf("Destination City: %s\n", f.destinationCity);
    printf("Date            : %s\n", f.date);
    printf("Available Seats : %d\n", f.availableSeats);
    printf("--------------------------\n");
}

void bookSeat(struct Flight *f) {
    if (f->availableSeats > 0) {
        f->availableSeats--;
        printf("\nSeat booked successfully!\n");
        printf("Remaining Seats: %d\n", f->availableSeats);
    } else {
        printf("\nSorry! No seats available.\n");
    }
}

int searchFlight(struct Flight flights[], int n, char target[]) {
	int i;
    for (i = 0; i < n; i++) {
        if (strcmp(flights[i].flightNumber, target) == 0) {
            return i; 
        }
    }
    return -1;
}

int main() {
    struct Flight flights[100];
    int n,i;

    printf("Enter number of flights: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of flight %d\n", i + 1);
        printf("Flight Number: ");
        scanf("%s", flights[i].flightNumber);
        printf("Departure City: ");
        scanf("%s", flights[i].departureCity);
        printf("Destination City: ");
        scanf("%s", flights[i].destinationCity);
        printf("Date (DD-MM-YYYY): ");
        scanf("%s", flights[i].date);
        printf("Available Seats: ");
        scanf("%d", &flights[i].availableSeats);
    }

    int choice;
    char searchNum[10];
    while (1) {
        printf("\n--- Flight Management System ---\n");
        printf("1. Search & Display Flight\n");
        printf("2. Book a Seat on a Flight\n");
        printf("3. Exit\n");
	    printf("Enter your choice: ");
    	scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter flight number to search: ");
                scanf("%s", searchNum);

                int index = searchFlight(flights, n, searchNum);  

                if (index == -1) {
                    printf("\nFlight not found!\n");
                } else {
                    displayFlight(flights[index]);
                }
                break;

            case 2:
                printf("Enter flight number to book: ");
                scanf("%s", searchNum);

                index = searchFlight(flights, n, searchNum);  

                if (index == -1) {
                    printf("\nFlight not found!\n");
                } else {
                    bookSeat(&flights[index]);
                }
                break;

            case 3:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
