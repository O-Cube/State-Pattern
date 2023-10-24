/*
 * Abstraction of every state
 */
#pragma once
#include "state.h" 

class Direction
{
    public:
	/* constructor */
	Direction(State *state);
	/* move up from current position */
	void up() = 0;
        /* move down from current position */
	void down() = 0;
        /* move right from current position */
	void right() = 0;
        /* move left from current position */
        void left() = 0;
	/* displays current state */
	void currentPosition();
	/* run */
	void run;
    private:
	State *state;
}

