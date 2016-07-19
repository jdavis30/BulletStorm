/*
 * BulletStorm
 * Author: Jasper Davis
 * File: AI.h
 * Date: 5/18/2016
 * Objective:   behaviour script for character objects.
 */

#ifndef AI_H
#define AI_H

class Character;

class AI {
 public:
  AI();
  virtual void  update(double dt, Character& c);
  int getType();
  
 private:
  int type;

  

};

#endif /*AI_H*/
