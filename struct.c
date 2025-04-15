#include <stdio.h>

struct user {
    char *ID;
    char *first_name;
    char *last_name;
    char *stat;
    unsigned int age;
    int gender;
    float height;
    float weight;
}typedef user;

int main() {
    
    user users;
    users.ID = "AZE0123456";
    users.first_name = "Elshad";
    users.last_name = "Yusifov";
    users.stat = "Billioner";
    users.age = 33;
    users.gender = 1;
    users.height = 1.71;
    users.weight = 111.1;
    
    printf("ID: %s\nName: %s\nSurname: %s\nStatus: %s\nAge: %u\nGender: %d\nHeight: %.2f\nWeight: %.1f", users.ID, users.first_name, users.last_name, users.stat, users.age, users.gender, users.height, users.weight);

    return 0;
}
