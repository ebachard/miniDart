/*
 * Fichier d'en tête resetWebcam.h pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:35:03 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __RESET_WEBCAM_HPP
#define __RESET_WEBCAM_HPP

#include <opencv2/opencv.hpp>

int resetWebcam(cv::VideoCapture *, int, const char *, int, int, int, double /* fps */);

#endif /* __RESET_WEBCAM_HPP */