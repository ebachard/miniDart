/***************/
/* Timer class *
 * @author : Eric Bachard Licence GPL v2
 * @since  : october 2016
 */


#ifndef __TIMER_H_
#define __TIMER_H_

#ifdef _MSVC
#include <SDL.h>
#endif

#ifdef __Linux
#include <SDL2/SDL.h>
#endif

#include <SDL2/SDL_timer.h>


class Timer
{
    public:
        //Ctor
        Timer();
        ~Timer();
        void start();
        void pause();
        void reset();
        unsigned int getActivityTime();
        unsigned int getTimeSinceTimerStarted();
        bool getTimerStarted();
        bool getTimerPaused();
    private:
        unsigned int startTime;
        unsigned int beginPauseTime;
        unsigned int endPauseTime;
        unsigned int pauseTime;
        unsigned int deltaTime;
        unsigned int ellapsedTime;
        bool b_started;
        bool b_paused;
};

#endif /* __TIMER_H */
