 /*
 * Abstraction of every state
 */
#pragma once

class PositionD
{
    public:
	/* constructor */
	PositionD();
	/* move up from current position */
	void up() override;
        /* move down from current position */
	void down() override;
        /* move right from current position */
	void right() override;
        /* move left from current position */
	void left() override;
	/* current position */
	void currentPosition() override;
}

