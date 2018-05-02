/*
 * Fichier d'en tête videoreader.hpp pour le projet miniDart
 * Auteur : Eric Bachard  / mercredi 1er novembre 2017, 8:48:17 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __VIDEO_READER_H
#define __VIDEO_READER_H

#include <opencv2/opencv.hpp>
#include <opencv2/videoio.hpp>
#include <iostream>
#include <cstdio>
#include <vector>

#if defined ( __Linux__ )
#define MAX_PATH 512
#include <limits.h>
#endif

#ifdef _WIN32
#include <windows.h>
#ifndef PATH_MAX
#define PATH_MAX MAX_PATH
#endif
#endif

#include "imgui.h"

class VideoReader
{
    public:
        // Ctor
        VideoReader();
        // Dtor
        ~VideoReader();
        bool initVideo();
        cv::VideoCapture maVideoReader;
        void setPos();
        unsigned int getPos();
        int getWidth();
        int getHeight();
        int getMaxFrame();
        bool setMaxFrame(int);
        int getFrameCount();
        void setFile(char *);
        //int prepare();
        void resetFrames();
        void Close();
        bool newVideoLoaded;
        std::vector<cv::Mat > frames;
        char * getCurrentVideoFile();
        char * getOldVideoFile();
    private:
        unsigned int pos;
        char * currentVideoFile;
        char * oldVideoFile;
        int frameCount;
        int frameWidth;
        int frameHeight;
        int maxFrame;
};


#endif  /*__VIDEO_READER_H */
