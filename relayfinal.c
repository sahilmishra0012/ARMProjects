#include <lpc214x.h>

unsigned int delay;

int main(void){

	IO0DIR = (1<<19);
	
	while(1){
		IO0CLR = (1<<19);
		for(delay=0; delay<500000; delay++);
		IO0SET = (1<<19);
		for(delay=0; delay<500000; delay++);
	}	
}
