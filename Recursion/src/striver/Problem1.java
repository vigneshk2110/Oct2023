package striver;

public class Problem1 {

	public static void main(String[] args) {
		function(1);

	}

	private static void function(int i) {
		
		if(i >= 10) {
			return;
		}		
			System.out.println(i);
			function(++i);
		
	}

}
