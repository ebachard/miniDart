/*
 * Fichier d'en tête sdl_utils.hpp pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:19:58 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __SDL_UTILS_H
#define __SDL_UTILS_H

#include "SDL2/SDL.h"
#include <iostream>
#include "helpers.h"

void sdl_application_abort( const char *);

void getInfo(void);

void getTextureInfo( SDL_Texture *);

#endif /* __SDL_UTILS_H */

