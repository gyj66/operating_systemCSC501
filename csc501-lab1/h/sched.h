#ifndef _LAB1_H_
#define _LAB1_H_

#define RANDOMSCHED 1
#define LINUXSCHED 2

extern int sched_class;
extern void setschedclass(int sched_class);
extern int getschedclass();


#endif
