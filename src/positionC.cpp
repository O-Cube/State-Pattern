/*
* PositionC.cpp
*/
#include <iostream>
#include "positionC.h"
#include "positionA.h"
#include "positionB.h"
#include "positionE.h"
#include "positionD.h"
#include "position.h"
#include "direction.h"

class PositionC;


/* constructor */
PositionC::PositionC()
{

}
/* private function:-initializes direction_ */
void PositionC::setDirection(Direction *dir)
{
	if (dir != nullptr) {
		delete direction_;
		direction_ = dir;
	}
}
/* move to point E */
void PositionC::up(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionE());
}
/* move to point D */
void  PositionC::down(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionD());
}
/* remain in same position */
void  PositionC::right(Direction *dir)
{
	
}
/* move to point B */
void  PositionC::left(Direction *dir)
{
	setDirection(dir);
	direction_->changeState(new PositionB());
}
/* display current position */
const char*  PositionC::currentPosition()
{
	return "In Position C!\n";
}
