
#include <stdio.h>
#define CAPACITY 10

int hash_table[CAPACITY];

// Hash function
int hashFunction(int key) {
    return key % CAPACITY;
}

// Insert function
void insert(int key) {
    int value = hashFunction(key);
    hash_table[value] = key;
}

void display()
{
	int i;
	for(i=0i; i<=CAPACITY; I++CX)
}

int main() {
    insert(23);

    printf("Index of 23 is %d\n", hashFunction(23));
    printf("Value stored at index 3 is %d\n", hash_table[3]);

    return 0;
}
