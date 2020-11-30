#pragma once

class Rectangle
{
private:
	int width;
	int height;

public:
	Rectangle()
	{
		std::cout << "Creating a new Rectangle object" << std::endl;

		width = 0;
		height = 0;
	}
	Rectangle(int x, int y)
	{
		std::cout << "Creating a new Rectangle object" << std::endl;

		width = x;
		height = y;
	}

	void setWidth(int x)
	{
		if (x < 0)
		{
			std::cout << "Error, cannot set a negative width" << std::endl;
			return;
		}

		int old_width = width;
		width = x;
		std::cout << "Width has changed from " << old_width << " to " << width << std::endl;
	}
	int getWidth()
	{
		return width;
	}

	void setHeight(int y)
	{
		if (y < 0)
		{
			std::cout << "Error, cannot set a negative height" << std::endl;
			return;
		}

		int old_height = height;
		height = y;
		std::cout << "Height has changed from " << old_height << " to " << height << std::endl;
	}
	int getHeight()
	{
		return height;
	}

	void setSize(int x, int y)
	{
		setWidth(x);
		setHeight(y);
	}

	int area()
	{
		return width * height;
	}
};
