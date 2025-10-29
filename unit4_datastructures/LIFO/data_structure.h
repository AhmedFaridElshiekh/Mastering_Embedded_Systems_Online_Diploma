/*
 * data_structure.h
 *
 *  Created on: 26 Sep 2024
 *      Author: user
 */

#ifndef DATA_STRUCTURE_H_
#define DATA_STRUCTURE_H_
#define element_type unsigned int
#include <stdlib.h>
typedef struct{
	unsigned int length;
	element_type* base;
	element_type* head;

}LIFO_buf_t;
typedef enum{
	LIFO_no_error,
	LIFO_full,
	LIFO_not_full,
	LIFO_empty,
	LIFO_not_empty,
	LIFO_null
}Status;
Status LIFO_add_item(LIFO_buf_t* buffer,element_type item);
Status LIFO_pop_item(LIFO_buf_t* buffer,element_type* item);
Status LIFO_create(LIFO_buf_t* buffer,unsigned int size);
Status LIFO_check_is_full(LIFO_buf_t* buffer);





#endif /* DATA_STRUCTURE_H_ */
