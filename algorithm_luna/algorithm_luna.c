#include "luna_algorithm.h"
#include <stdlib.h>
#define SIZE_ARR 16
void card_input()
{
        char *cptr = (char *)malloc(SIZE_ARR * sizeof(*cptr)); 
        if (*cptr != NULL) {
                printf("Enter the number card Visa: ");
                for (int i = 0; i < SIZE_ARR; ++i) {
                        fgets(*(cptr + i), 16, stdin);
                }
        }
        free(cptr);
        return 0;
}

void luna_algorithm()
{
        int num = 0, sum = 0;
        for (int i = 14; i >= 0; i -=2) {
                num = (int)(*(arr + i) - '0');
                num *= 2;

                if (num > 9) {
                        num -= 9;
                } 
                sum += num;
        }

        for (int i = 15; i >= 0; i -=2) {
                num = (int)(*(arr + i) - '0');
                sum += num;
        }

        if ((*arr - '0' == 4) && (sum % 10 == 0 && sizeof(arr) == SIZE_ARR)) {
                printf("Correct");
        } else {
                printf("Fake\n");
        }
        
        return 0;
}
