# SSOO-tarea03
Autor: Brenda Araya Bermudez 
Correo: brenda.arayab@alumnos.uv.cl



Para realizar este trabajo primero se resolvio el problema realizar fibonacci y calcular numeros impares 50 veces tal y como se pide en el enunciado. Para esto se calculo que para calcular el impar se debe de dividir el numero en 2 y si el resto da 0 es par, si no, impar. Para efecto del resultado, termina siendo lo mismo que sumarle 2 a una variable e imprimirla (que sucedera hasta la iteracion numero 50).
Para fibonacci se tienen 3 variables en donde la suma de las primeras 2, es la 3ra, luego la primera es remplazada por la segunda, y la segunda por la tercera, cumpliendo la definicion de Fibonacci sobre su secuencia.

Una vez resuelto el problema matematico, se debio de implementar con la toma de los procesos, en donde se utiliza la funcion fork() para la creacion de proceso hijo. Ya resuelto lo anterior solo queda utilizar las señales para que el codigo no pueda ser interrumpido exceptuando con los llamados de "kill" desde otra terminal.
