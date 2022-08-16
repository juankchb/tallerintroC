#*
#Nombre: Juan Camilo Fernandez
#Primer taller c
#Script para automatizar proceso compilacion
#App generar triangulo
#/

GCC=gcc
FLAGS=-ansi -pedantic -Wall

PROGS=triangulo_main

triangulo_main:
	$(GCC) $(FLAGS) $@.c -c
	$(GCC) $(FLAGS) triangulo_lib.c -c
	$(GCC) $(FLAGS) -o $@ triangulo_lib.o $@.o 

clean:
	$(RM) *.o$(PROGRS)

