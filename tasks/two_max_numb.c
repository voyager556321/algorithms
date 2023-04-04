#include<stdio.h> 
int main(void)
{
        int a[10] = {2, 45, 3, 34, 5, 6, 29, 12, 9, 18};
        int i = 0;
        int max = a[0];
        int second_max = a[0];
        while (i < 10) {
                if(a[i] > max) {
                        max = a[i];
                } else if (a[i] > second_max) {
                        second_max = a[i];
                }
                ++i;
        }
        printf("first max = %d; second max = %d;\n", max, second_max);
        return 0;
    

}

