#include <stdio.h>

int main()
{
    double h_speed = 1.0, t_speed = 0.1;
    double dt = 1.0, time = 0.0;
    double h_distance = 0.0, t_distance = 2.0;
    int max = 100;


    for(int i = 0; i < max; i++)
    {
        h_distance += h_speed * dt;
        t_distance += t_speed * dt;

        time += dt;

        printf("time : %lf, dt : %lf, Archilleus : %lf, Turtle : %lf\n", time, dt, h_distance, t_distance);

        dt *= 0.5;
    }
    
    return 0;
}