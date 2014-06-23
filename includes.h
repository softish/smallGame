#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// unix specific
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <signal.h>
#include <sys/wait.h>
#include <pthread.h>
#include <time.h>

// errorchecking
#include <assert.h>
#include <errno.h>

// internet specific
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>

//SDL
#include <SDL/SDL.h>
#include <SDL/SDL_net.h>
#include <SDL/SDL_thread.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

// global attributes
// screen attributes
#define SCREEN_WIDTH 850
#define SCREEN_HEIGHT 650
#define SCREEN_BPP 32
#define SCREEN_TITLE "TITLE_GOES_HERE"

// menu attributes
#define EXIT "EXIT TO DESKTOP"
#define START "START GAME"



