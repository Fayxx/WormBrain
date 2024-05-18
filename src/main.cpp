
#include "Worm.h"

int main() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
    int curr_key_pressed;
    Worm W = Worm();
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        W.next();
        W.render();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
