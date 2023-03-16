#include <stdio.h>
#define SIZE 4

int search(const int array[], int key, size_t size);
int insert(const int array[], int key, size_t size);

int main() {

    int key;
    int nums[SIZE] = {1, 3, 5, 6};

    printf("Enter integer to search:");
    scanf("%d", &key);

    int subscript = search(nums, key, SIZE);

    if (subscript != -1){
        printf("Subscript: %d", subscript);
    }
    else {
        subscript = insert(nums, key, SIZE);
        printf("Subscript WOULD BE: %d", subscript);
    }

    return 0;
}

int search(const int array[], int key, size_t size) {
    for(size_t n = 0; n < size; ++n){
        if (array[n] == key) {
            return n;
        }
    }
    return -1;
}

int insert(const int array[], int key, size_t size) {
    int ind;
    for(size_t n = 0; n <= size; n++){
        if (array[n] <= key) {

        }
        else if (array[n] >= key) {
            return n;
        }
    }
}