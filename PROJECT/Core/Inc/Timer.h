/*
 * Timer.h
 *
 *  Created on: Sep 21, 2024
 *      Author: ADMIN
 */
#include "main.h"

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

int timer_flag[10];
int timer_counter[10];
int TIMER_CYCLE = 10;

void setTimer(int index, int counter){
	timer_flag[index] = 0;
	timer_counter[index] = counter/TIMER_CYCLE;
}
void timerRun(){
	for(int i = 0; i < 5; i++){
		if (timer_counter[i] > 0){
			timer_counter--;
		}
		if (timer_counter[i] <= 0){
			timer_flag[i] = 1;
		}
	}
}
int isTimerExpired(int index){
	if (timer_flag[index] == 1){
		timer_flag[index] = 0;
		return 1;
	}
	return 0;
}

#endif /* INC_TIMER_H_ */
