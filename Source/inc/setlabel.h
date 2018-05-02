/*
 * Fichier d'en tête setlabel.h pour le projet miniDart
 * Auteur : Eric Bachard  / mardi 20 septembre 2016, 22:53:17 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __SETLABEL__H__
#define __SETLABEL__H__

#include <opencv2/opencv.hpp>
#include <cstdio>
#include <iostream>

void setLabel(cv::Mat &, const std::string, const cv::Point &, double, int, int);

std::string intToString(int);

std::string floatToString(double);

#endif /* __SETLABEL__H__ */

// USAGE :
// cv::Mat src = cv::imread(.......);
// setLabel(src,"Ce qui doit etre écrit", cvPoint(10,10));
