#include <stdio.h>
int main(void)
{
	const int size = 16;
        char arr[size];
        int num = 0, sum = 0;
        printf("Enter the number card Visa: ");

	fgets(arr, size, stdin);

        for (int i = size - 2; i >= 0; i -= 2) {  
                num = (int)(arr[i] - '0');
                num *= 2;
                if (num > 9) {
                        num -= 9;
                }
                sum += num;
        }

        for (int i = size - 1; i >= 0; i -= 2) {
                num = (int)(arr[i] - '0');
                sum += num;
        }
        if ((arr[0] - '0' == 4)
			&& (sum % 10 == 0)
			&& sizeof(arr) == 16) {
                printf("Correct\n");
        } else {
                printf("Inauthentic\n");
        }
        return 0;
}
