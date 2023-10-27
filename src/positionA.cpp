 /*
 * Position_A.cpp
 */
#include <iostream>
#include "positionA.h"
#include "position.h"
#include "direction.h"


	/* constructor */
	PositionA::PositionA() : direction_(nullptr) { 
		
	}
	/* private function:-initializes direction_ */
	void PositionA::setDirection(Direction *dir) {
		if (dir != nullptr) {
			delete direction_;
			direction_ = dir;
		}
	}
	/* move to point E */
	void PositionA::up(Direction *dir) {
		setDirection(dir);
	    direction_->changeState(new PositionA());
	}
        /* move to point D */
	void  PositionA::down(Direction *dir) {
	      direction_->changeState(new PositionA());
	}
        /* move to position B */
	void  PositionA::right(Direction *dir) {
	     direction_->changeState(new PositionB());
	}
        /* remain in current position */
	void  PositionA::left(Direction *dir) { }
	/* display current position */
	void  PositionA::currentPosition() {
	     std::cout << "In Position A!" << std::endl;
	}


