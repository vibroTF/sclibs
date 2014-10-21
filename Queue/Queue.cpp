#include <Arduino.h>
#include "Queue.h"

Queue::Queue(int MaxSize) : MAX_NUM(MaxSize){
	Data = new int[MAX_NUM + 1];
	Beginning = 0;
	End=0;
	ElemCount=0;
}

Queue::~Queue(void){
	delete[] Data;
}

void Queue::Enqueue(const int &Item){
	Data[End++]=Item;
	ElemCount++;
}

int Queue::Dequeue(void){
	int ReturnVal = Data[Beginning++];
	ElemCount--;
	return ReturnVal;
}

int Queue::ElemNum(void){
	return ElemCount;
}