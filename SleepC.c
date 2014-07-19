// Creado por ArchangelSmarth 18/07/2014
// version 1.0.0
// Escuintla_Guatemala
// Copyright © 2007 Free Software Foundation, Inc

#include <stdio.h>
#include <sys/time.h>


void SleepC(int timev){   // funsion sleepC
		struct timeval ts, tf, tr;
	gettimeofday(&ts, NULL);
	tf.tv_sec = 0;
	printf("Inicio...!!\n");
	printf("sistema time ---> %d\n", tf.tv_sec );

	while(1){

			if(tf.tv_sec == (ts.tv_sec - (100000000 * timev) ) ){
				gettimeofday(&ts, NULL);
				tf.tv_sec = 0;
				printf("-----------------------------------> genial\n"); // aka se ejecuta el segundo
				//break;    // para tomper el ciclo
			}else{
				//printf("sistema time ---> %d\n", tf.tv_sec );
			tf.tv_sec++ ; // aumenta los microsegundos
			}
			
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	SleepC(3); //  Espera 3 segundos
	return 0;
}
