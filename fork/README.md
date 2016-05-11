Instrucciones
=============

1. Lea el codigo del programa fork_00.c ¿qué resultado espera?

2. Compile el programa fork_00.c de la siguiente manera
```
 gcc fork_00.c -o fork_00
```
y ejecútelo

3. Adicione una linea despues de la sentencia `if ... else ` que imprima por pantalla el mensaje `se termino`. Compile y vuelva a correr. ¿Qué nota?

4. Busque en Internet que propósito tiene la función `getpid()`? De acuerdo a lo encontrado, modifique su programa en C de modo que el padre imprima su pid y el de su hijo, y el hijo imprima únicamente su pid.

5. Los procesos no comparten regiones de memoria. Compile y corra los programas `fork_01.c` `fork_01b.c`. ¿Qué sugiere para superar este problema?

**Ayuda** Revise el programa `demo.c` y con las herramientas que tiene modifique el programa `fork_01.b` de modo que funcione correctamente . De ser necesario revise el próximo item también :-)

6. Esperando y terminando la ejecucion de un hijo. Investigue acerca de las funciones waitpid() y kill() en los siguientes enlaces
http://www.tutorialspoint.com/unix_system_calls/waitpid.htm
http://www.tutorialspoint.com/unix_system_calls/kill.htm 
