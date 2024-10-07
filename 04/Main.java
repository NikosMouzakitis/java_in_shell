public class Main {
     public static void main(String[] args) {
	NativeLib nativeLib = new NativeLib();

	int x = 12;
	int y = 14;
	int res;


	res = nativeLib.add(x,y);
	System.out.print("Result is: ");
	System.out.println(res);

	x = 12;
	y = 15;
	res = nativeLib.sub(x,y);
	System.out.print("Result is: ");
	System.out.println(res);


     }
}

