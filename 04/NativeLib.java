public class NativeLib {
    // Load the native library
    static {
        System.loadLibrary("NativeLib");
    }

    // Declare the native print method
    public native void print();
    public native void print2();
    public native int add(int a, int b);
    public native int sub(int a, int b);

}

