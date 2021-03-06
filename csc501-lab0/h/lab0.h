#ifndef _LAB0_H_
#define _LAB0_H_
#include <proc.h>
#define NSYSCALL 27 /* set the number of system call*/
/* 27 system calls */
/*
#define SYS_FREEMEM 0
#define SYS_CHPRIO 1
#define SYS_GETPID 2
#define SYS_GETPRIO 3
#define SYS_GETTIME 4
#define SYS_KILL 5
#define SYS_RECEIVE 6
#define SYS_RECVCLR 7
#define SYS_RECVTIM 8
#define SYS_RESUME 9
#define SYS_SCOUNT 10
#define SYS_SDELETE 11
#define SYS_SEND 12
#define SYS_SETDEV 13
#define SYS_SETNOK 14
#define SYS_SCREATE 15
#define SYS_SIGNAL 16
#define SYS_SIGNALN 17
#define SYS_SLEEP 18
#define SYS_SLEEP10 19
#define SYS_SLEEP100 20
#define SYS_SLEEP1000 21
#define SYS_SRESET 22
#define SYS_STACKTRACE 23
#define SYS_SUSPEND 24
#define SYS_UNSLEEP 25
#define SYS_WAIT 26
*/

enum{
	SYS_FREEMEM=0,
	SYS_CHPRIO,
	SYS_GETPID,
	SYS_GETPRIO,
	SYS_GETTIME,
	SYS_KILL,
	SYS_RECEIVE,
	SYS_RECVCLR,
	SYS_RECVTIM,
	SYS_RESUME,
	SYS_SCOUNT,
	SYS_SDELETE,
	SYS_SEND,
	SYS_SETDEV,
	SYS_SETNOK,
	SYS_SCREATE,
	SYS_SIGNAL,
	SYS_SIGNALN,
	SYS_SLEEP,
	SYS_SLEEP10,
	SYS_SLEEP100,
	SYS_SLEEP1000,
	SYS_SRESET,
	SYS_STACKTRACE,
	SYS_SUSPEND,
	SYS_UNSLEEP,
	SYS_WAIT
};

extern sys_frequency[NSYSCALL][NPROC];
extern unsigned long sys_time[NSYSCALL][NPROC];
extern Bool sys_call[NPROC];
extern Bool sys_trace;
extern unsigned long ctr1000;


#endif
