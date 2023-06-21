#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct CartesianCoordinate {
  float x;
  float y;
};

float distance_between_points(struct CartesianCoordinate *p1, struct CartesianCoordinate *p2) {
  float dx = p1->x - p2->x;
  float dy = p1->y - p2->y;
  return sqrt(dx * dx + dy * dy);
}

int main() {
  struct CartesianCoordinate p1, p2;

  // Get the coordinates of point 1
  printf("Enter the x-coordinate of point 1: ");
  scanf("%f", &p1.x);
  printf("Enter the y-coordinate of point 1: ");
  scanf("%f", &p1.y);

  // Get the coordinates of point 2
  printf("Enter the x-coordinate of point 2: ");
  scanf("%f", &p2.x);
  printf("Enter the y-coordinate of point 2: ");
  scanf("%f", &p2.y);

  // Calculate the distance between the two points
  float distance = distance_between_points(&p1, &p2);

  // Print the distance
  printf("The distance between the two points is: %.2f\n", distance);

  return 0;
}
