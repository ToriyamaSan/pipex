Projet pipex :
- Projet qui consiste a reproduire un pip
  exemple de commande : < infile grep a1 | wc -w > outfile

Definition symboles :
- '<' : redirige le contenu de infile vers la sortie standard
		grep va lire le contenu de infile et trouver toutes les lignes contenant le mot a1

- '|' : symbole pipe qui redirige la sortie standard de la commande precedente(grep a1) vers
		l'entree stantard de la commande suivant(wc -w)

- 'wc -w' : commande qui sert a compter les elements, avec -w, elle compte le nombre de mot
			dans l'exemple ici, elle compte le nombre de mots dans la sortie générée par grep a1, c'est-à-dire dans les lignes contenant a1

- '> outfile' : > redirige la sortie standard de la commande finale(resultat de wc -w) vers un
				fichier outfile, si le fichier outfile n'existe pas, il est cree
				si le fichier existe, son contenu est ecrase par la nouvelle sortie

Exemple :
apple banana
alpha a1 beta
gamma delta a1 epsilon
zeta

- la commande grep cherche les ligne contenant le mot a1, dans ce cas la ligne 2 et 3
- la commande wc -w compte le nombre de mot que contient les lignes 2 et 3
- la sortie standard de la commande finale sera 7 (ligne 2 = 3 mots, ligne 3 = 4 mots)

#include <sys/wait.h> : controle si le programme se termine correcement avec la bonne sortie
#include <sys/types.h> : dans un programme C sert à inclure un fichier qui définit des types spécifiques au système d'exploitation comme 'pid'

R_OK : verifie si le fichier est accessible en lecture (utiliser pour input_file)
F_OK : verifie l existence du fichier (utiliser pour le output_file)
W_OK : verifie si le output_file est en mode ecriture

access : utilisée pour vérifier les permissions d'accès d'un fichier ou d'un répertoire. Elle permet de tester si un fichier ou répertoire existe, et si l'utilisateur a les droits nécessaires pour effectuer certaines opérations sur ce fichier (comme la lecture, l'écriture ou l'exécution)

exit(EXIT_FAILURE)
