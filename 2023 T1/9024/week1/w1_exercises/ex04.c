#include <stdio.h>

typedef struct {
  int day, month, year;
} DateT;
typedef struct {
  int hour, minute;
} TimeT;


typedef struct {
  int Tnumber;
  char weekday[4];
  DateT date;
  TimeT time;
  char Mode; 
  char from[31], to[31];
  int Jnumber;
  char FareApplied[12];
  float Fare, Discount, Amount;
} StudentT;


int main(void) {
    
    return 0;
}