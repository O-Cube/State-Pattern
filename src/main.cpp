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
	direction->currentPosition();
	direction->left();
	direction->currentPosition();
	
	std::cout << "In main!\n";
	return( 0 );
}
 
