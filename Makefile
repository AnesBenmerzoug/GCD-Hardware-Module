.PHONY: all clean

all:
	(cd structural; make all)
	(cd behavioural; make all)

clean:
	(cd structural; make clean)
	(cd behavioural; make clean)
