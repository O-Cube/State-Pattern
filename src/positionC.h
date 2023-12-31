
 /*
 * positionC.h
 */
#ifndef POSITIONC_H
#define POSITIONC_H

#include "position.h"
#include "direction.h"


class PositionC: public Position {
public:
	/* constructor */
	PositionC();
	/* move up from current position */
	void up(Direction *dir) override;
        /* move down from current position */
	void down(Direction *dir) override;
        /* move right from current position */
	void right(Direction *dir) override;
        /* move left from current position */
	void left(Direction *dir) override;
	/* current position */
	const char* currentPosition() override;
private:
	/* sets new direction_ */
	void setDirection(Direction *dir);
};

#endif // POSITIONC_H
