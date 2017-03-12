#include <stdio.h>
#include <math.h>
// structures are declared to declare new types.
// should be above any function that wishes to use it
typedef struct {
    float x;
    float y;
} point;

int main() {
    int count = 10;
    int sum;
    sum = add_together(1, 2);
    printf("%d", sum);
    point p;
    p.x = 0.1;
    p.y = 2;

    // float length = math.sqrt(p.x * p.x + p.y * p.y);
}

// functions 

int add_together(int x, int y) {
    int result = x + y;
    return result;
}






