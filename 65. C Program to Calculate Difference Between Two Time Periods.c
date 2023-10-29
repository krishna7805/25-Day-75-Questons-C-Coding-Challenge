// 25-Days-75-question-C-Challenge
// Day 22 : 26-oct-2023
// Question no. 65 : C Program to Calculate Difference Between Two Time Periods


#include <stdio.h>
struct TIME {
   int seconds;
   int minutes;
   int hours;
};

void differenceBetweenTimePeriod(struct TIME t1,
                                 struct TIME t2,
                                 struct TIME *diff);

int main() {
   struct TIME startTime, stopTime, diff;

   printf("Enter the start time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &startTime.hours,
         &startTime.minutes,
         &startTime.seconds);

   printf("Enter the stop time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &stopTime.hours,
         &stopTime.minutes,
         &stopTime.seconds);

   // Difference between start and stop time
   differenceBetweenTimePeriod(startTime, stopTime, &diff);
   printf("\nTime Difference: %d:%d:%d - ", startTime.hours,
          startTime.minutes,
          startTime.seconds);
   printf("%d:%d:%d ", stopTime.hours,
          stopTime.minutes,
          stopTime.seconds);
   printf("= %d:%d:%d\n", diff.hours,
          diff.minutes,
          diff.seconds);
   return 0;
}

// Computes difference between time periods
void differenceBetweenTimePeriod(struct TIME start,
                                 struct TIME stop,
                                 struct TIME *diff) {
   while (stop.seconds > start.seconds) {
      --start.minutes;
      start.seconds += 60;
   }
   diff->seconds = start.seconds - stop.seconds;
   while (stop.minutes > start.minutes) {
      --start.hours;
      start.minutes += 60;
   }
   diff->minutes = start.minutes - stop.minutes;
   diff->hours = start.hours - stop.hours;
}
