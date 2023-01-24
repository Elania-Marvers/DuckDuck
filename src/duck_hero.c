#include "duck.h"

extern int n;
extern void (*duck)(void);
extern void (*tuck)(void);

void duck_master (void)
{
  printf("🦆 SufferDuck\n");
  if (n % 2 == 0)
    {
      if (rand()%100 > 67)
	duck = duck_bdsl;
      if (rand()%100 > 67)
	tuck = duck_slave;
      if (n > 0)
	n--;
    }
  else
    {
      if (rand()%100 > 67)
	duck = duck_boxer;
      if (rand()%100 > 67)
	tuck = duck_booker;
      n++;
    }
}

void duck_slave (void)
{
  printf("🦆 YesDuck\n");
  if (n % 2 == 0)
    {
      if (rand()%100 > 67)
	duck = duck_master;
      if (rand()%100 > 67)
	tuck = duck_priest;
      n++;
    }
  else
    {
      if (rand()%100 > 67)
	duck = duck_slave;
      if (rand()%100 > 67)
	tuck = duck_bdsl;
      if (n > 0)
	n--;
    }
}

void duck_priest (void)
{
  printf("🦆\tDuckDuck\tGO !!!!\n");
  if (n % 2 == 0)
    {
      if (rand()%100 > 67)
	duck = duck_slave;
      if (rand()%100 > 67)
	tuck = duck_booker;
      if (n > 0)
	n--;
    }
  else
    {
      if (rand()%100 > 67)
	duck = duck_bdsl;
      if (rand()%100 > 67)
	tuck = duck_priest;
      n++;
    }
}

void duck_booker (void)
{
  printf("📚 COINCOIN 📚\n");
  if (n % 2 == 0)
    {
      if (rand()%100 > 67)
	duck = duck_priest;
      if (rand()%100 > 67)
	tuck = duck_boxer;
      if (n > 0)
	n--;
    }
  else
    {
      if (rand()%100 > 67)
	duck = duck_booker;
      if (rand()%100 > 67)
	tuck = duck_slave;
      n++;
    }
}

void duck_boxer (void)
{
  printf("🥊 COINCOIN 🥊\n");
  if (n % 2 == 0)
    {
      if (rand()%100 > 67)
	duck = duck_booker;
      if (rand()%100 > 67)
	tuck = duck_bunny;
      if (n > 0)
	n--;
    }
  else
    {
      if (rand()%100 > 67)
	duck = duck_bunny;
      if (rand()%100 > 67)
	tuck = duck_bunny;
      n++;
    }
}

void duck_bunny (void)
{
  printf("cOIN 🐰\n");
  if (n % 2 == 0)
    {
      if (rand()%100 > 67)
	duck = duck_bdsl;
      if (rand()%100 > 67)
	tuck = duck_slave;
      if (n > 0)
	n--;
    }
  else
    {
      if (rand()%100 > 67)
	duck = duck_master;
      if (rand()%100 > 67)
	tuck = duck_bunny;
      n++;
    }
}

void duck_bdsl (void)
{
  printf("Coin 🐇\n");
  if (n % 2 == 0)
    {
      if (rand()%100 > 67)
	duck = duck_master;
      if (rand()%100 > 67)
	tuck = duck_slave;
      if (n > 0)
	n--;
    }
  else
    {
      if (rand()%100 > 67)
	duck = duck_bdsl;
      if (rand()%100 > 67)
	tuck = duck_slave;
      n++;
    }
}
