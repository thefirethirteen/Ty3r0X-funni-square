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

#include <SDL3/SDL.h>
#include <SDL3/SDL_pixels.h>
#include <SDL3/SDL_rect.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_stdinc.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define SCREEN_WIDTH  800.0
#define SCREEN_HEIGHT 600.0
/*
#define POS_X         100
#define POS_Y         100
*/

#define COLOR_R 0xFF
#define COLOR_G 0xA5
#define COLOR_B 0x00

#define RECT_SIZE 100

#define COUNTER_BOX_X     10
#define COUNTER_BOX_Y     530
#define COUNTER_TEXT_SIZE 48

extern SDL_Window   *window;
extern SDL_Renderer *main_render;
extern SDL_Texture  *background;
extern SDL_FRect    *rectangle;
extern SDL_Event    *main_event;
extern SDL_Surface  *text_surface;
extern SDL_Texture  *text_texture;
extern TTF_Font     *text_font;
extern SDL_Color    *text_color;
extern SDL_FRect     counter_box;

struct pos {
	int x;
	int y;
};

int init_program (void);
int check_interaction_in_rect (float x_cursor, float y_cursor, const struct SDL_FRect *rect);

#endif
