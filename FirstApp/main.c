#include <stdio.h>



struct Student {
    int roll;
    char name[20];
    double gp;
    
};

typedef int integer;


typedef struct {
    int roll;
    char name[20];
    double gp;
} Student;


int main(void) {
    
    struct Student s1, s2, s3;
    s1.roll = 5;
    s2.roll = 10;
    
    s1.gp = 9.6;
    
    
    
    return 0;
}
