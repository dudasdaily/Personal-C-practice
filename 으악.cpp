#include <stdio.h>
 #define MONTH 12
 #define YEARS 3


int main()
{   
    double year2016[MONTH] = { -3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 };
    double year2017[MONTH] = { -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 };
    double year2018[MONTH] = { -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 };

    //1. Use 2D array
    double year_arr[YEARS][MONTH] = { { -3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 }, 
                                      { -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 },
                                      { -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 } };

    //2. print data
    printf("[Temperature Data]\n");
    printf("Year Index :\t");
    for(int i = 0; i < MONTH; i++)
        printf("%-4d\t", i + 1);
    
    printf("\n");

    for(int j = 0; j < YEARS; j++)
    {
        printf("Year %-5d :\t", j + 2016);
        for(int i = 0; i < MONTH; i++)
        {
            printf("%-4.1lf\t", year_arr[j][i]);       
        }
        printf("\n");
    }
    printf("\n\n");

    //3. Calculate and print average temperature of 3 years
    

    printf("[Yearly average temperatures of 3 years]\n");
    for(int j = 0; j < YEARS; j++)
    {
        double sum = 0;

        for(int i = 0; i < MONTH; i++)
        {
            sum += (year_arr[j][i] / MONTH);
        }
  
        printf("Year %d : average temperatures = %.1lf\n", 2016 + j, sum);
    }

    printf("\n\n");

    //4. Calculate and print monthly average of 3 years
    printf("[Monthly average temperatures of 3 years]\n");
    printf("Year Index :\t");
    for(int i = 0; i < MONTH; i++)
        printf("%-4d\t", i + 1);
    printf("\n");

    printf("Avg temps :\t");
    for(int m = 0; m < MONTH; m++)
    {
        double avg = 0.0;

        for(int y = 0; y < YEARS; y++)
        {
            avg += year_arr[y][m] / (double)YEARS;
        }

        printf("%-4.1lf\t", avg);
    }   
    printf("\n");

   

    return 0;
}