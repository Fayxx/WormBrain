#ifndef WORMBRAIN_CONFIG_H
#define WORMBRAIN_CONFIG_H

#include <iostream>
#include <random>
#include <vector>
#include <string>
#include "raylib.h"


// Window
constexpr int WINDOW_WIDTH = 800;
constexpr int WINDOW_HEIGHT = 600;
constexpr const char* WINDOW_TITLE = "Wormmmm";

// Worm
constexpr int nWORM_SEGMENTS = 10;
constexpr int WORM_SEGMENT_RADIUS = 20;
constexpr int WORM_SEGMENT_OFFSET = 1.5*WORM_SEGMENT_RADIUS;
//const int WORM_SEGMENT_OFFSET = 10;

#endif //WORMBRAIN_CONFIG_H
