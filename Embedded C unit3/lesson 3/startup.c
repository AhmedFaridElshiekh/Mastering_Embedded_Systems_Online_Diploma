#include<stdint.h>
extern int main(void);
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_bss;
extern unsigned int _E_bss;
extern unsigned int _E_text;
extern unsigned int _stack_top;


void reset_handler(void){
unsigned int DATA_size=(unsigned char *)&_E_DATA - (unsigned char *)&_S_DATA;
unsigned char * P_src=(unsigned char *)&_E_text;
unsigned char * P_dst=(unsigned char *)&_S_DATA;
int i;
for(i=0;i<DATA_size;i++){
	*((unsigned char*)P_dst++)=*((unsigned char*)P_src++);
}
unsigned int bss_size=(unsigned char *)&_E_bss - (unsigned char *)&_S_bss;
P_dst=(unsigned char *)&_S_bss;
for(i=0;i<DATA_size;i++){
	*((unsigned char*)P_dst++)=(unsigned char)0;
}
	main();
}

void default_handler(void){
	reset_handler();
} 
void NMI_handler(void) __attribute__((weak,alias("default_handler")));;
void H_fault_handler(void) __attribute__((weak,alias("default_handler")));;
void MM_fault_handler(void) __attribute__((weak,alias("default_handler")));;
void BUS_fault(void) __attribute__((weak,alias("default_handler")));;
void Usage_fault_handler(void) __attribute__((weak,alias("default_handler")));;
uint32_t vectors[] __attribute__((section(".vectors")))={
(uint32_t) &_stack_top,
(uint32_t) &reset_handler,
(uint32_t) &NMI_handler,
(uint32_t) &H_fault_handler,
(uint32_t) &MM_fault_handler,
(uint32_t) &BUS_fault,
(uint32_t) &Usage_fault_handler

};


