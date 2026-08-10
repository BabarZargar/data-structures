#include <stdio.h>

struct Student{
    char name[50];
    int roll_no;
    int age;
    float marks;
};

void print(char name[], int roll_no, int age, float marks){
    printf("%s %d %d %f", name, roll_no, age, marks);
}

int main(){
    struct Student s1 = {"Babar", 134, 19, 95};
    print(s1.name, s1.roll_no, s1.age, s1.marks);
    return 0;
}