/*
 * BulletStorm
 * Author: Jasper Davis
 * File: Character.h
 * Date: 5/18/2016
 * Description:   
 * 		Broad class for all characters in-game, such as players, NPCs, and enemies.
 */
#ifndef CHARACTER_H
#define CHARACTER_H
#include "Entity.h"
#include "AI.h"
#include <exception>

class IncompatibleTypeException: public std::exception {
  virtual const char* errorInfo() const throw() {
    return "AI and Character are incompatible types";
  }
} itexception;

class Character: public Entity {
 public: 
  Character(int xi = 0, int yi = 0, int typei = 0, AI aitype);
  int getType();
  void setType(int typei = 0);
  void update(double dt);
		
 private:
  AI ai;
  int type;
};

#endif /*CHARACTER_H*/
