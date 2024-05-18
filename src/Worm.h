
#ifndef WORMBRAIN_WORM_H
#define WORMBRAIN_WORM_H

#include "raylib.h"
#include <vector>

class Worm {
private:
    std::vector<Vector2> segments;

public:
    Worm();
    ~Worm();
};


#endif //WORMBRAIN_WORM_H
