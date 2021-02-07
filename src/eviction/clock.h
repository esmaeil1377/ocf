#ifndef __EVICTION_CLOCK_H__
#define __EVICTION_CLOCK_H__
#include <stdio.h>
#include <stdlib.h>
#include "eviction.h"
#include "clock_structs.h"
struct ocf_user_part;

void secondChance(int frameNum, int pages[], int size);
void clockPRA(int n, int page[], int size);
void optPRA(int n, int page[], int size);
#endif