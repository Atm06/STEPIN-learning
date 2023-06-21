#include <stdio.h>

struct time {
  int hours;
  int minutes;
  int seconds;
};

struct time diff_between_time(struct time t1, struct time t2) {
  struct time difference;
  difference.hours = t1.hours - t2.hours;
  difference.minutes = t1.minutes - t2.minutes;
  difference.seconds = t1.seconds - t2.seconds;

  // Handle negative values
  if (difference.seconds < 0) {
    difference.seconds += 60;
    difference.minutes--;
  }

  if (difference.minutes < 0) {
    difference.minutes += 60;
    difference.hours--;
  }

  return difference;
}

int main() {
  struct time t1, t2, difference;

  // Get the start time from the user
  printf("Enter the start time (hh:mm:ss): ");
  scanf("%d:%d:%d", &t1.hours, &t1.minutes, &t1.seconds);

  // Get the stop time from the user
  printf("Enter the stop time (hh:mm:ss): ");
  scanf("%d:%d:%d", &t2.hours, &t2.minutes, &t2.seconds);

  // Calculate the difference between the two times
  difference = diff_between_time(t1, t2);

  // Print the difference
  printf("The difference between the two times is: %d:%d:%d\n",
         difference.hours, difference.minutes, difference.seconds);

  return 0;
}
