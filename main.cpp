#include"raylib.h"

#include"constants.h"

int main(){

   InitWindow(screenWidth,screenHeight,"Window Name");

   SetTargetFPS(60);
   while(!WindowShouldClose()){

      BeginDrawing();
      ClearBackground(WHITE);

      DrawText("This is a template!", 190, 200, 20, LIGHTGRAY);

      EndDrawing();
   }

   CloseWindow();

   return 0;
}