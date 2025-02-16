//264.	C program to pass a structure to a user define function
#include <stdio.h>
struct student
{
    char name[50];
    int age;
    float marks;
};
 int display(struct student s)
{
    printf("\nDisplaying information\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);}
int main()
{
    struct student s;
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%[^\n]", s.name);
    printf("Enter age: ");
    scanf("%d", &s.age);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    display(s); // Passing structure as an argument
    return 0;
}

