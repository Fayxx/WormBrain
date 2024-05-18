//
// Created by Marlon Käsemann on 18.05.24.
//

#include "Worm.h"

Worm::Worm(){
    segments.push_back({WINDOW_WIDTH/2, WINDOW_HEIGHT/2});
}
Worm::~Worm() = default;

float Worm::get_float(float max_val){
    return (rand()/(float)RAND_MAX) * max_val;
}
Vector2 Worm::rotateAroundPoint(const Vector2& point, const Vector2& vector, float angle) {
    float radians = angle * (M_PI / 180.0f);  // Convert angle to radians
    float cosTheta = cos(radians);
    float sinTheta = sin(radians);

    float dx = vector.x - point.x;
    float dy = vector.y - point.y;

    float newX = point.x + (dx * cosTheta - dy * sinTheta);
    float newY = point.y + (dx * sinTheta + dy * cosTheta);

    return {newX, newY};
}
Vector2 Worm::extendAndRotate(const Vector2& prev, float angle) {
    // Extend the vector by WORM_SEGMENT_OFFSET
    Vector2 extendedVector = {prev.x + WORM_SEGMENT_OFFSET, prev.y};
    // Rotate the extended vector around the original vector (prev)
    Vector2 rotatedVector = rotateAroundPoint(prev, extendedVector, angle);
    return rotatedVector;
}

void Worm::next(){
    direction = get_float(360);
    if(segments.size()==nWORM_SEGMENTS)
        segments.erase(segments.begin(), segments.begin()+1);
    segments.push_back({extendAndRotate(segments.back(), direction)});
}

void Worm::render() {
    for(Vector2 segment : segments){
        DrawCircleV(segment, WORM_SEGMENT_RADIUS, RAYWHITE);
    }
}
