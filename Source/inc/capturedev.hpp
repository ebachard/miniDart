/*
 * Fichier d'en tête capturedev.hpp pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:35:03 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __CAPTUREDEV__HPP
#define __CAPTUREDEV__HPP

#include <SDL2/SDL.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>
#include <cstdlib>
#include <list>
#include <queue>

#define FOURCC(a,b,c,d) ( (unsigned short int) (((d)<<24) | ((c)<<16) | ((b)<<8) | (a)) )

//class CaptureDev : public Common
class CaptureDev
{
  public:
    CaptureDev();
    virtual ~CaptureDev();
    bool                Init(int);
    cv::VideoCapture    maVideoCap;
    bool                getIsCaptureOpened();
    void                setCaptureFPS(int);
    void                setDevNumber(int);
    int                 getDevNumber(void);
    double              getCaptureFPS();
    double              getWidth();
    double              getHeight();
    cv::Size            getFrameSize();
    void                initializeFrameSize();
    void                setFrameSize(double, double);
    void                setFourCC(unsigned int);
    void                Update();
    void                Render();
    void                Close();
    bool                bFirstFrameSuccess(void);
    bool                bLostWebcam(void);
  private:
    int                 maDevNumber;
    double              mfWidth;
    double              mfHeight;
    double              mfCaptureFPS;
    cv::Size            maFrameSize;
    //short int           mdStackSize;
    bool                mbIsCaptureOpened;
    long                mdPos_msec;
    long                mdFramePos;
    unsigned short int        mdFourcc;
};

#endif /* __CAPTUREDEV__HPP */

