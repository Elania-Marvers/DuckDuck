#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define SWAP_DUCK(a, b)					\
  a = (void *)((unsigned long)a ^ (unsigned long)b);	\
  b = (void *)((unsigned long)a ^ (unsigned long)b);	\
  a = (void *)((unsigned long)a ^ (unsigned long)b);

extern void (*duck)(void);
extern void (*tuck)(void);
extern int n;

void duck_master (void);
void duck_slave (void);
void duck_priest (void);
void duck_booker (void);
void duck_boxer (void);
void duck_bunny (void);
void duck_bdsl (void);
