#include "arrowbutton.h"
#include "sgg/graphics.h"
#include "defines.h"
#include <string>

// draw each arrow based on the current page
void arrowbutton::draw() {
	graphics::Brush br;
	br.outline_opacity = 0.f;

	if (page == 1 || page == 2) {
		br.texture = ASSET_PATH + std::string("right_arrow.png");
		graphics::drawRect(16.375f,8.75f,0.7f,0.5f,br);
	}
	if (page == 2 || page == 3) {
		br.texture = ASSET_PATH + std::string("left_arrow.png");
		graphics::drawRect(0.475f, 8.75f, 0.7f, 0.5f, br);
	}
}

// change the page value
void arrowbutton::setPage(int pg) {
	page = pg;
}

// return the current page
int arrowbutton::getPage() {
	return page;
}

// check if the inputs are within the right arrow borders 
bool arrowbutton::next(float x, float y) {
	if (page == 3) {
		return false;
	}
	return distance(x, y, 16.375f, 8.75f) <= 0.7f && distance(x, y, 16.375f, 8.75) <= 0.35;
}

// check if the inputs are within the left arrow borders 
bool arrowbutton::previous(float x, float y) {
	if (page == 1) {
		return false;
	}
	return distance(x, y, 0.475f, 8.75f) <= 0.7f && distance(x, y, 0.475f, 8.75f) <= 0.3f;
}