/*
 * Fichier d'en tête videoreader.cpp pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:35:03 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#include "videoreader.hpp"

#define DEFAULT_FILENAME_SIZE  16
static char defaultFileName[DEFAULT_FILENAME_SIZE] = "./MyVideo01.avi";

VideoReader::VideoReader()
{
    oldVideoFile = defaultFileName;
    currentVideoFile = nullptr;
}

VideoReader::~VideoReader()
{
}

bool VideoReader::initVideo()
{
    cv::VideoCapture maVideoReader(currentVideoFile, cv::CAP_FFMPEG);
    frameWidth  = maVideoReader.get(cv::CAP_PROP_FRAME_WIDTH);
    frameHeight = maVideoReader.get(cv::CAP_PROP_FRAME_HEIGHT);
    frameCount  = maVideoReader.get(cv::CAP_PROP_FRAME_COUNT);
    int firstFrameNumber = 1; // default, but could change bcause of some weird codecs
    this->maxFrame = 1;
    this->frames.empty();
    int pos = firstFrameNumber;
    bool bStop = false;
    cv::Mat f;

    while (bStop == false)
    {
        pos = maVideoReader.get(CV_CAP_PROP_POS_FRAMES);
        maVideoReader >> f;

        if (!f.empty())
        {
            //myFrames[pos] = f;
            this->frames.push_back(f);
            f.release();
        }
        else
            bStop = true;
    }
    f.release();
    this->setMaxFrame(pos);
#ifdef DEBUG
    std::cout << "Opening a video file : "  << std::endl;
    std::cout << "pos =  " << pos << std::endl;
    std::cout << "maxFrame =  " << maxFrame << std::endl;
#endif
    return true;
}

void VideoReader::setFile( char * filename)
{
    this->oldVideoFile = this->currentVideoFile;
    this->currentVideoFile = filename;
    this->resetFrames();
#ifdef DEBUG
    std::cout << "Vidéo chargée : " << currentVideoFile << std::endl;
#endif
}

void VideoReader::resetFrames()
{
    while (!frames.empty())
    {
        this->frames.pop_back();
    }
}


void VideoReader::Close()
{
    this->oldVideoFile = this->currentVideoFile;
    this->currentVideoFile = nullptr;
    this->resetFrames();
    this->maVideoReader.release();
}

int VideoReader::getWidth()
{
    return this->frameWidth;
}

int VideoReader::getHeight()
{
    return this->frameHeight;
}

int VideoReader::getMaxFrame()
{
    return this->maxFrame;
}

bool VideoReader::setMaxFrame(int aFrameNumber)
{
    this->maxFrame = aFrameNumber;
    return true;
}

char * VideoReader::getCurrentVideoFile()
{
    return this->currentVideoFile;
}

char * VideoReader::getOldVideoFile()
{
    return this->oldVideoFile;
}
