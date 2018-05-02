/*
 * Fichier d'en tête open_file_dialog.h pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:35:03 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef OPEN_FILE_DIALOG_H
#define OPEN_FILE_DIALOG_H

#ifdef NATIVE_BUILD
#include <limits.h> /* PATH_MAX */
#endif

//#ifdef _WIN32
//#include <windows.h> /* MAX_PATH */
//#define PATH_MAX MAX_PATH /* PATH_MAX */
//#endif

int openFileDialog(char *filename);

#endif
