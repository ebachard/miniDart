
**Version NON maintenue. Le développement continue sur :  https://framagit.org/ericb/miniDart**


La version actuellement en test est la **0.8.9a**

N.B. : merci de me contacter directement en cas de problème avec les instructions.


**Pour l'installer sous Windows**

**INSTALLATION SOUS WINDOWS 7** ou plus récent :

* télécharger l'archive ici : https://framagit.org/ericb/miniDart/tree/master/testing_version
* placer cette archive dans un endroit facile d'accès, par exemple sur le bureau ;
* double-cliquer dessus pour lancer l'installeur ;
* suivre les instructions.

**En particulier**

* il est recommandé d'**ajouter un raccourci** sur le bureau pour l'utiliser plus facilement.
* il est recommandé de choisir un répertoire de travail dans lequel on peut enregistrer des documents ( très utile pour l'enregistrement des séquences vidéos)
* SEUL l'enregistrement en 1280 x 720 (30 images par seconde) fonctionne actuellement.

**INSTALLATION SOUS LINUX INTEL**  (64 bits seulement)

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

ENREGISTREMENT : 1280 x 720 à 30 images par secondes est le SEUL FORMAT QUI DEVRAIT FONCTIONNER sous Windows.

(et 24 images par seconde sous Linux)

=> Je n'ai pas assez de retour pour en conseiller d'autres pour l'instant.

Le numéro des joueurs ne FONCTIONNE PAS CORRECTEMENT (le même numéro est attribué à tous les joueurs). Cela sera corrigé dans une version prochaine.


Enfin, merci d'avance pour tout retour et n'oubliez pas de tester l'intégrité de l'archive téléchargée 

Have Fun ;-)

Eric Bachard


************************************************************************************************************
                   Somme de contrôle (sha 256)                                   Version

************************************************************************************************************

     34ed08e64c8dbfdd8626893aba405b19e4e5e289063ffa4cc460452d95301601  miniDart_0.6.9_Linux_x86_64.tar.gz

************************************************************************************************************

