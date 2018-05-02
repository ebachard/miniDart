/*
 * Fichier d'en tête input.hpp pour le projet miniDart
 * Auteur : Eric Bachard  / mardi 4 octobre 2016, 10:40:50 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __INPUT__HPP
#define __INPUT__HPP

#define MICE_BUTTONS_NUMBER  8

#include <SDL2/SDL.h>

class Input
{
  public:
    // CTor
    Input();
    // DTor
    ~Input();
    void updateInputEvents();
    bool bProgramQuit();
    bool bIsCurrentKey(const SDL_Scancode) const;
    bool bIsCurrentMiceButton(const Uint8) const;
    bool bIsMouseMotion() const;
    int getPos_x() const;
    int getPos_y() const;
    int getRelPos_x() const;
    int getRelPos_y() const;
  private:
    SDL_Event mInputEvent;
    bool mbIsInputAKey[SDL_NUM_SCANCODES];
    bool mbIsInputMiceButton[MICE_BUTTONS_NUMBER];

    int  mdPos_x;
    int  mdPos_y;
    int  mdRelPos_x;
    int  mdRelPos_y;
    bool mb_Quit;
};

#endif /* __INPUT__HPP */

