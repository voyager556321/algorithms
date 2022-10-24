#include <stdio.h>
int cal_max_min_avg_val(int min_v, int max_v, float avg_v)
{
        int arr[4];
        for (int i = 0; i < 4; ++i) {
                scanf("%d", &arr[i]);
                avg_v += arr[i];
                if (arr[i] > max_v) {
                        max_v = arr[i];
                        return max_v;
                } else {
                        min_v = arr[i];
                        if (arr[i - 1] < min_v) {
                                min_v = arr[i - 1];
                                return min_v;
                        }
                }
                return avg_v;
        } 
        return printf("max = %d, min =  %d, avg = %0.2lf", max_v, min_v, avg_v);
}
int statements(int square_v, int cube_v, int size_arr) 
{
        int arr[4];
        size_arr = sizeof(arr) / sizeof(int);
        for (int i = 0; i < 4; ++i) {
                if (arr[i] == 0 && arr[i + 1] < size_arr) {
                        square_v = arr[i + 1];
                        square_v = square_v * square_v;
                        return square_v;
                } else {
                        cube_v = arr[i - 1];
                        cube_v = cube_v * cube_v * cube_v; 
                        return cube_v;
                }
        }
}
int main(void)
{
        printf("Enter the 4 digits: ");
        int max_val = 0, min_val = 0;
        float avg_val = 0;
        int square_val = 0, cube_val = 0, size_arr = 0;
        int result_cal = cal_max_min_avg_val(max_val, min_val, avg_val);
        int result_statements = statements(square_val, cube_val, size_arr);
        printf("%d, %d",result_cal, result_statements);
        return 0;
}
