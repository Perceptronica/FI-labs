#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double a = 1.0;
double b = 3.0;

double p(){
    double eps = 1;
    while (1 + eps/2 > 1) {
        eps /= 2;
    }
    return eps;
}


double F(double x){
    return 3*(log(x) * log(x)) + 6 * log(x) - 5;
}

double D(double x) {
    return (6*(log(x) + 1))/x;
}

double DD(double x){
    return -(6*log(x))/(x*x);
}

int covergence(double x){
    if (x < 3.0 && x > 1.0) {
        return abs(F(x) * DD(x)) > (D(x)*D(x));
    }
    return 0;
}

int main() {
    int cnt = 0;
    double x = 5;
    double x_0 = x;
    double eps = p();
    do {
        x_0 = x;
        x = x - F(x)/D(x);
        //printf("%f\n", x);
        //cnt++;
        //printf("%d\n", cnt);
    } while (abs(x - x_0) >= eps);
    printf("%f\n", x);
}
