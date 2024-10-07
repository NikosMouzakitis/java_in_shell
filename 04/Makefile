all:
	javac -h . NativeLib.java Main.java  
	gcc -shared -o libNativeLib.so -fPIC -I"$(JAVA_HOME)/include" -I"$(JAVA_HOME)/include/linux" NativeLib.c customlib.c   #creates a shared library based on the C file.
run:
	java -Djava.library.path=. Main
clean:
	rm NativeLib.class NativeLib.h libNativeLib.so Main.class
