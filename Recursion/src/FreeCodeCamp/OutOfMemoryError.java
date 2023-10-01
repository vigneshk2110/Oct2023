package FreeCodeCamp;

public class OutOfMemoryError {
	String new1;
	int age;
	String name;
	

//	public static void main(String[] args) {
//        int[] array = new int[Integer.MAX_VALUE];
//    }
	
	public static void main(String[] args) {
		
		while (true) {
			OutOfMemoryError ome = new OutOfMemoryError();
			OutOfMemoryError ome1 = ome;
		}
        
    }
}
