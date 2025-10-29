/*
 * data_structure.c
 *s
 *  Created on: 28 Sep 2024
 *      Author: user
 */
#include "data_structure.h"
Status FIFO_create(FIFO_buf_t* buffer,unsigned int size){
	buffer->base=(element_type*)malloc(sizeof(element_type)*size);
	if(buffer->base==NULL)return FIFO_null;
	buffer->length=size;
	buffer->front=NULL;
	buffer->tail=NULL;
	return FIFO_no_error;

}
Status FIFO_check_is_full(FIFO_buf_t* buffer){
	if(!buffer || !buffer->base)return FIFO_null;
	if(buffer->front==buffer->base && buffer->tail==(buffer->base+sizeof(element_type)*((buffer->length)-1)) )
		return FIFO_full;
	else if (buffer->front==buffer->tail+1)
		return FIFO_full;
	else
		return FIFO_not_full;

}
Status FIFO_check_is_empty(FIFO_buf_t* buffer){
	if(!buffer->front && !buffer->tail)
		return FIFO_empty;
	else
		return FIFO_not_empty;
}

Status FIFO_enqueue(FIFO_buf_t* buffer,element_type item){
if(FIFO_check_is_full(buffer)==FIFO_null )return FIFO_null;
if(FIFO_check_is_full(buffer)==FIFO_full )return FIFO_full;
if(FIFO_check_is_empty(buffer)==FIFO_empty){
	buffer->front=buffer->tail=buffer->base;
	*(buffer->tail)=item;

}
else if(buffer->tail==(buffer->base+sizeof(element_type)*((buffer->length)-1))){
	buffer->tail=buffer->base;
	*(buffer->tail)=item;

}
else{
	buffer->tail++;
	*(buffer->tail)=item;
}
return FIFO_no_error;
}
Status FIFO_dequeue(FIFO_buf_t* buffer,element_type* item)
{
	if(!buffer || !buffer->base)return FIFO_null;
	if(FIFO_check_is_empty(buffer)==FIFO_empty)return FIFO_empty;
	if(buffer->front==buffer->tail){
		*item=*(buffer->front);
		buffer->front=buffer->tail=NULL;
	}
	else if(buffer->front==(buffer->base+sizeof(element_type)*((buffer->length)-1))){
		*item=*(buffer->front);
		buffer->front=buffer->base;


	}
	else{
		*item=*(buffer->front);
		buffer->front++;
	}
	return FIFO_no_error;

}




