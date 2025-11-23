#include <stdio.h>
int main() {
    struct Student {
        int age;
        char first_name[50];
        char last_name[50];
        int standard;
    };
    struct Student s;
    printf("Enter age: ");
    scanf("%d", &s.age);
    printf("Enter first name: ");
    scanf("%s", s.first_name);
    printf("Enter last name: ");
    scanf("%s", s.last_name);
    printf("Enter standard: ");
    scanf("%d", &s.standard);
    printf("\nOutput: %d %s %s %d\n",
           s.age, s.first_name, s.last_name, s.standard);
    return 0;
}
