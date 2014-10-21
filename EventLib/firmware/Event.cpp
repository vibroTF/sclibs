#include "Event.h"

Event::Event(int acId, int inten, int tinte, int dura, int pa)
{
	double dinten, dtinte;
	this->acId=acId;
	this->inten=dinten/100*256;
	this->tinte=dtinte/100*256;
	this->dura=dura;
	this->pa=pa;

}
