#include "../../Bibliotecas/victor.h/lib/strings.h"
#include "../../Bibliotecas/victor.h/lib/buffers.h"
#include "lib/people.h"
#include "lib/time.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int i;

void read_attributes(PEOPLE *victor, int *day_of_month, int *day_of_week){
  printf("Insira o ano que você nasceu: ");
  scanf("%ld", &victor->year);
  clean_buffer();

  printf("Insira o mês que você nasceu: ");
  fgets(victor->month, 20, stdin);
  remove_line_break(victor->month);
  for(i=0; i<strlen(victor->month); i++){
   victor->month[i] = tolower(victor->month[i]);
  }
  *day_of_month = format_month(victor->month);

  printf("Insira o dia que você nasceu: ");
  scanf("%ld", &victor->day);
  clean_buffer();

  printf("Insira o dia da semana que você nasceu: ");
  fgets(victor->week, 20, stdin);
  remove_line_break(victor->week);
  for(i=0; i<strlen(victor->week); i++){
   victor->week[i] = tolower(victor->week[i]);
  }
  *day_of_week = format_week(victor->week);

  printf("Insira a hora que você nasceu: ");
  scanf("%ld", &victor->hour);

  printf("Insira o minuto que você nasceu: ");
  scanf("%ld", &victor->minute);

  printf("Insira os segundos que você nasceu: ");
  scanf("%ld", &victor->second);
}

int main() {

	TIME t;
	PEOPLE victor;
  int day_of_month = 0, day_of_week = 0;

  read_attributes(&victor, &day_of_month, &day_of_week);

  calculate_date(&victor, &t, day_of_month, day_of_week);

  print_date(&victor, &t);

	return 0;
}