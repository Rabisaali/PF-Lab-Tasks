#include <stdio.h>
int main () {
    int array[12];
    int newArray[12];
    printf("Enter any 12 numbers: ");
    for (int i=0; i<12; i++) {
        scanf("%d", &array[i]);
    }
    int number;
    printf("Enter the number that you want to remove: ");
    scanf("%d", &number);

    int j=0;
    for (int i=0; i<12; i++) {
        if(array[i] != number) {
            newArray[j] = array[i];
            j++;
        }
    }
    for (int i=0; i<j; i++) {
        printf("%d", newArray[i]);
    }
    return 0;
}