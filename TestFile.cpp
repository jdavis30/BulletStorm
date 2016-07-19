/*
 * BulletStorm
 * Author: Jasper Davis
 * File: TestFile.cpp
 * Date: 5/18/2016
 * Description:   
 * 	        Testing file for the Character and AI classes
 */

#include "include/Character.hpp"
#include "include/AI.hpp"
#include <iostream>

int main() {
  Character<AI<Character> > c(AI<Character> ai, int xi = 2, int yi = 3, typei = 2);
    cout << c.getx();
    cout << c.sety();
    return 0;
}
