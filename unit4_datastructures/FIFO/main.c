#include<stdio.h>
#include "data_structure.h"
int main(void){
	FIFO_buf_t queue;
	element_type temp;
	int i=0;
	if(FIFO_create(&queue,5)!=FIFO_no_error)return 1;
	for(i=0;i<5;i++){
		printf("%d ",i);
		FIFO_enqueue(&queue,i);
	}
	printf("\n");
	for(i=0;i<5;i++){
			FIFO_dequeue(&queue,&temp);
			printf("%d ",temp);
		}

	return 0;
}
