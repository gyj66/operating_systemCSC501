#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//global ticket count.
int gtickets=0;

struct node_t{
	int tickets;
	int times;
	struct node_t *next;
};

struct node_t *head=NULL;

void insert(int tickets){
	struct node_t *tmp=malloc(sizeof(struct node_t));
	assert(tmp!=NULL);
	tmp->tickets=tickets;
	tmp->times=0;
	tmp->next=head;
	head=tmp;
	gtickets+=tickets;
}

void print(){
	struct node_t *curr=head;
	printf("List: ");
	while(curr){
		printf("[%d] ",curr->tickets);
		curr=curr->next;
	}
	printf("\n");
}


int main(int argc,char *argv[]){
	assert(argc==3);
	int seed=atoi(argv[1]);
	int loops=atoi(argv[2]);
	srandom(seed);

//populate list with some number of jobs, each
//with some number of tickets.
	insert(50);
	insert(100);
	insert(25);
	print();

	int i;
	for(i=0;i<loops;++i){
		int counter=0;
		int winner=random()%gtickets;
		struct node_t *current=head;
		while(current){
			counter=counter+current->tickets;
			if(counter>winner)
				break;
			current=current->next;
		}
		current->times++;
		print();
		printf("winner: %d %d\n\n",winner,current->tickets);

	}

	struct node_t *help=head;
	while(help){
		printf("%d occupies %c%.2f\n",help->tickets,37,(help->times*1.0/loops)*100);
		help=help->next;
	}

	return 0;
}


/*
 * http://pages.cs.wisc.edu/~remzi/OSTEP/cpu-sched-lottery.pdf
 *
 */
