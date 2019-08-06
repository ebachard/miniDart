![miniDart 0.9.4 WIP](screenshots/miniDart_0.9_dev_Dark_theme_2018_04_26_2_mini.png)

**VERSION EN FRANCAIS** (english version follows)

**Version NON maintenue. Le développement continue sur :  https://framagit.org/ericb/miniDart**

**Pour le téléchargement, cliquer ici : https://framagit.org/ericb/miniDart/blob/master/testing_version/miniDart_0.9.5_test.exe**

# miniDart (0.9.5 pour Windows7+ ou binaire 0.9.3 pour LinuxMint 
**Instructions et informations : https://framagit.org/ericb/miniDart/wikis/home**

#devel : 0.9.5 Windows et Linux, avec multi-viewports inclus -> voir Changelog pour plus d'informations)

Logiciel d'analyse vidéo pour coachs de sports collectifs (handball, ou autre sport)

Ceci est une version de démonstration du logiciel **miniDart**. Elle n'est pas complète, et comporte probablement quelques bugs. Une partie des fonctionnalités est encore manquante, et devrait être implémentée d'ici le printemps 2018.

**IMPORTANT : Cadre de ce projet**

**Un projet de développement handball, est en cours. Le logiciel miniDart sera une des ressources utilisées pour son financement. Le but est de financer un tournoi international de handball pour une équipe féminine jeunes (-13)**

**Ainsi, le logiciel miniDart, lorsqu'il sera complet, sera dans un premier temps vendu (dans les ~50 euros / club). Les sources du logiciel seront mises sous licence GPL (version Linux seulement).**

Deux versions sont disponibles au téléchargement. **L'une pour Windows 7 (64 bits)** ou plus récent, l'autre pour **Linux Intel (64 bits)**. Pour la version Linux, des instructions de compilation sont données dans le répertoire contenant les archives.

La version en téléchargement a besoin de Windows 7 ou plus + pour fonctionner, et vous est fournie avec un installeur. La désinstallation a aussi été testée, et supprime toute trace du logiciel. **Si vous l'installez**, notez que vous utilisez ce logiciel à vos risques et périls, et n'oubliez pas qu'il est impératif de faire des sauvegardes de vos document AVANT de l'utiliser.

Informations techniques:

