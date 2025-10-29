#include<stdlib.h>
#include <stdint.h>
#define RCC_BASE 	0x40021000
#define GPIOA_BASE  0x40010800
#define RCC_APB2ENR *(volatile unsigned int *)(RCC_BASE+0x18)
#define GPIOA_CRH 	*(volatile unsigned int *)(GPIOA_BASE+0x04)
#define GPIOA_ODR	*(volatile unsigned int *)(GPIOA_BASE+0x0C)
typedef union{
	volatile unsigned int all_fields;
	struct{
		volatile unsigned int reserved:13;
		volatile unsigned int P_13:1;
	}pin;
}R_ODR_t;

void* _sbrk(int incr){
	static unsigned char* heap_ptr=NULL;
	unsigned char* prev_heap_ptr=NULL;
	extern unsigned int _E_bss;
	extern unsigned int _heap_End;
	if(heap_ptr==NULL)
		heap_ptr=(unsigned char*)&_E_bss;
	prev_heap_ptr=heap_ptr;
	if((heap_ptr+incr)>((unsigned char*)&_heap_End))
		return (void*)NULL;
	heap_ptr+=incr;
	return (void*)prev_heap_ptr;

}

int main(void)
{
	int* p=(int *)malloc(4);
    volatile R_ODR_t* R_ODR=(volatile R_ODR_t*) (GPIOA_BASE+0x0C);
    int i;
	RCC_APB2ENR |=(1<<2);
    GPIOA_CRH &=0xFF0FFFFF;
    GPIOA_CRH |=0x00200000;
    while(1){
    	R_ODR->pin.P_13=1;
    	for(i=0;i<50000;i++);
    	R_ODR->pin.P_13=0;
    	for(i=0;i<50000;i++);
	free(p);




    }
    return 0;
}
