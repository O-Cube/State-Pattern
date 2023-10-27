 /*
 * Position_A.cpp
 */
#include <iostream>
#include "position.h"
#include "direction.h"


	/* constructor */
	PositionA::PositionB() : direction_(nullptr) { }
	/* private function:-initializes direction_ */
	void PositionB::setDirection(Direction *dir) {
		if (dir != nullptr) {
			delete direction_;
			direction_ = dir;
		}
	}
	/* move to point E */
	void PositionB::up(Direction *dir) {
		setDirection(dir);
	    direction_->changeState(new PositionB());
	}
        /* move to point D */
	void  PositionB::down(Direction *dir) {
	      direction_->changeState(new PositionB());
	}
        /* move to position B */
	void  PositionB::right(Direction *dir) {
	     direction_->changeState(new PositionB());
	}
        /* remain in current position */
	void  PositionB::left(Direction *dir) { 
		direction_->changeState(new PositionA());
		}
	/* display current position */
	void  PositionB::currentPosition() {
	     std::cout << "In Position B!" << std::endl;
	}


