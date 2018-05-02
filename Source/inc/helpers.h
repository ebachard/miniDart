/*
 * Fichier d'en tête helpers.h pour le projet miniDart
 * Auteur : Eric Bachard  / mardi 20 septembre 2016, 23:42:21 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __HELPERS__H__
#define __HELPERS__H__

#if !defined (GL_CLAMP )
#define GL_CLAMP 0x2900
#endif

#include <GL/gl3w.h>
#include <GL/gl.h>
#include <opencv2/opencv.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_surface.h>

void fill_SDL_Texture(SDL_Texture *, cv::Mat const &);

SDL_Surface * convert_to_SDL_Surface(const cv::Mat &);

SDL_Texture * convert_MatToSDL_Texture(const cv::Mat &, SDL_Window  *);

// Draw::render()
void glFbRender( GLuint, SDL_Window *, cv::Mat const &mat);

GLuint glConvertMatToTexture(cv::Mat const &mat);

#endif /* __HELPERS__H__ */

