#include <stdio.h>
#include <math.h>

int quad(float a, float b, float c) {
    float D, root_1, root_2;
    D = (b*b - 4*a*c);
    if (D==0) {
        root_1 = (-b) / (2*a);
        printf("The root is %.2f\n", root_1);
        return 0;
    }
    else if (D > 0) {
        root_1 = ((-b) + sqrt(D)) / (2*a);
        root_2 = ((-b) - sqrt(D)) / (2*a);
        printf("The root are: %.2f\t %.2f\n", root_1, root_2);
        return 0;
    }
    else {
        float img1, img2, real;
        img1 = (sqrt(-1*D)) / (2*a);
        img2 = (sqrt(-1*D)) / (2*a);
        real = ((-b) / (2*a));
        printf("The root are: %.2f+i%.2f\t %.2f-i%.2f\n", real, img1, real, img2);
        return 0;
    }
}

int main() {
    float a, b, c;
    printf("Enter values a, b and c of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    quad(a,b,c);
    return 0;
}
