#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student
{                                                
    int rollNumber;
    char name[50];
    int marks;
    float percentage;
};

 
void searchStudent(struct Student students[], int n)
 {
    int rollNumber;
    printf("Enter the roll number to search: ");
    scanf("%d", &rollNumber);
    
    int i,found = 0;
    for ( i = 0; i < n; i++)
	 {
        if (students[i].rollNumber == rollNumber) 
		{
            printf("Student found!\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %d\n", students[i].marks);
            printf("Percentage: %.2f\n", students[i].percentage);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Student not found!\n");
    }
}

void modifyStudent(struct Student students[], int n) 
{
    int rollNumber;
    printf("Enter the roll number to modify: ");
    scanf("%d", &rollNumber);
    
    int i,found = 0;
    for ( i = 0; i < n; i++) 
	{
        if (students[i].rollNumber == rollNumber)
		 {
            printf("Enter the new name: ");
            scanf("%s", students[i].name);
            printf("Enter the new marks: ");
            scanf("%d", &students[i].marks);
            students[i].percentage = (float)students[i].marks / 100 * 100;
            printf("Student details modified!\n");
            found = 1;
            break;
        }
    }
    
    if (!found)
	 {
        printf("Student not found!\n");
    }
}

void displayAllStudents(struct Student students[], int n)
 {
 	int i;
    printf("All student details:\n");
    for ( i = 0; i < n; i++)
	 {
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %d\n", students[i].marks);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("\n");
     }
    
 }


void displayAbove80(struct Student students[], int n) {
	
	int i,found;
    printf("Students with percentage above 80:\n");
    for ( i = 0; i < n; i++)
	 {
        if (students[i].percentage > 80) 
		{
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %d\n", students[i].marks);

            printf("Percentage: %.2f\n", students[i].percentage);
            found = 1;
            break;
        }
    }
}

    void displayMaxPercentage(struct Student students[], int n) 
	{
    float maxPercentage = 0;
    int i;
    for ( i = 0; i < n; i++)
	 {
        if (students[i].percentage > maxPercentage) 
		{
            maxPercentage = students[i].percentage;
        }
    }
    
    printf("Students with maximum percentage:\n");
    for ( i = 0; i < n; i++)
	 {
        if (students[i].percentage == maxPercentage)
		 {
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %d\n", students[i].marks);
            printf("Percentage: %.2f\n", students[i].percentage);
        }
    }
}

int main() {
    struct Student students[100];
    int numStudents;
    int i,choice;

    printf("Hey! Can you please provide the number of students? ");
    scanf("%d", &numStudents);

    for ( i = 0; i < numStudents; i++) {
        printf("Great! Now, enter the details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        students[i].percentage = (float)students[i].marks / 100 * 100;
        printf("\n");
    }

    do {
        printf("\n*** MENU ***\n");
        printf("1. Search student\n");
        printf("2. Modify student\n");
        printf("3. Display students with marks above 80\n");
        printf("4. Display student with maximum percentage\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                searchStudent(students, numStudents);
                break;
            case 2:
                modifyStudent(students, numStudents);
                break;
            case 3:
                displayAbove80(students, numStudents);
                break;
            case 4:
                displayMaxPercentage(students, numStudents);
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}