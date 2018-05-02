/*
 * Fichier d'en tête resetWebcam.cpp pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:35:03 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#include "application.hpp"
#include "resetWebcam.h"
#include "capturedev.hpp"

int resetWebcam(cv::VideoCapture * currentCaptureDev, int source , const char * url, int aDeviceNumber, int aWidth, int aHeight, double fps)
{
    // FIXME : we need to verify the new dapture dev IS available (to avoid crashing) but there is no easy way to check 
    // Last : if no webcam, it will crash on Linux,
    //        no problem on Windows (default background replaces the missing frames)
    currentCaptureDev->release();

    switch (source)
    {
        case VIDEO_FILE:
            // TODO : test on Windows + slow down the speed
            currentCaptureDev->open(url);
          break;

        case IP_WEBCAM:
            // FIXME : does not work (rtp / http / udp)
            //currentCaptureDev->open(url);
            currentCaptureDev->open(url, cv::CAP_FFMPEG);
          break;

        case USB_WEBCAM:
#ifdef NATIVE_BUILD
        currentCaptureDev->open(aDeviceNumber);
#else
        currentCaptureDev->open(aDeviceNumber + cv::CAP_DSHOW);
#endif
          break;

        default:
          break;
    }

    if (!currentCaptureDev->isOpened())
    {
        b_lostWebcam = true;
        return -1;
    }
    else
        b_lostWebcam = false;
#ifndef NATIVE_BUILD
    // works *well* on Windows ONLY (not on Linux ^^ )
    // on Linux, returns: VIDEOIO ERROR: V4L: Property <unknown property string>(16) not supported by device or something close
    currentCaptureDev->set(cv::CAP_PROP_FOURCC, CV_FOURCC('M','J','P','G'));
#endif
    currentCaptureDev->set(cv::CAP_PROP_FRAME_WIDTH, aWidth);
    currentCaptureDev->set(cv::CAP_PROP_FRAME_HEIGHT,aHeight);
#ifdef NATIVE_BUILD
    // *WHAT follows* works only on Linux. Don't ask me why
    currentCaptureDev->set(cv::CAP_PROP_FPS, fps);
#endif
    return 0;
}

