/*    ----------------------------------------------------------
 *     @@@@@@@  @@@ @@@  @@@@@@   @@@@@@@    @@@@@@@@   @@@  @@@
 *     @@@@@@@  @@@ @@@  @@@@@@@  @@@@@@@@  @@@@@@@@@@  @@@  @@@
 *       @@!    @@! !@@      @@@  @@!  @@@  @@!   @@@@  @@!  !@@
 *       !@!    !@! @!!      @!@  !@!  @!@  !@!  @!@!@  !@!  @!!
 *       @!!     !@!@!   @!@!!@   @!@!!@!   @!@ @! !@!   !@@!@!
 *       !!!      @!!!   !!@!@!   !!@!@!    !@!!!  !!!    @!!!
 *       !!:      !!:        !!:  !!: :!!   !!:!   !!!   !: :!!
 *       :!:      :!:        :!:  :!:  !:!  :!:    !:!  :!:  !:!
 *        ::       ::    :: ::::  ::   :::  ::::::: ::   ::  :::
 *    ----------------------------------------------------------
 *
 *   window.h
 *
 *   Copyright (C) MMXXIII Patrick D. Covaci <ty3r0x@chaox.ro>
 *
 *   The source is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   FITNESS FOR A PARTICULAR PURPOSE.
 *
 */
#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define SCREEN_WIDTH  800.0
#define SCREEN_HEIGHT 600.0
#define POS_X         100
#define POS_Y         100

#define COLOR_R 0xFF
#define COLOR_G 0xA5
#define COLOR_B 0x00

extern SDL_Window   *window;
extern SDL_Renderer *main_render;
extern SDL_Texture  *background;
extern SDL_Rect     *rectangle;
extern SDL_Event    *main_event;

int  init_program (void);
void define_rect (SDL_Rect *rectangle, int pos_x, int pos_y, int width, int height);

#endif
