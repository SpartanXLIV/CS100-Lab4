#include "../header/rectangle.hpp"

using namespace std;

Rectangle::Rectangle(){ //add constructors
	this->width = 1;
	this->height = 1;
}

Rectangle::Rectangle(int w, int h){ //that accept width and height as parameters
	this->width = w;
	this->height = h;
}

void Rectangle::set_width(int w) { //from lab 1
	this->width = w;
}

void Rectangle::set_height(int h) { //from lab 1
	this->height = h;
}

int Rectangle::getWidth(){  //added helper function
	return this->width;
}

int Rectangle::getHeight(){ //added helper function
	return this->height;
}
int Rectangle::area() { //from lab 1
	return this->width * this->height;
}

int Rectangle::perimeter(){ //added a perimeter function
	return (this->width * 2) + (this->height * 2);
}




