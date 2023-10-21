#pragma once
#include<iostream>
#include"Point2D.h"

using namespace std;

Point2D::Point2D()
{
	cout << "Dziala konstruktor klasy Point2D bez arg.\n";
	this->x = 0.0f; //T1
	this->y = 0.0f;
}

void Point2D::setX(float x) {
	//x = _x;
	this->x = x;
}

void Point2D::setY(float y) {
	//y = _y;
	this->y = y;
}

float Point2D::getX()
{
	return this->x;
}

float Point2D::getY()
{
	return this->y;
}


