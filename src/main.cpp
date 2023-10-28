/*
 *
 */
#include <iostream>

#include "direction.h"
#include "position.h"
#include "positionA.h"
#include "positionB.h"

int main()
{
	PositionB *posB = new PositionB();
	Direction *direction = new Direction(posB);
	std::cout << direction->currentPosition();
	direction->left();
	std::cout << direction->currentPosition();
	direction->up();
	std::cout << direction->currentPosition();
	direction->down();
	std::cout << direction->currentPosition();
	
	return( 0 );
}
 
