package striver;

import java.util.Arrays;

public class Fibonaci {
	
	static int [] fibNums = new int[12]; 

	public static void main(String[] args) {
		int n = 11;
		
		fibNums[n] = fibo(n);
		
		System.out.println(fibNums[n]);		
		
		System.out.println(Arrays.toString(fibNums));

	}

	private static int fibo(int i) {
		
		if(i<0) return 0;
		if(i<=2) return 1;
		
		
		if(fibNums[i] != 0 ) return fibNums[i];
		
		System.out.println(i);
		
		
		int last = fibo(i-1);
		fibNums[i-1] = last;
			
		
		int secondLast = fibo(i-2);
		fibNums[i-2] = secondLast;			
				
		
		return last + secondLast;
				
	}

}
