 /*
 * Position_A.cpp
 */
#include <iostream>
#include "direction.h"
#include "position_A.h"

class PositionA
{
    public:
	/* constructor */
	PositionA::PositionA() : State() { };
	/* move to point E */
	void PositionA::up() {
	     state = new PositionE();
	}
        /* move to point D */
	void down() {
	      state = new PositionD();
	}
        /* move to position B */
	void right() {
	      state = new PositionB();
	}
        /* remain in current position */
	void left() { }
	/* display current position */
	void currentPosition() {
	     std::cout << "In Position A!" << std::endl;
	}
}

