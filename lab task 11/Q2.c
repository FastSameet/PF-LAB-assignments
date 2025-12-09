#include <stdio.h>
#include <string.h>

struct Movie {
    char title[50];
    char genre[30];
    char director[50];
    int releaseYear;
    float rating;
};

void displayMovie(struct Movie m) {
    printf("\n----- Movie Details -----\n");
    printf("Title        : %s\n", m.title);
    printf("Genre        : %s\n", m.genre);
    printf("Director     : %s\n", m.director);
    printf("Release Year : %d\n", m.releaseYear);
    printf("Rating       : %.1f\n", m.rating);
    printf("-------------------------\n");
}

void addMovie(struct Movie movies[], int *count) {
    printf("\nEnter Title: ");
    scanf(" %[^\n]", movies[*count].title);

    printf("Enter Genre: ");
    scanf(" %[^\n]", movies[*count].genre);

    printf("Enter Director: ");
    scanf(" %[^\n]", movies[*count].director);

    printf("Enter Release Year: ");
    scanf("%d", &movies[*count].releaseYear);

    printf("Enter Rating (0.0 - 10.0): ");
    scanf("%f", &movies[*count].rating);

    (*count)++;
    printf("\nMovie added successfully!\n");
}

void searchByGenre(struct Movie movies[], int count, char genre[]) {
    int found = 0;

    printf("\nMovies in Genre: %s\n", genre);
	int i;
    for (i = 0; i < count; i++) {
        if (strcmp(movies[i].genre, genre) == 0) {
            displayMovie(movies[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("\nNo movies found in this genre.\n");
    }
}

void displayAllMovies(struct Movie movies[], int count) {
    if (count == 0) {
        printf("\nNo movies available.\n");
        return;
    }
    printf("\n--- All Movies ---\n");
    int i;
    for ( i = 0; i < count; i++) {
        displayMovie(movies[i]);
    }
}

int main() {
    struct Movie movies[100];
    int movieCount = 0;
    int choice;
    char genre[30];

    while (1) {
        printf("\n--- Movie Management System ---\n");
        printf("1. Add New Movie\n");
        printf("2. Search Movies by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMovie(movies, &movieCount);
                break;

            case 2:
                printf("\nEnter Genre to search: ");
                scanf(" %[^\n]", genre);
                searchByGenre(movies, movieCount, genre);
                break;

            case 3:
                displayAllMovies(movies, movieCount);
                break;

            case 4:
                printf("\nExiting program...\n");
                return 0;

            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }

    return 0;
}
