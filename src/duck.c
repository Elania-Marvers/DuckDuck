#include "duck.h"

void (*duck)(void);
void (*tuck)(void);
int n;

int main (void)
{
  int limit = 100;
  n = 0;
  duck = duck_master;
  tuck = duck_slave;
  while (n < limit)
    {
      duck();
      SWAP_DUCK(duck, tuck);
      tuck();
      n++;
    }
}
