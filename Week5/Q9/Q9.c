#include <stdio.h>

double calculateCube(void *value, int type) {
    switch (type) {
        case 1: // char
            return (double)(*(char *)value) * (*(char *)value) * (*(char *)value);
        case 2: // int
            return (double)(*(int *)value) * (*(int *)value) * (*(int *)value);
        case 3: // long int
            return (double)(*(long int *)value) * (*(long int *)value) * (*(long int *)value);
        case 4: // float
            return (double)(*(float *)value) * (*(float *)value) * (*(float *)value);
        case 5: // double
            return (*(double *)value) * (*(double *)value) * (*(double *)value);
        default:
            printf("Invalid type\n");
            return 0.0;
    }
}

int main() {
    int type;
    void *value;
    char c;
    int i;
    long int li;
    float f;
    double d;

    printf("Enter the type (1=char, 2=int, 3=long int, 4=float, 5=double): ");
    scanf("%d", &type);

    printf("Enter the value: ");
    switch (type) {
        case 1:
            scanf(" %c", &c);
            value = &c;
            break;
        case 2:
            scanf("%d", &i);
            value = &i;
            break;
        case 3:
            scanf("%ld", &li);
            value = &li;
            break;
        case 4:
            scanf("%f", &f);
            value = &f;
            break;
        case 5:
            scanf("%lf", &d);
            value = &d;
            break;
        default:
            printf("Invalid type\n");
            return 1;
    }

    double cube = calculateCube(value, type);
    printf("Cube of the given value is: %lf\n", cube);

    return 0;
}