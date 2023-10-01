package striver;



public class Problem2 {

	public static void main(String[] args) {
		
		printName("vignesh", 10);

	}

	private static void printName(String string, int i) {
		if(i == 0) return;
		
		System.out.println(string);
		printName(string, --i);
		
	}

}



// Print Name N Times using Recursion