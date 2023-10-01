package striver;

public class Print1toN {

	public static void main(String[] args) {
		printNum(10);
	}

	private static void printNum(int i) {
		if(i == 0) return;
		
		printNum(--i);
		System.out.println(++i);
		
	}

}
