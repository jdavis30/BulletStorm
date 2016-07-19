/*
 * BulletStorm
 * Author: Jasper Davis
 * File: Entity.h
 * Date: 5/18/2016
 * Objective:   Base class for objects within BulletStorm game.
 */

using namespace std;

#ifndef ENTITY_H
#define ENTITY_H

class Entity {
	public:
		Entity(int xi = 0, int yi = 0);
		int getx();
		void setx(int xi = 10);
		int gety();
		void sety(int yi = 10);
		int x;
		int y;
};


#endif /*ENTITY_H*/
