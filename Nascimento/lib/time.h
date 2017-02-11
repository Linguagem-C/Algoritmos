#include <stdio.h>
#include <time.h>

struct time {
  time_t years, months, weeks, days, hours, minutes, seconds;
};

typedef struct time TIME;

int format_month(char *month);
int format_week(char *week);
void calculate_date(PEOPLE *victor, TIME *t, int day_of_month, int day_of_week);
void print_date(PEOPLE *victor, TIME *t);

int format_month(char *month){
  int months;

  if(strcmp(month, "janeiro") == 0){
    months = 1;
  }else if(strcmp(month, "fervereiro") == 0){
    months = 2;
  }else if(strcmp(month, "março") == 0){
    months = 3;
  }else if(strcmp(month, "abriu") == 0){
    months = 4;
  }else if(strcmp(month, "maio") == 0){
    months = 5;
  }else if(strcmp(month, "junho") == 0){
    months = 6;
  }else if(strcmp(month, "julho") == 0){
    months = 7;
  }else if(strcmp(month, "agosto") == 0){
    months = 8;
  }else if(strcmp(month, "setembro") == 0){
    months = 9;
  }else if(strcmp(month, "outubro") == 0){
    months = 10;
  }else if(strcmp(month, "novembro") == 0){
    months = 11;
  }else if(strcmp(month, "dezembro") == 0){
    months = 12;
  }else{
    printf("Mes invalido!\n");
  }
    
  return months;
}

int format_week(char *week){
  int weeks;
  if(strcmp(week, "domingo") == 0){
    weeks = 1;
  }else if(strcmp(week, "segunda") == 0){
    weeks = 2;
  }else if(strcmp(week, "terça") == 0){
    weeks = 3;
  }else if(strcmp(week, "quarta") == 0){
    weeks = 4;
  }else if(strcmp(week, "quinta") == 0){
    weeks = 5;
  }else if(strcmp(week, "sexta") == 0){
    weeks = 6;
  }else if(strcmp(week, "sabado") == 0){
    weeks = 7;
  }else{
      printf("Dia da semana invalido (domingo à sabado)\n");
  }
  return weeks;
}

void calculate_date(PEOPLE *victor, TIME *t, int day_of_month, int day_of_week) {
  t->seconds = time(NULL);
  t->minutes = t->seconds/60;
  t->hours = t->minutes/60;
  t->days = t->hours/24;
  t->weeks = t->days/7;
  t->months = t->days/30;
  t->years = t->months/12;

  t->years -= victor->year - 1970;
  t->months = t->years*12 - day_of_month;
  t->weeks = t->months*4 - day_of_week;
  t->days = t->months*24 - victor->day;
  t->hours = t->days*60 - victor->hour;
  t->minutes = t->hours*60 - victor->minute;
  t->seconds = t->minutes*60 - victor->second;
}

void print_date(PEOPLE *victor, TIME *t) {
  printf("anos desde %ld de %s de %ld = %ld anos\n", victor->day, victor->month, victor->year, t->years);
  printf("meses desde %ld de %s de %ld = %ld meses\n", victor->day, victor->month, victor->year, t->months);
  printf("semanas desde %ld de %s de %ld = %ld semanas\n", victor->day, victor->month, victor->year, t->weeks);
  printf("dias desde %ld de %s de %ld = %ld dias\n", victor->day, victor->month, victor->year, t->days);
  printf("horas desde %ld de %s de %ld = %ld horas\n", victor->day, victor->month, victor->year, t->hours);
  printf("minutos desde %ld de %s de %ld = %ld minutos\n", victor->day, victor->month, victor->year, t->minutes);
  printf("segundos desde %ld de %s de %ld = %ld segundos\n", victor->day, victor->month, victor->year, t->seconds);
}