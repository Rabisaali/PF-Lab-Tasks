#include <stdio.h>
int main () {
    char c[100];
    int sum=0;
    int j=0;
    int newArray[100];
    scanf("%[^\n]", c);

    for (int i=0; i<100; i++) {
        if(c[i] >= '0' && c[i] <= '9') {
            newArray[j] = c[i];
            sum+=(newArray[j]-'0');
            j++;
        }
    }
    
    printf("%d", sum);
    
    return 0;
}