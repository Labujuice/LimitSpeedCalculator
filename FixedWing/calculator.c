#include <stdint.h>
#include <stdio.h>


int main(void)
{
    float F_t = 10*9.81;
    float F_d = 0;
    float roh = 1.225;
    float C_d = 0.3;
    float m = 10;
    float V = 0;
    float Area_s = 0.2;
    float acc = 0;
    float dt = 0.1;
    float time = 0;


    while(F_t - F_d > 0.1) 
    {
        acc = (F_t - F_d)/m;
        V += acc * dt;
        F_d = 0.5 * roh * V * V *Area_s *C_d;

        printf("%f %f\n",V,time);
        time += dt;
    }

    return printf("END\n");;
}