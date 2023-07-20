#include <math.h>
#include <stdio.h>

typedef struct {
    double x;
    double y;
} point;

double distance(point p1, point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

point near(point points[], int n, point p) {
    double dist = INFINITY;
    point smaller;
    for (int i = 0; i < n; i++) {
        double current_dist = distance(points[i], p);
        if (current_dist < dist) {
            smaller = points[i];
            dist = current_dist;
        }
    }
    return smaller;
}

int main() {
    int n;
    scanf("%d", &n);

    point points[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf%lf", &points[i].x, &points[i].y);
    }

    point p;
    scanf("%lf%lf", &p.x, &p.y);

    point smaller = near(points, n, p);
    printf("%.2lf %.2lf\n", smaller.x, smaller.y);
}
