
#include "Worm.h"

int main() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
    SetTargetFPS(10);
    int curr_key_pressed;
    Worm W = Worm();
    Vector2 food_source = {-100, -100};
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);

        // Worm
        W.next();
        W.render();

        // Food
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            food_source = GetMousePosition();
        }
        DrawCircleV(food_source, FOOD_SOURCE_RADIUS, ORANGE);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
