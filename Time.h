//author of this header file is muntakimur rahaman 
//please give a creadit when using it.

#include<stdio.h>
#include<time.h>

	void getTime(){
        time_t rawtime;
        struct tm *timeinfo;
        time (&rawtime);
        timeinfo=localtime(&rawtime);
        printf("Current time is %s",asctime(timeinfo));
    }
