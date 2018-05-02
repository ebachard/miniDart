/*
 * Fichier d'en tête surface.hpp pour le projet miniDart
 * Auteur : Eric Bachard  / mardi 20 septembre 2016, 09:38:47 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __SURFACE_H__
#define __SURFACE_H__

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_pixels.h>
#include <cstdlib>
#include <cstdio>
#include <string>

// sFile : contains the font path  (example : Optimus Princeps, but other should work)
// Windows path : C:\Windows\Fonts
// Linux path : /usr/share/fonts/truetype/${fontname}/${Fontname}.ttf   # take care of the fontcase !!
// dSize : contains the font size, as integer
// sText contains the string to be displayed
// aColor is an SDL_Color as a structure, like described in include/SDL2/SDL_pixels.h
// typedef struct SDL_Color
// {
//    Uint8 r;
//    Uint8 g;
//    Uint8 b;
//    Uint8 a;
// }

SDL_Surface* surfaceFont(std::string sFile,
                                int dSize,
                                std::string sText,
                                SDL_Color aColor);

#endif // __SURFACE_H__

