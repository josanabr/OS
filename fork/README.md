Instrucciones
=============

1. Lea el codigo del programa fork_00.c ¿qué resultado espera?

2. Compile el programa fork_00.c de la siguiente manera
```
 gcc fork_00.c -o fork_00
```
y ejecútelo `./fork_00`.

3. Adicione una linea despues de la sentencia `if ... else ` que imprima por pantalla el mensaje `se termino`. Compile y vuelva a correr. ¿Qué nota?

4. Busque en Internet que propósito tiene la función `getpid()`? De acuerdo a lo encontrado, modifique su programa en C de modo que el padre imprima su pid y el de su hijo, y el hijo imprima únicamente su pid.
 
5. Los procesos no comparten regiones de memoria. Compile y corra los programas `fork_01.c` `fork_01b.c`. ¿Cómo puede lograr que al final el padre imprima el valor de 9?

**Ayuda** Revise el programa `demo.c` y con las herramientas que tiene modifique el programa `fork_01.b` de modo que al final se imprima el valor de 9. De ser necesario revise la descripción de la función `waitpid()` en  http://www.tutorialspoint.com/unix_system_calls/waitpid.htm

6. Desarrolle un programa en C en C que ejecute un hijo y donde se evidencie que es el padre quien termina la ejecución de su hijo
- http://linux.die.net/man/3/sleep
- http://www.tutorialspoint.com/unix_system_calls/kill.htm 
