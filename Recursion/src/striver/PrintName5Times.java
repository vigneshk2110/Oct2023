package striver;

public class PrintName5Times {

	public static void main(String[] args) {
		
//		printName("vignesh", 5);
		
		printName(5);

	}

	private static void printName(int i) {
		
		if(i==0) {
			return;
		}
		
		System.out.println("vignesh");
		printName(--i);
		
		
	}

	private static void printName(String string, int i) {
		if(i==0) {
			return;
		}
		
		System.out.println(string);
		printName(string, --i);
		
	}

}
