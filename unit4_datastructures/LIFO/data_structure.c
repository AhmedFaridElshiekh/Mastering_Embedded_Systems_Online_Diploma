/*
 * data_structure.c
 *s
 *  Created on: 26 Sep 2024
 *      Author: user
 */
#include "data_structure.h"
Status LIFO_create(LIFO_buf_t* buffer,unsigned int size){
	buffer->base=(element_type*)malloc(sizeof(element_type)*size);
	if(buffer->base==NULL)return LIFO_null;
	buffer->length=size;
	buffer->head=buffer->base;
	return LIFO_no_error;

}
Status LIFO_check_is_full(LIFO_buf_t* buffer){
	if(!buffer || !buffer->head || !buffer->base)return LIFO_null;
	if(buffer->head >= (buffer->base+buffer->length))return LIFO_full;
	else
		return LIFO_not_full;

}

Status LIFO_add_item(LIFO_buf_t* buffer,element_type item){
if(LIFO_check_is_full(buffer)==LIFO_null )return LIFO_null;
if(LIFO_check_is_full(buffer)==LIFO_full )return LIFO_full;
*(buffer->head)=item;
buffer->head++;
return LIFO_no_error;
}
Status LIFO_pop_item(LIFO_buf_t* buffer,element_type* item){
	if(!buffer || !buffer->head || !buffer->base)return LIFO_null;
	if(buffer->head==buffer->base)return LIFO_empty;
	buffer->head--;
	*item=*(buffer->head);
	return LIFO_no_error;

}




