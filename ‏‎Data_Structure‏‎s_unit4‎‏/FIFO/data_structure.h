/*
 * data_structure.h
 *
 *  Created on: 28 Sep 2024
 *      Author: user
 */

#ifndef DATA_STRUCTURE_H_
#define DATA_STRUCTURE_H_
#define element_type unsigned int
#include <stdlib.h>
typedef struct{
	unsigned int length;
	element_type* base;
	element_type* front;
	element_type* tail;
}FIFO_buf_t;
typedef enum{
	FIFO_no_error,
	FIFO_full,
	FIFO_not_full,
	FIFO_empty,
	FIFO_not_empty,
	FIFO_null
}Status;
Status FIFO_enqueue(FIFO_buf_t* buffer,element_type item);
Status FIFO_dequeue(FIFO_buf_t* buffer,element_type* item);
Status FIFO_create(FIFO_buf_t* buffer,unsigned int size);
Status FIFO_check_is_full(FIFO_buf_t* buffer);
Status FIFO_check_is_empty(FIFO_buf_t* buffer);






#endif /* DATA_STRUCTURE_H_ */
