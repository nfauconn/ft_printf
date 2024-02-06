[![en](https://img.shields.io/badge/lang-en-pink.svg)](https://github.com/nfauconn/ft_printf/blob/master/README.md)
[![fr](https://img.shields.io/badge/lang-fr-purple.svg)](https://github.com/nfauconn/ft_printf/blob/master/README.fr.md)

*Langage de programmation C* • *Structures de données* • *Utilisation des fonctions variadiques* • *Types de données et conversions* • *Structuration et extensibilité du code* • *Optimisation du code* • *Utilisation de la mémoire* • *Pointeurs de fonctions* • *Analyse syntaxique* • *Gestion des erreurs* • *Utilisation de Makefile* • *Flux de travail Git de base*

# ft_printf

Implémentation personnalisée de `printf()`. J'ai choisi d'utiliser un buffer pour stocker la sortie et de l'imprimer seulement une fois à la fin du programme. Cela permet de réduire le nombre d'appels à `write()` et ainsi d'améliorer la performance du programme.

| Clé | Valeur |
| -- | -- |
**Nom du programme** | Une bibliothèque statique `libftprintf.a` à linker avec un main (j'ai inclus un `main.c` pour tester le programme)
**Langage** | C
**Fichiers à rendre** | `Makefile`, `*.h`, `*.c`
**Règles de Makefile** | `$(NAME)`, `all`, `clean`, `fclean`, `re`
**Fonctions externes** | `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`
**Variables globales autorisées** | Aucune

- La commande `ar` crée la bibliothèque.

**Conversions implémentées :**

- `%c` Imprime un seul caractère.
- `%s` Imprime une chaîne de caractères (selon la convention commune du C).
- `%p` L'argument de pointeur `void *` doit être imprimé au format hexadécimal.
- `%d` Imprime un nombre décimal (base 10).
- `%i` Imprime un entier en base 10.
- `%u` Imprime un nombre décimal non signé (base 10).
- `%x` Imprime un nombre en format hexadécimal (base 16) en minuscules.
- `%X` Imprime un nombre en format hexadécimal (base 16) en majuscules.
- `%%` Imprime un signe pourcent.

**Drapeaux implémentés :**
- `<largeur>` Nombre minimum de caractères à imprimer. Si la valeur à imprimer est plus courte que ce nombre, le résultat est complété par des espaces blancs. La valeur n'est pas tronquée même si le résultat est plus grand.
- `.<précision>` La précision spécifie le nombre minimum de chiffres à écrire. Si la valeur à écrire est plus courte que ce nombre, le résultat est complété par des zéros en tête. La valeur n'est pas tronquée même si le résultat est plus grand.
- ` ` (espace) Un espace blanc est laissé avant un nombre positif (ou une chaîne vide) produit par une conversion signée.
- `+` Un signe doit toujours être placé avant un nombre produit par une conversion signée.
- `#` Utilisé avec les conversions `o`, `x`, ou `X`, la valeur est précédée de `0`, `0x`, ou `0X` respectivement pour des valeurs différentes de zéro.
- `0` Remplit le nombre avec des zéros (0) au lieu d'espaces lorsque le remplissage est spécifié (voir sous-spécificateur de largeur).
- `-` Justifie à gauche dans la largeur de champ donnée ; la justification à droite est la valeur par défaut (voir sous-spécificateur de largeur).

## Utilisation

```shell
git clone git@github.com:nfauconn/ft_printf.git
cd ft_printf/Projet
make
```

``` shell
> cc main.c libftprintf.a
> ./a.out
```