#include "Line.h"

Line::Line(int x, int y) {
	start = new Point(x, y);
	end = new Point(x+4, 7);
}



Line::~Line() {
	delete start;
	delete end;
}