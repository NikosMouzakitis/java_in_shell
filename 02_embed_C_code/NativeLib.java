public class NativeLib {
    // Load the native library
    static {
        System.loadLibrary("NativeLib");
    }

    // Declare the native method
    public native void hello();

    public static void main(String[] args) {
        new NativeLib().hello();
    }
}

