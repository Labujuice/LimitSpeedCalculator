#include <stdint.h>
#include <stdio.h>
#include <math.h>

#define PI  3.14159265359
#define G   9.81

int main(void)
{
    float angle = 30 * PI / 180; //deg to rad
    float m = 5; //kg
    float F_Thrust = m * G / cos(angle); 
    float F_front = F_Thrust * sin(angle);
    float roh = 1.225;
    float C_d = 0.5;
    float V = 0;
    float Area_s = 0.16 + (2.54*8/100) * (2.54*8 /100) * 3.1416*4 * sin(angle);
    float acc = 0;
    float dt = 0.01;
    float time = 0;

    float F_d = 0;

    while(F_Thrust - F_d > 0.1) 
    {
        acc = (F_Thrust - F_d)/m;
        V += acc * dt;
        F_d = 0.5 * roh * V * V *Area_s *C_d;

        printf("%f %f %f\n",time, V, F_Thrust - F_d);
        time += dt;
    }

    return printf("END\n");;
}