#include <stdio.h>
int main(void)
{
        char arr[16];
        int num = 0, sum = 0;
        printf("Enter the number card Visa: ");
        for (int i = 0; i < 16; ++i){
                scanf("%c", &arr[i]);
        }
        for (int i = 14; i >= 0; i -=2) {  
                num = (int)(arr[i] - '0');
                num *= 2;
                if (num  > 9) {
                        num -= 9;
                }
                sum += num;
        }
        for (int i = 15; i >= 0; i -=2) {
                num = (int)(arr[i] - '0');
                sum += num;
        }
        if (*arr - '0' == 4 && sum % 10 == 0 && sizeof(arr) == 16) {
                printf("Correct");
        } else {
                printf("Fake\n");
        }
        return 0;
}


