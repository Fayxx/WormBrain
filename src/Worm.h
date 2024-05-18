
#ifndef WORMBRAIN_WORM_H
#define WORMBRAIN_WORM_H

#include "config.h"

class Worm {
private:
    std::vector<Vector2> segments;
    float direction{}; // [0;360]
    static float get_float(float max_val);
    static Vector2 rotateAroundPoint(const Vector2 &point, const Vector2 &vector, float angle);
    static Vector2 extendAndRotate(const Vector2 &prev, float angle);
public:
    Worm();
    ~Worm();
    void render();
    void next();

};


#endif //WORMBRAIN_WORM_H
