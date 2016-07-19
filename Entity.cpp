/*
 * BulletStorm
 * Author: Jasper Davis
 * File: Entity.h
 * Date: 5/18/2016
 * Objective:   Base class for objects within BulletStorm game.
 */

#include "Entity.h"

using namespace std;

Entity::Entity(int xi, int yi) {
	x = xi;
	y = yi;
}

int Entity::getx() {
	return x;
}

void Entity::setx(int xi) {
	x = xi;
}

int Entity::gety() {
	return y;
}

void Entity::sety(int yi) {
	y = yi;
}