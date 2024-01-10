/*  In a class of 20,15 students were sitting in random order science teacher Mr. Sachin came to 
class and wanted to find whether student name Mr. Saurav came to class or not, illustrate a 
solution using C program to help Mr. Sachin for the search. */
#include<stdio.h>
#include<string.h>
int main(){
char *students[]={
    "alok",
    "ram",
    "sham"
};
 int num_students = sizeof(students) / sizeof(students[0]);
    int found = 0;
for (int i = 0; i < num_students; i++)
{
    if (strcmp(students[i], "alok")==0)
    {
        found=1;
        break;
    }
    
}
 if (found) {
        printf("alok is present in the class.\n");
    } else {
        printf("alok is not present in the class.\n");
    }

}