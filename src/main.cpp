/*
 * This program uses the Allegro game library to display a blank window.
 *
 * It initializes the display and starts up the main game loop. The
 * game loop only checks for two events: timer (determined by the FPS)
 * and display close (when the user tries to close the window).
 *
 * http://www.damienradtke.org/building-a-mario-clone-with-allegro
 */

#include <ecs/Engine.h>

const float FPS = 60;

int main(int ac, char *av[])
{
    (void)ac, (void)av;

    Engine gameEngine;

    gameEngine.mainLoop();

    return 0;
}
