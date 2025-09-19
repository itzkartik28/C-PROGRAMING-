#include <stdio.h>
int main() {
int rollno[10];
char name[10][50];
int i;
// Input
for (i = 0; i < 10; i++) {
printf("Enter Roll No. of student %d: ", i + 1);
scanf("%d", &rollno[i]);
printf("Enter Name of student %d: ", i + 1);
scanf("%s", name[i]);
}
// Output
printf("\n--- Student Details ---\n");
for (i = 0; i < 10; i++) {
printf("Roll No: %d\tName: %s\n", rollno[i], name[i]);
}
return 0;
}
