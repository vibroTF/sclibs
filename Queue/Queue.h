#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue
{
public:
	Queue(int MaxSize=500);
	~Queue(void);
	void Enqueue(const int &item);
	int Dequeue(void);
	int ElemNum(void);

protected:
	int *Data;
	const int MAX_NUM;
	int Beginning;
	int End;

	int ElemCount;
};

#endif