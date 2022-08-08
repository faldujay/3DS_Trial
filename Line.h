#pragma once
#include "point.h"

class Line {

public:
	Line(int x, int y);
	//int calculate_length() const;
	~Line();

private:
	Point* start;
	Point* end;
};