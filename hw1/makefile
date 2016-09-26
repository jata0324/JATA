OBJF = main.o  addd.o list.o

hw1 : $(OBJF)
	gcc -o $@ $(OBJF)
.c.o : 
	gcc -c $(CFLAGS) $<

clean :
	rm $(OBJF)

