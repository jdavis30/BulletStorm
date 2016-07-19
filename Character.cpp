/*
 * BulletStorm
 * Author: Jasper Davis
 * File: Character.h
 * Date: 5/18/2016
 * Description:   
 * 		Broad class for all characters in-game, such as players, NPCs, and enemies.
 */

#include "include/Character.h"

Character::Character(int xi, int yi, int typei, AI aitype): Entity(xi, yi){
  type = typei;
  ai = aitype;
}

int Character::getType(){
  return type;
}

void Character::setType(int typei) {
  type = typei;
}

void Character::update(double dt){
  ai.update(dt, this);
}
