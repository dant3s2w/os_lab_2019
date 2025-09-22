CC=gcc
CFLAGS=-I.

new :  parallel_min_max_2 zombie process_memory parallel_sum


parallel_min_max_upd : parallel_min_max_upd.c utils.o find_min_max.o utils.h find_min_max.h

    $(CC) -o parallel_min_max_upd utils.o find_min_max.o parallel_min_max_upd.c $(CFLAGS)

zombie : zombie.c

    $(CC) -o zombie -c zombie.c $(CFLAGS)

process_memory : process_memory.c

    $(CC) -o process_memory -c process_memory.c $(CFLAGS)

parallel_sum: parallel_sum.o sum.o utils_2.o sum.h utils_2.h

    $(CC) -o parallel_sum parallel_sum.o sum.o utils_2.o -lpthread $(CFLAGS)

Sum.o: Sum.c Sum.h

    $(CC) -c Sum.c $(CFLAGS)

parallel_sum.o: parallel_sum.c Sum.h utils.h

    $(CC) -c parallel_sum.c $(CFLAGS)

utils.o : utils.h

    $(CC) -o utils.o -c utils.c $(CFLAGS)

find_min_max.o : utils.h find_min_max.h

    $(CC) -o find_min_max.o -c find_min_max.c $(CFLAGS)


clean :
    rm utils.o find_min_max.o parallel_min_max_upd zombie process_memory parallel_sum.o sum.o parallel_sum
