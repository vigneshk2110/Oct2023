package striver;

public class PrintNto1 {

	public static void main(String[] args) {
		printNto1(10);

	}

	private static void printNto1(int i) {
		if(i == 0) return;
		
		System.out.println(i);
		printNto1(--i);
		
	}

}
