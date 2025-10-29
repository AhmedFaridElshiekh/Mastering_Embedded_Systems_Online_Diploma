#include<stdint.h>

static unsigned long stack_top[256];
void NMI_handler(void) __attribute__((weak,alias("default_handler")));;
void H_fault_handler(void) __attribute__((weak,alias("default_handler")));;
void reset_handler(void);
void (* const g_p_fn_vectors[])() __attribute__((section(".vectors")))=
{
	(void(*)())((unsigned long )stack_top+sizeof(stack_top)),
	&reset_handler,
	&NMI_handler,
	&H_fault_handler
};
extern int main(void);
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_bss;
extern unsigned int _E_bss;
extern unsigned int _E_text;

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



