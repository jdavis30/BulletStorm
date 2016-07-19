IDIR =include
ODIR=obj
LDIR =lib
CC=gcc
CFLAGS=-I$(IDIR)

LIBS=-lm

_DEPS = Entity.h AI.h Character.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = EntityMain.o Entity.o AI.o Character.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

EntityMain: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
