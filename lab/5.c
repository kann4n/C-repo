#include <stdio.h>
#include <string.h>

#define maxStudents 100

typedef struct
{
    int rollNum;
    char name[32];
    short marks;
} Student; // 40 bytes

typedef enum {
    nameWise,
    RollWise,
    markWise
} sortBy;

void getStudentDetails(Student*);
void sortStudents(Student*, Student*, int, int);
void printStdDetails(Student*, int);

int main()
{
    int numberOfStudents;
    Student students[maxStudents] = { 0 };
    Student stdByMarks[maxStudents] = { 0 };
    Student stdByRoll[maxStudents] = { 0 };
    Student stdByName[maxStudents] = { 0 };

    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);
    printf("Enter students details\n");
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("Student %d\n", i + 1);
        getStudentDetails(&students[i]);
    }
    sortStudents(students, stdByName, nameWise, numberOfStudents);
    sortStudents(students, stdByRoll, RollWise, numberOfStudents);
    sortStudents(students, stdByMarks, markWise, numberOfStudents);

    printf("\nStudents details sorted by name\n");
    printStdDetails(stdByName, numberOfStudents);

    printf("\nStudents details sorted by roll number\n");
    printStdDetails(stdByRoll, numberOfStudents);

    printf("\nStudents details sorted by marks\n");
    printStdDetails(stdByMarks, numberOfStudents);
}

// get user input for std dtails
void getStudentDetails(Student* student)
{
    printf("\tRoll Number => ");
    scanf("%d", &student->rollNum);
    while (getchar() != '\n'); // clear input buffer
    printf("\tStudent Name => ");
    fgets(student->name, 32, stdin);
    // Remove the newline character from the name
    size_t len = strlen(student->name);
    if (len > 0 && student->name[len - 1] == '\n') {
        student->name[len - 1] = '\0';
    }
    printf("\tMarks Obtained => ");
    scanf("%hd", &student->marks);
    while (getchar() != '\n'); // clear input buffer
}
// sorts std1 and cpy the sorted thing to the std2 
void sortStudents(Student* std1, Student* std2, int ByThis, int numberOfStudents)
{
    Student stdBuffer[maxStudents];
    int swapit = 0;
    for (int i = 0; i < numberOfStudents; i++) stdBuffer[i] = std1[i]; // cpy std to buffer
    // bubble sort it
    for (int i = 0; i < numberOfStudents - 1; i++)
    {
        for (int j = 0; j < numberOfStudents - i - 1; j++)
        {
            swapit = 0;
            switch (ByThis)
            {
            case nameWise: // name wise
                if (strcmp(stdBuffer[j].name, stdBuffer[j + 1].name) > 0) swapit = 1;
                break;
            case RollWise: // roll no wise 
                if (stdBuffer[j].rollNum > stdBuffer[j + 1].rollNum) swapit = 1;
                break;
            case markWise: // mark wise 
                if (stdBuffer[j + 1].marks > stdBuffer[j].marks) swapit = 1; // high mark = low rank
                break;
            default:
                printf("Not vaild byThis");
                break;
            }
            if (swapit)
            {
                Student tmp = stdBuffer[j];
                stdBuffer[j] = stdBuffer[j + 1];
                stdBuffer[j + 1] = tmp;
            }
        }
    }
    // cpy bffr to dest
    for (int i = 0; i < numberOfStudents; i++) std2[i] = stdBuffer[i];
}
// printt std details
void printStdDetails(Student* std, int numOfstd)
{
    printf("+ ----- + ------- + ------------------------------ + ----- +\n");
    printf("| index | Roll No | Name                           | Marks |\n");
    printf("+ ----- + ------- + ------------------------------ + ----- +\n");
    for (int i = 0; i < numOfstd; i++)
    {
        printf("| %5d | %7d | %-30s | %5d |\n", i, std[i].rollNum, std[i].name, std[i].marks);
    }
}