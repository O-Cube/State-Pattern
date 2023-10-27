
 /*
 * Abstraction of every state
 */
#ifndef POSITIONA_H
#define POSITIONA_H

#include "position.h"
#include "direction.h"


class PositionA : public Position {
public:
	/* constructor */
	PositionA();
	/* move up from current position */
	void up(Direction *dir) override;
        /* move down from current position */
	void down(Direction *dir) override;
        /* move right from current position */
	void right(Direction *dir) override;
        /* move left from current position */
	void left(Direction *dir) override;
	/* current position */
	void currentPosition() override;
private:
	/* initializes direction_ */
	void setDirection(Direction *dir);
};

#endif // POSITIONA_H
