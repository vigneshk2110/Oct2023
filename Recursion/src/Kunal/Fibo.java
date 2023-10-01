package Kunal;

public class Fibo {

	public static void main(String[] args) {
		System.out.println(fibo(11));

	}

	private static int fibo(int i) {
		
		if(i == 0 || i == 1) {
			return 0;
		}
		
		if(i == 2) {
			return 1;
		}
		
		
		
		return fibo(i-1) + fibo(i-2);
		
		
	}

}
