#include <stdio.h>
int main () {
    int array[10];
    printf("Enter any 10 numbers: ");
    
    for (int i=0; i<10; i++) {
        scanf("%d", &array[i]);
    }
//printing the user inputed array 
    for (int i=0; i<10; i++) {
        printf("%d ", array[i]);
    }

    for(int i=0; i<10; i++) {
        if(array[i+1] == '\0') {
            printf("The array is in ascending order/n");
            break;
        }
        if(array[i] > array[i+1]) {
            printf("The array is not in ascending order\n");
            break;
        }
    }  

    /*as far as checking is concerned.... the proogram ends here! But if the new sorted array is required then: 
    to store the sorted array nested loops are required :) otherwise, a separate function is needed for qsort()*/

    int temp;

    for (int i=0; i<10; i++) {
        for (int j=i+1; j<10; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i=0; i<10; i++) {
        printf("%d ", array[i]);
    }

}