#*
#Nombre: Juan Camilo Fernandez
#Script para automatizar proceso compilacion
#Producto entre dosnumeros 
#/

GCC=gcc
FLAGS=-ansi -pedantic -Wall

PROGS=product_main

producto_main:
	$(GCC) $(FLAGS) $@.c -c
	$(GCC) $(FLAGS) pro_lib.c -c
	$(GCC) $(FLAGS) -o $@ pro_lib.o $@.o 

clean:
	$(RM) *.o$(PROGRS)

