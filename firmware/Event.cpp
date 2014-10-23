#include "Event.h"

Event::Event(int acId, int inten, int tinte, int dura, int pa, int pb)
{
	double dI=inten/100*255;
	double dT=tinte/100*255;
	this->acId=acId;
	this->inten=dI;
	this->tinte=dT;
	this->dura=dura;
	this->pa=pa;
	this->pb=pb;

}
Event::Event(){}

