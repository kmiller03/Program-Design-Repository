#include <stdio.h>
#include <math.h>

#define PI 3.1415926

double integrate(double (*f) (double), double a, double b);

int main() {
    double result;
    result = integrate(sin, 0.0, PI/2);
    printf("Integrating sin function from 0.0 to PI/2, result is %.31g\n", result);
    result = integrate(exp, 0.0, PI/2);
    printf("Integrating exp function from 0.0 to PI/2, result is %.31g\n", result);
    result = integrate(sqrt, 0.0, PI/2);
    printf("Integrating sqrt function from 0.0 to PI/2, result is %.31g\n", result);

}

double integrate(double (*f) (double), double a, double b) {
    double stepsize = 0.01;
    double integral = 0.0;
    double x;
    double area;
    for (x = a + stepsize; x <= b; x += stepsize) {
        area = f(x) * stepsize;
        integral += area;
    }

    return integral;
}