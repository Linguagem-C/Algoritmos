#include <time.h>

struct people {
  time_t year, day, hour, minute, second;
  char week[20], month[20];
};

typedef struct people PEOPLE;

