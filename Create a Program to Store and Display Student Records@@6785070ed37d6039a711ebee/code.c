// Your code here...
#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int N, i;

    printf("Enter the number of students: ");
    scanf("%d", &N);

    struct Student students[N];

    for(i = 0; i < N; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);
        printf("Enter name: ");
        getchar();  
        fgets(students[i].name, 50, stdin);  // Read name with space
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    
    printf("\nStudent Details:\n");
    for(i = 0; i < N; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s", students[i].name);  
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

