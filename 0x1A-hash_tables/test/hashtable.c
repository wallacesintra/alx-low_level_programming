#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
    char name[MAX_NAME];
    int age;
    //...other data
} person;

unsigned int hash(char *name)
{
    int length = strlen(name, MAX_NAME);
    unsigned int hash_value = 0;
    
    
    return 5;
}

int main(){
    printf("Wallace => %u \n",hash("Wallace"));
    printf("Joe => %u \n",hash("Joe"));
    printf("Fred => %u \n",hash("Fred"));
    printf("Mary => %u \n",hash("Mary"));
    printf("Watu => %u \n",hash("Watu"));
    return (0);
}