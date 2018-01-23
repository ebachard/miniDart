La version actuellement en test est la **0.6.9**

N.B. : merci de me contacter directement en cas de problème avec les instructions.


**Pour l'installer sous Windows**

**Installation sous Windows 7** ou plus récent :

* télécharger l'archive miniDart_0.7.0_test.exe
* placer cette archive dans un endroit facile d'accès, par exemple sur le bureau ;
* double-cliquer dessus pour lancer l'installeur ;
* suivre les instructions.

**En particulier**

* il est recommandé d'**ajouter un raccourci** sur le bureau pour l'utiliser plus facilement.
* il est recommandé de choisir un répertoire de travail dans lequel on peut enregistrer des documents ( très utile pour l'enregistrement des séquences vidéos)
* SEUL l'enregistrement en 1280 x 720 fonctionne actuellement.

**Installation sous Linux Intel**  (64 bits seulement)

- télécharger l'archive miniDart_0.6.9_Linux_x86_64.tar.gz
- une fois téléchargée, décompresser l'archive dans un répertoire dans lequel vous avez le droit d'écrire.
- l'arborescence tient compte des dépendances, et si vous la modifiez, cela ne fonctionnera pas.
- pour tester, il y a deux possibilités :

**Soit SANS droits administrateur** :
- se placer dans le répertoire qui contient les binaires miniDart et miniDart_s
- taper la commande :  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. ./miniDart

=> l'application devrait se lancer (il faut la webcam branchée sous Linux, contrairement à Windows)

**Soit AVEC droits administrateur**

Si la méthode ci-dessus ne fonctionne pas, il faudra tester sur une machine où vous avez les droits administrateur (avec sudo):

- créer un répertoire miniDart dans /usr/local/lib (il faut les droits administrateurs)
Exemple : sudo mkdir -p /usr/local/lib/miniDart + copier toutes les bibliothèques dans ce répertoire
- modifier le fichier /etc/ld.so.conf en ajoutant la ligne  /usr/local/lib/miniDart
sudo nano /etc/ld.so.conf    (CTRL+O suivi de CTRL+X pour valider puis sortir)
sudo ldconfig

=> ensuite, dans le répertoire où vous avez décompressé l'archive, il suffit de taper dans un terminal, la ligne de commande :

**./miniDart**

N.B.: il faut que la webcam (C920 fortement suggérée) sois BRANCHÉE AVANT DE LANCER miniDart (sous Linux)



**Bugs connus**

ENREGISTREMENT : 1280 x 720 à 30 images par secondes est le SEUL FORMAT QUI DEVRAIT FONCTIONNER.

=> Je n'ai pas assez de retour pour en conseiller d'autres pour l'instant.

Le numéro des joueurs ne FONCTIONNE PAS CORRECTEMENT (le même numéro est attribué à tous les joueurs). Cela sera corrigé dans la version 0.7 à venir.


Enfin, merci d'avance pour tout retour et n'oubliez pas de tester l'intégrité de l'archive téléchargée 

Have Fun ;-)

Eric Bachard


************************************************************************************************************
                   Somme de contrôle (sha 256)                                   Version

************************************************************************************************************

     725a1b15794209a9516ecb8040a8b3d37018e7d26da52623397f6f67c3ca6263  miniDart_0.7.0_test.exe

************************************************************************************************************

     f17f6520ad5e229ad907bdbf2231e7ca6b6f9fa483e49e1146015c86e18dc941  miniDart_0.6.9_test.exe

************************************************************************************************************

     7091ea9e20fba68002fadd1ee540429739b30d71f5d6f3ec0044926497a4979d  miniDart_0.6.8_test.exe

************************************************************************************************************

     34ed08e64c8dbfdd8626893aba405b19e4e5e289063ffa4cc460452d95301601  miniDart_0.6.9_Linux_x86_64.tar.gz

************************************************************************************************************

