OBJF= main.o add.o printAll.o removeAll.o search.o print.o modify.o

addr : $(OBJF)
	gcc -o $@ $(OBJF)
.c.o:
	gcc -c $<
clean :
	rm $(OBJF)
