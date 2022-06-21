<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174865103-1d2f9bb6-3cb9-44e9-a78f-063606172523.png"/>
</p>
<h1 align="center">
   Need4Stek
</h1>

---

## Motivation : 

Le **Need4Stek** est un projet milieu/fin d'année à Epitech et est a effectué en duo. Il conciste a créer un algorithme de voiture afin que celle-ci parcours des pistes en le moins de temps possible, et en se cognant le moins possible au murs.

---

## Description :

Pour ce projet, nous utilisons Coppeliasim, un simulateur de piste sur lesquelles une voiture peut rouler. De plus, nous disposons d'une API qui va nous permettre de faire différente actions avec notre voiture, comme par exemple, conttrôler les roues, avoir accès aux informations donné par le Lidar dont dispose la voiture, ou encore d'autre actions plus simple comme lancer la simulation ou l'arrêter. De plus, nous disposons aussi d'un script qui va pouvoir mettre en relation notre code et le simulateur coppeliasim. Une fois notre code exécuté, celui-ci va enfaite simplement écrire du texte dans le terminal et le script va envoyer toute ses informations au simulateur.

---

## Fonctions Autorisées : 

- Toute la libC
- Toute la librairie Math

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/n4s.git
$ cd n4s
$ make
```
```bash
$ ./pipes
```

---

## Comment l'utiliser ? : 

Avant de lancer le binaire, il vous faudra en premier lieu lancer coppeliasim, puis lancer le script qui va lui même lancer le binaire du code ainsi que l'api et va faire la connexion avec coppeliasim et votre voiture commencera alors à bouger.
