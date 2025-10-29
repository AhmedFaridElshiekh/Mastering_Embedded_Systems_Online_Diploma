#include<avr/interrupt.h>
#include<util/delay.h>
#include<avr/io.h>
#define F_CPU 16000000UL //define CPU 16MHZ
ISR(INT0_vect){
	PORTD |=(1<<7);
	_delay_ms(500);
	PORTD &=~(1<<7);
	_delay_ms(500);

}
int main(void){
	DDRD |=(1<<7);
	DDRD &=~(1<<2);
	SREG |=(1<<7);//global intterrupt enable
	GICR |=(1<<6);//enable INT0
	MCUCR |=(1<<0);//ISC01:0 ISC00:1 Any logical change on INT0 generates an interrupt request.
	while(1);
	
	return 0;
}