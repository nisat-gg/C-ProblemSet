#include <stdio.h>

// Define a struct named 'Student'
struct Student {
    char name[50]; // Array to store the name
    int roll;      // Roll number
    float grade;   // Grade
};

int main() {
    struct Student students[30]; // Array to store data of 30 students
    int n;

    // Get the number of students
    printf("Enter the number of students (up to 30): ");
    scanf("%d", &n);

    // Input details for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll);

        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }

    // Display the data of all students
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Grade: %.2f\n", students[i].grade);
    }

    return 0;
}
