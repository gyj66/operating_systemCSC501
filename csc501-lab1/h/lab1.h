#ifndef _LAB1_H_
#define _LAB1_H_

#define DEFAULTSCHED 0
#define RANDOMSCHED 1
#define LINUXSCHED 2

extern int schedclass;
extern void setschedclass(int sched_class);
extern int getschedclass();

extern int random_seed;

#endif
