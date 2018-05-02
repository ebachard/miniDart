/*
 * Fichier surface.cpp pour le projet miniDart
 * Auteur : Eric Bachard  / mardi 20 septembre 2016, 09:38:47 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

// if SDL2 include dir is correctly defined, no need to mention SDL2 in the path
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "surface.hpp"

// TODO : create a class named myFont

SDL_Surface* surfaceFont( std::string sFile,
                            int dSize,
                            std::string sText,
                            SDL_Color aColor)
{
  // Loads the font
  TTF_Font* myFont = TTF_OpenFont(sFile.c_str(), dSize);

  // Writes the sText to the surface
  SDL_Surface* surface_with_text = TTF_RenderText_Blended(myFont, sText.c_str(), aColor);

  // free the font
  TTF_CloseFont(myFont);

  //Returns the surface including the text. Ready for rendering
  return surface_with_text;
}
