<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174865103-1d2f9bb6-3cb9-44e9-a78f-063606172523.png"/>
</p>
<h1 align="center">
   Need4Steak
</h1>

---

## Motivation : 

La **Bistromatic** est un projet de début d'année à Epitech, il s'effectue en groupe de trois. Il est le dernier projet d'une série de trois projet dans le but de créer une calculatrice. Il suit le InfinAdd et le Evalexpr.

---

## Description :

Le but de ce projet est donc de créer une calculatrice qui interprête les nombres dans des chaînes de caractères afin de ne pas être limité par le maximum integer et donc de pouvoir faire des calculs infini. De plus il peut-être utilisé avec n'importe quel base, et les opérateurs peuvent être modifié. 

---

## Fonctions Autorisées : 

- read, write, malloc, free, exit

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/bistromatic.git
$ cd bistromatic
$ make
```
Une fois compilé, le binaire se trouvera à la racine du projet, et il vous faudra l'utiliser comme ceci :
```bash
$ echo Calcul | ./calc Base Operateurs Longueur
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174844033-bfef5640-1915-44c3-976e-845a6a91514d.png"/>
</p>
---

## Comment l'utiliser ? : 

La commande echo doit être utilisé en même temps que le binaire du programme séparé par un pipe "|". Le echo en premier avec comme arguments le calcul demandé, puis pour les arguments lors de l'exécution du binaire, l'utilisateur devra fournir la base (ex: "0123456789"), ainsi que les opérateurs (ex: "()+-\*/%") et pour finir la longueur du calcul donner avec le echo.
![image](https://user-images.githubusercontent.com/91092610/174857243-9dcd8ab3-cf45-4ea0-be7c-46704f25741c.png)
![image](https://user-images.githubusercontent.com/91092610/174857570-c836307c-550d-4c50-9b6e-85e4fe0ce0df.png)
