[![en](https://img.shields.io/badge/lang-en-pink.svg)](https://github.com/nfauconn/ft_printf/blob/master/README.md)
[![fr](https://img.shields.io/badge/lang-fr-purple.svg)](https://github.com/nfauconn/ft_printf/blob/master/README.fr.md)

# ft_printf

## 🏁 Objectif 🏁

Recoder `printf()`.

## 🚀 Utilisation 🚀

```shell
git clone git@github.com:nfauconn/ft_printf.git
cd Project
make
```

```shell
> cc main.c libftprintf.a
> ./a.out
```

## 💡 Apprentissage 💡

### 🌐 Langage : C 🌐

- **Compréhension de la fonction `printf()` :** Fonctionnement interne et polyvalence de la célèbre fonction `printf()` en C.

- **Structures de données en C :** Gérer des données complexes de manière plus efficace, conduisant à un code plus organisé et évolutif.

- **Utilisation de fonctions variadiques :** Gérer une fonction avec un nombre variable d'arguments en utilisant `va_start`, `va_arg`, `va_copy`, et `va_end`.

- **Gestion de différents types de données et conversions :** Gérer différents types de données et conversions, comme l'impression de caractères, de chaînes, de pointeurs, et de différents formats de nombres (décimal, entier, non signé, hexadécimal).

### 🔧 Pratiques et outils de développement 🔧

- **Création de Makefile :** Compiler des fichiers source, et générer a partir de ceux-ci une librairie statique.

- **Structuration et extensibilité du code :** Écrire un code bien structuré et extensible, crucial pour la maintenance et l'évolutivité des projets logiciels.

- **Optimisation du code :** J'ai décidé d'utiliser un tampon pour stocker toutes les sorties et d'effectuer une seule opération d'écriture à la fin, au lieu de faire des appels successifs à `write()`. Cela a réduit la surcharge et amélioré la performance de ma fonction `ft_printf`.

- **Utilisation de la mémoire :** Bufferisation, concaténation, allocation de mémoire, réallocation, et libération de la mémoire.

- **Pointeurs de fonction :** Je les ai utilisés en conjonction avec une énumération pour appeler les fonctions de conversion appropriées en fonction du spécificateur de format, rendant le code modulaire et facile à étendre. `pf->fun_ptr[c] = &conv_c;` 

## 📋 Sujet 📋

Projet individuel

### Instructions communes

- **Langage :** Votre projet doit être écrit en C.
- **Norme :** Votre projet doit adhérer à la Norme. Toute erreur de norme entraînera une note de 0, y compris dans les fichiers/fonctions bonus.
- **Fonctionnalité :** Vos fonctions ne doivent pas se terminer de manière inattendue (segmentation fault, bus error, double free, etc.), sauf pour les comportements indéfinis.
- **Gestion de la mémoire :** Tout espace mémoire alloué sur le tas doit être correctement libéré. Les fuites de mémoire ne seront pas tolérées.
- **Makefile :** Si nécessaire, soumettez un Makefile qui compile vos fichiers source vers la sortie requise avec les drapeaux `-Wall`, `-Wextra`, et `-Werror`. Il ne doit pas relier.
- **Soumission :** Soumettez votre travail à votre repo git assigné. Seul le travail dans le repo git sera noté.

### Partie obligatoire

- **Nom du programme :** `libftprintf.a`
- **Fichiers à rendre :** `Makefile`, `*.h`, `*/.h`, `*.c`, `*/.c`
- **Règles Makefile :** `$(NAME)`, `all`, `clean`, `fclean`, `re`
- **Fonctions externes :** `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`
- **Libft autorisée :** Oui
- **Description :** Recoder la fonction `printf()` de la libc. Le prototype de `ft_printf()` est `int ft_printf(const char * ...);`. Votre fonction doit gérer les conversions suivantes : `cspdiuxX%`.

**Exigences :**

- Comparer votre fonction à la `printf()` originale.
- Utiliser la commande `ar` pour créer votre bibliothèque. L'utilisation de la commande `libtool` est interdite.
- Votre `libftprintf.a` doit être créée à la racine de votre repo.

**Conversions à implémenter :**

- `%c` Imprime un seul caractère.
- `%s` Imprime une chaîne (tel que défini par la convention C commune).
- `%p` L'argument pointeur `void *` doit être imprimé en format hexadécimal.
- `%d` Imprime un nombre décimal (base 10).
- `%i` Imprime un entier en base 10.
- `%u` Imprime un nombre décimal non signé (base 10).
- `%x` Imprime un nombre en format hexadécimal (base 16) en minuscules.
- `%X` Imprime un nombre en format hexadécimal (base 16) en majuscules.
- `%%` Imprime un signe pourcent.

## Partie Bonus

Vous n'êtes pas obligé de compléter tous les bonus. Cependant, si vous prévoyez de tenter la partie bonus, envisagez la mise en œuvre de vos fonctionnalités supplémentaires dès le début pour éviter les pièges.

**Liste des bonus :**

- Gérer n'importe quelle combinaison des drapeaux suivants : `' -0.'` et la largeur minimale du champ sous toutes les conversions.
- Gérer tous les drapeaux suivants : `'# +'` (Oui, l'un d'eux est un espace).

**Note :** La partie bonus ne sera évaluée que si la partie obligatoire est PARFAITE, c'est-à-dire que toutes les exigences obligatoires sont entièrement respectées et fonctionnent sans aucun problème.

### Soumission et évaluation par les pairs

Soumettez votre devoir dans votre repo Git comme d'habitude. Assurez-vous que les noms de vos fichiers sont corrects. Après avoir réussi ce devoir, vous pouvez ajouter votre `ft_printf()` à votre `libft` pour une utilisation dans vos futurs projets C. Seul le travail à l'intérieur de votre repo sera évalué.
