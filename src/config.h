#ifndef WORMBRAIN_CONFIG_H
#define WORMBRAIN_CONFIG_H

#include <iostream>
#include <random>
#include <vector>
#include "raylib.h"


// Window
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const char* WINDOW_TITLE = "Wormmmm";

// Worm
const int nWORM_SEGMENTS = 1000;
const int WORM_SEGMENT_RADIUS = 1;
const int WORM_SEGMENT_OFFSET = 1.5*WORM_SEGMENT_RADIUS;
//const int WORM_SEGMENT_OFFSET = 10;

#endif //WORMBRAIN_CONFIG_H
