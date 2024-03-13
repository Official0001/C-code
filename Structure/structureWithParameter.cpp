#include <stdio.h>
struct student {
    int id;
    char name[20];
    char address[20];
};

void acceptStudentDetails(struct student s) {   // Function definition
    printf("Id is %d\n", s.id);
    printf("Name is %s\n", s.name);
    printf("Address is %s\n", s.address);
}

int main() 
{
    struct student s;

    printf("Enter the Id, Name, and Address of the student: ");
    scanf("%d%s%s", &s.id, s.name, s.address);

    // Function call
    acceptStudentDetails(s);

    return 0;
}




