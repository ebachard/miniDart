/*
 * Fichier d'en tête open_file_dialog.cpp pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:35:03 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#include "open_file_dialog.h"

#include <string.h>

#if defined( NATIVE_BUILD)
#include <iostream>
#include "nfd.h"
#endif

#ifdef _WIN32
#include "Windows/file_dialog.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#endif

/* Returns 0 on success, 1 on error (or user hit cancel) */
int openFileDialog(char *filename)
{
#ifdef NATIVE_BUILD
    nfdchar_t *outPath = NULL;
    // Filters means extensions (at least on Linux)
    nfdresult_t result = NFD_OpenDialog( "avi,mp4,mpg,ts,MTS,wmv", NULL, &outPath );

    if ( result == NFD_OKAY )
    {
        puts("Success!");
        puts(outPath);
        strcpy(filename, outPath);
        free(outPath);
        return 0;
    }
    else if ( result == NFD_CANCEL )
        puts("User pressed cancel.");
    else
        fprintf(stderr,"Error: %s\n", NFD_GetError() );

    return 1;
#else
    /* Windows File Picker */
    // https://stackoverflow.com/questions/1524356/c-deprecated-conversion-from-string-constant-to-char
    return openFileDialog(filename, (char *)"All\0All\0*.avi\0*.avi\0*.ts\0*.ts\0*.MTS\0*.MTS\0*.mp4\0*.mp4\0*.mpg\0*.mpg\0*.wmv\0*.wmv\0*.*\0");
#endif
}

#ifdef _WIN32
int openFileDialog(char *filename, char *filters) {
    /* open file dialogue */
    char cwd[MAX_PATH];
    GetCurrentDirectory(MAX_PATH, cwd);

    OPENFILENAME aVideo;

    char szFile[MAX_PATH];

    /* open a file name */
    ZeroMemory( &aVideo , sizeof( aVideo));
    aVideo.lStructSize = sizeof ( aVideo );
    aVideo.hwndOwner = NULL  ;
    aVideo.lpstrFile = szFile ;
    aVideo.lpstrFile[0] = '\0';
    aVideo.nMaxFile = sizeof( szFile );
    // Looks like the same filter entry must be entered twice, else, nothing works
    aVideo.lpstrFilter = "All\0*.*\0*.avi\0*.avi\0*.ts\0*.ts\0*.MTS\0*.MTS\0*.mp4\0*.mp4\0*.mpg\0*.mpg\0*.wmv\0*.wmv\0";
    aVideo.nFilterIndex =1;
    aVideo.lpstrFileTitle = NULL ;
    aVideo.nMaxFileTitle = 0 ;
    aVideo.lpstrInitialDir = NULL ;
    aVideo.Flags = OFN_PATHMUSTEXIST|OFN_FILEMUSTEXIST ;

    /* change current working directory back to location of executable */
    SetCurrentDirectory(cwd);

    if (!GetOpenFileName( &aVideo)) {
        /* user hit cancel */
        return 1;
    }

    strcpy(filename, szFile);
    return 0;
}

#endif /* _WIN32 */
