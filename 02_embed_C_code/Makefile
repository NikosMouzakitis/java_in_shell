all:
	javac NativeLib.java      #generates the class
	javac -h . NativeLib.java #generates the header file .h
	gcc -shared -o libNativeLib.so -fPIC -I"$(JAVA_HOME)/include" -I"$(JAVA_HOME)/include/linux" NativeLib.c   #creates a shared library based on the C file.
run:
	java -Djava.library.path=. NativeLib
clean:
	rm NativeLib.class NativeLib.h

