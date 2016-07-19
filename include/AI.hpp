/*
 * BulletStorm
 * Author: Jasper Davis
 * File: AI.h
 * Date: 5/18/2016
 * Objective:   behaviour script for character objects.
 */

#ifndef AI_H
#define AI_H

template<typename T>
class AI {
public:
  AI();
  virtual void update(double dt, T* const c);
  int getType();
  
private:
  int type;

};

template<typename T>
AI<T>::AI(){
  type = 0;
}
template<typename T>
int AI<T>::getType(){
  return type;
}
template<typename T>
void AI<T>::update(double dt, T* const c) {
  c.setx(c.getx());
}

#endif /*AI_H*/
