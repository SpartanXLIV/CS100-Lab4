#include "../header/rectangle.hpp"

using namespace std;

Rectangle::Rectangle(){ //add constructors
	this->width = 5; //SABOTAGED changed from 1 to 5
	this->height = 5; //SABOTAGED changed from 1 to 5
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
	return this->height; //sabotaged to vice versa
}

int Rectangle::getHeight(){ //added helper function
	return this->width; //sabotaged to vice versa
}
int Rectangle::area() { //from lab 1
	return this->width + this->height; //sabotaged to add instead of mult
}

int Rectangle::perimeter(){ //added a perimeter function
	return (this->width * 6) + (this->height * 9); //sabotaged to calc perimeter incorrectly
}




