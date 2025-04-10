// Your code here...
#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int N, i;

    
    scanf("%d", &N);

    struct Student students[N];

    for(i = 0; i < N; i++) {
       
        scanf("%d", &students[i].rollNo);
        
        getchar();  
        fgets(students[i].name, 50, stdin);  
        
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

