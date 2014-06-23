//
#include "includes.h"

void something(){

}

int main(void)
{
    // start SDL
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
        perror("SDL_init");

    // window properties// create window
    SDL_Surface* screen = SDL_SetVideoMode(800, 600, 32, NULL);
    SDL_WM_SetCaption( SCREEN_TITLE, NULL );


    while(1)
    {


        SDL_Flip(screen);
        SDL_Delay(2000);
    }
    SDL_Delay(2000);
    SDL_Quit();

	return 0;
}
