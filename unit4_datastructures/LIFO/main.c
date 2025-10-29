#include<stdio.h>
#include "data_structure.h"
int main(void){
	LIFO_buf_t stack;
	element_type temp;
	int i=0;
	if(LIFO_create(&stack,5)!=LIFO_no_error)return 1;
	for(i=0;i<5;i++){
		printf("%d ",i);
		LIFO_add_item(&stack,i);
	}
	printf("\n");
	for(i=0;i<5;i++){
			LIFO_pop_item(&stack,&temp);
			printf("%d ",temp);
		}

	return 0;
}
