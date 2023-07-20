#make file - this is a comment section

CC:=gcc  #compiler
TARGET:=writer #target file name
CROSS_COMPILE:=
default: writer

writer:
	$(CROSS_COMPILE)$(CC) writer.c -o $(TARGET)

clean:
	rm $(TARGET)
	rm -f *.o *~ 
