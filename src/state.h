 /*
 * Abstraction of every state
 */
#pragma once

#include "position_A.h"
#include "position_B.h"
#include "position_C.h"
#include "position_D.h"
#include "position_E.h"

class States
{
     public:
	/* constructor */
	States();
	/* move up from current position */
	virtual void up() = 0;
        /* move down from current position */
	virtual void down() = 0;
        /* move right from current position */
	virtual void right() = 0;
        /* move left from current position */
	virtual void left() = 0;
	/* current position */
	virtual void currentPosition();
}

