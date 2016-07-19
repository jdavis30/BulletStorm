/*
 * BulletStorm
 * Author: Jasper Davis
 * File: Character.hpp
 * Date: 5/18/2016
 * Description:   
 * 		Broad class for all characters in-game, such as players, NPCs, and enemies.
 */
#ifndef CHARACTER_H
#define CHARACTER_H
#include "Entity.hpp"
#include <exception>

template<typename T>

class Character: public Entity {
public: 
  Character(T aitype, int xi = 0, int yi = 0, int typei = 0);
  int getType();
  void setType(int typei = 0);
  void update(double dt);
		
private:
  T ai;
  int type;
};

template<typename T>
Character<T>::Character(T aitype, int xi, int yi, int typei): Entity(xi, yi){
  type = typei;
  ai = aitype;
}

template<typename T>
int Character<T>::getType(){
  return type;
}

template<typename T>
void Character<T>::setType(int typei) {
  type = typei;
}

template<typename T>
void Character<T>::update(double dt){
  ai.update(dt, this);
}


#endif /*CHARACTER_H*/