Ce logiciel est écrit sous Linux, et cross-compilé pour fonctionner sous Windows 64 bits. Les APIs utilisées sont:
* **SDL2** ( http://libsdl.org/) pour le fenêtrage et la remarquable portabilité Linux -> Windows ;
* **OpenGL** (https://www.khronos.org/opengl/) pour le rendu ;
* **Dear ImGui** (https://github.com/ocornut/imgui) pour l'interface utilisateur et les performances graphiques (merci à **Omar Cornut** pour cette UI géniale) ;
* **OpenCV 3.4.0** (https://opencv.org/) : gestion des webcams, traitement des frames, annotations (chronomètre, enregistrement) ;
* **DirectShow** et **DirectX** ( sous Windows) , v4l2 + gstreamer (sous Linux) : acquisition vidéo ;
* **FFMPEG (version 3.4.0 sous Windows, 3.4.1 devel sous Linux)** (http://ffmpeg.org/) ouverture, analyse, export de fichiers vidéos (divx, avi etc) ;
* **mingw-w64** (https://mingw-w64.org/doku.php) cross-compilation de la version Windows ;
* **InnoSetup** (http://www.jrsoftware.org/) pour le packaging Windows ;
* **wine64** (https://www.winehq.org/) pour les tests de la version Windows sous Linux;
* **Native File Dialog** (https://github.com/mlabbe/nativefiledialog), ouverture d'un fichier, sauvegarde, écrit par **Michael Labbe**.
* **Font AweSome** (https://github.com/juliettef/IconFontCppHeaders ) pour les fontes-icones créées par **Juliette Foucaut**.
* (prochainement) **TinyXML2** (https://github.com/leethomason/tinyxml2) pour les tags xml lors de l'analyse et le classement d'une vidéo.
* (en test) **SDL_kitchensink** (https://github.com/katajakasa/SDL_kitchensink) pour le son dans les vidéos (lecture ET enregistrement)

**Auteur du logiciel miniDart : Eric Bachard © 2016-2019**

**ENGLISH VERSION**

#miniDart (current version: 0.9.5 (Windows7+ et binaire for LinuxMint) , devel : 0.9.5 Windows and Linux, including multi-viewports  -> see the Changelog pour further information at https://framagit.org/ericb/miniDart  (devel 0.9.3) )
Video analysis software for team sports coaches (handball, other collective sport)

This is a demo version of the **miniDart** software. It is not complete, and probably has some bugs. Some of the features are still missing, and should be implemented by spring 2018.

**IMPORTANT: Framework for this project**

**A handball development project is underway. The miniDart software will be one of the resources used for its financing. The goal is to fund an international handball tournament for a young women's team (-13)**

**Thus, the software miniDart, when complete, will be sold first. When enough money has been recovered, the sources of the software will be licensed under the LGPL.**

Two versions are available for download. One for **Windows 7 (64 bits) or later**, the other for **Linux Intel (64 bits)** . For the Linux version, instructions are given in the directory containing the archives.

The download version needs Windows 7 or more + to work, and comes with an installer. The uninstallation has also been tested, and removes all traces of the software. If you install it , note that you use this software at your own risk, and remember that it is imperative to make backups of your documents BEFORE using it.

**For download, click here: https://framagit.org/ericb/miniDart/blob/master/testing_version/miniDart_0.9.5_test.exe**

Prerequisites

If the ambient light is sufficient, we can view and record images from a webcam (prefer the recommended models below) at the rate of 30 frames per second in 1270 x 720 (aka 720p). The recording is currently in .avi format with the encoding divx. The sound is not currently managed. The Linux version works similarly, but in 24 frames per second.

Hardware Processors / RAM advised:

* i5 + 4 GB minimum
* i7 + 8GB comfortable :+1:

The installation requires ~ 35 MB of disk space + space for the created video files.

Webcam highly recommended and extensively tested:

- Logitech C920 :+1: (30 frames per second, but requires good light)
- Logitech C922 :+1: (ask for a good light)
- Microsoft Lifecam C3000: sometimes asks to restart once miniDart, (asks for a good light) 

Operating system: tested on Windows 7 and Win 10 64-bit (a 32 bits version forwin7+ is available, but on demand only).

Technical informations:

This software is written on Linux, and cross-compiled to run on 64-bit Windows. The APIs used are:

* **SDL2** ( http://libsdl.org/ ) for windowing and remarkable portability Linux -> Windows;
* **OpenGL** ( https://www.khronos.org/opengl/ ) for rendering;
* **Dear ImGui** ( https://github.com/ocornut/imgui ) for user interface and graphics performance (thanks to **Omar Cornut** for this awesome UI);
* **OpenCV 3.4.0** ( https://opencv.org/ ): management of webcams, processing of frames, annotations (stopwatch, recording);
* **DirectShow** and **DirectX** (on Windows), v4l2 + gstreamer (on Linux): video acquisition;
* **FFMPEG (version 3.4.0 on Windows, 3.4.1 devel on Linux)** ( http://ffmpeg.org/ ) opening, analysis, export of video files (divx, avi etc);
* **mingw-w64** ( https://mingw-w64.org/doku.php ) cross-compilation of the Windows version;
* **InnoSetup** ( http://www.jrsoftware.org/ ) for Windows packaging;
* **wine64** ( https://www.winehq.org/ ) for testing the Windows version on Linux;
* **Native File Dialog** ( https://github.com/mlabbe/nativefiledialog ), open file, save, written by **Michael Labbe** .
* **Font AweSome** ( https://github.com/juliettef/IconFontCppHeaders ) for font-icons created by **Juliette Foucaut** .
* **(coming soon) **TinyXML2** ( https://github.com/leethomason/tinyxml2 ) for xml tags when analyzing and ranking a video.
* **(in test) **SDL_kitchensink** ( https://github.com/katajakasa/SDL_kitchensink ) for sound in videos (reading AND recording) 

Author of miniDart software: Eric Bachard © 2016-2019 
