#include <raylib.h>

int main(int argc, char *argv[]) {
    (void)argc;
    (void)argv;

    constexpr int screenWidth = 1280;
    constexpr int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "My raylib game");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(BLACK);
        DrawText("raylib was built with the game", 40, 40, 30, RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}