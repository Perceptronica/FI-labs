#include <stdio.h>
#include <math.h>

int main(){
    double ans, f;
    double eps = 1;
    // epsilon 
    while (1 + eps / 2 > 1) {
        eps /= 2;
    }
    printf("Machine epsilon for double: %.16e\n", eps);
    int n, cnt;
    int k = 50;
    printf("Enter n: ");
    scanf("%d", &n);
    double a = 0.0;
    double b = 0.5;
    double step = (b - a) / n;
    printf("Table of \n");
    printf("================================================================== \n");
    printf("|   x  |         sum         |      f(x)          |  n iterations |\n");
    printf("================================================================== \n");
    double x = 0;
    for(int i = 0; i <= n; ++i){
        double d = 1;
        x += step;
        ans = 0;
        cnt = 1;
        f = (x * (3 - x)) / (pow(1 - x, 3));
        double c = x;
        while (cnt < 101) {
            //c *= c;
            d = cnt * (cnt + 2) * pow(x, cnt);
            ans += d;
            cnt++;
        }  
        printf("| %.2f | %.16f | %.16f |      %d       |\n", x, ans, f, cnt);
        printf("=================================================================== \n");
    }
    
    return 0;
}
