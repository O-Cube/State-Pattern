/*
 * Abstraction of every state
 */
#include "state.h"

class Direction
{
    public:
	/* default start is PositionB */
	Direction::Direction(State *state) : state(new PositionB()) { }
	/* move up from current position */
	void up() {
	     state->up();
	}
        /* move down from current position*/
	void down() {
	     state->down();
	}
        /* move right from current position */
	void right() {
	     state->right();
	}
        /* move left from current position */
        void left() {
	     state->left();
	}
	/* displays current state */
	void currentPosition() {
	     state->currentPosition();
	/* run */
	void run;
    private:
	State *state;
}

