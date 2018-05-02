/*
 * Fichier d'en tête timer.cpp pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:35:03 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#include "timer.hpp"

/*
startTime = valeur retournée par SDL_GetTicks() au lancement du chrono

ellapsedTime = temps écoulé entre le lancement (startTime) et l'instant présent SDL_GetTicks() 
Cette valeur est le temps affiché par le chrono

tempTime = valeur du temps quand on met en pause

Scénario :

Appui sur start : démarre le chrono
Affichage du temps d'activité (cumulé lorsque le chrono tourne) : getActivityTime()
Affichage du temps total (depuis la mise en route du chrono) : getTimeSinceTimerStarted()
Reset => remet tout à zéro, on peut relancer le chrono

*/

Timer::Timer()
{
    startTime      = 0;
    beginPauseTime = 0;
    endPauseTime   = 0;
    pauseTime      = 0;
    deltaTime      = 0;
    ellapsedTime   = 0;
    b_started  = false;
    b_paused   = true; //false;
}

Timer::~Timer()
{
}

void Timer::start()
{
    if (!b_started)
    {
        startTime = SDL_GetTicks();
        b_started = true;
        b_paused = false;
    }
    else
    {
        b_paused = !b_paused;

        if (b_paused)
        {
            beginPauseTime = SDL_GetTicks() - startTime;
            ellapsedTime = beginPauseTime;

        }
        else
        {
            endPauseTime = SDL_GetTicks() - startTime;
            deltaTime = endPauseTime - beginPauseTime;
            pauseTime += deltaTime;
        }
    }
}

void Timer::pause()
{
    if (b_started)
    {
        b_paused = !b_paused;

        if (b_paused)
        {
            beginPauseTime = SDL_GetTicks() - startTime;
            ellapsedTime = beginPauseTime;

        }
        else
        {
            endPauseTime = SDL_GetTicks() - startTime;
            deltaTime = endPauseTime - beginPauseTime;
            pauseTime += deltaTime;
        }
    }
}

void Timer::reset()
{
    startTime      = 0;
    beginPauseTime = 0;
    endPauseTime   = 0;
    pauseTime      = 0;
    deltaTime      = 0;
    b_started  = false;
    b_paused   = true; // false
}

unsigned int Timer::getActivityTime()
{
    return (getTimeSinceTimerStarted() - pauseTime);
}


unsigned int Timer::getTimeSinceTimerStarted()
{
    if (b_started)
    {
        if (b_paused)
            return ellapsedTime;
        else
            return SDL_GetTicks() - startTime;
    }
    else
        return 0;
}

bool Timer::getTimerStarted()
{
    return b_started;
}

bool Timer::getTimerPaused()
{
    return b_paused;
}
