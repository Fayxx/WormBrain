#include "config.h"
#include "Worm.h"

float get_float(float max_val){
    return (rand()/(float)RAND_MAX) * max_val;
}

Vector2 rotateAroundPoint(const Vector2& point, const Vector2& vector, float angle) {
    float radians = angle * (M_PI / 180.0f);  // Convert angle to radians
    float cosTheta = cos(radians);
    float sinTheta = sin(radians);

    float dx = vector.x - point.x;
    float dy = vector.y - point.y;

    float newX = point.x + (dx * cosTheta - dy * sinTheta);
    float newY = point.y + (dx * sinTheta + dy * cosTheta);

    return {newX, newY};
}

Vector2 extendAndRotate(const Vector2& prev, float angle) {
    // Extend the vector by WORM_SEGMENT_OFFSET
    Vector2 extendedVector = {prev.x + WORM_SEGMENT_OFFSET, prev.y};

    // Rotate the extended vector around the original vector (prev)
    Vector2 rotatedVector = rotateAroundPoint(prev, extendedVector, angle);

    return rotatedVector;
}

int main() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
    std::vector<Vector2> WORM;
    WORM.push_back({WINDOW_WIDTH/2, WINDOW_HEIGHT/2});
    float direction;
    int curr_key_pressed;
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        direction = get_float(360.0);
        if(WORM.size() == nWORM_SEGMENTS){
            WORM.erase(WORM.begin(), WORM.begin()+1);
        }
        WORM.push_back(extendAndRotate(WORM.back(), direction));
        for(Vector2 seg : WORM){
            DrawCircleV(seg, WORM_SEGMENT_RADIUS, WHITE);
        }

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
