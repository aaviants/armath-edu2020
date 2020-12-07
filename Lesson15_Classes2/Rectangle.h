#pragma once

class Rect
{
private:
	int left;
	int top;
	int right;
	int bottom;

public:
	Rect();
	Rect(int l, int t, int r, int b);

	int getLeft();
	void setLeft(int value);
	int getTop();
	void setTop(int value);
	int getRight();
	void setRight(int value);
	int getBottom();
	void setBottom(int value);
	void setCoordintes(int l, int t, int r, int b);

	int getWidth();
	void setWidth(int w);
	int getHeight();
	void setHeight(int h);

	void print();
};
