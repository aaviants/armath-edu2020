#include "Rectangle.h"

#include <iostream>

Rect::Rect() : 
	left(0),
	top(0),
	right(0),
	bottom(0)
{
}
Rect::Rect(int l, int t, int r, int b):
	left(l),
	top(t),
	right(r),
	bottom(b)
{
}

int Rect::getLeft()
{
	return left;
}
void Rect::setLeft(int value)
{
	left = value;
}
int Rect::getTop()
{
	return top;
}
void Rect::setTop(int value)
{
	top = value;
}
int Rect::getRight()
{
	return right;
}
void Rect::setRight(int value)
{
	right = value;
}
int Rect::getBottom()
{
	return bottom;
}
void Rect::setBottom(int value)
{
	bottom = value;
}
void Rect::setCoordintes(int l, int t, int r, int b)
{
	left = l;
	top = t;
	right = r;
	bottom = b;
}

int Rect::getWidth()
{
	return right - left;
}
void Rect::setWidth(int w)
{
	right = left + w;
}
int Rect::getHeight()
{
	return bottom - top;
}
void Rect::setHeight(int h)
{
	bottom = top + h;
}

void Rect::print()
{
	std::cout << "l=" << left << ", t=" << top << ", r = " << right << ", b=" << bottom << std::endl;
}
