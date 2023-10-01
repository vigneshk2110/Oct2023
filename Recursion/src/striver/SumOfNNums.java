package striver;

public class SumOfNNums {

	public static void main(String[] args) {
		
		System.out.println(sumOfNnums(10));
		
		System.out.println(sum(10, 0));

	}

	private static int sum(int i, int sum) {
		
		
		
		if(i == 1) return sum+i;
		
		return sum(i-1,sum+i);
		
		
		
	}

	private static int sumOfNnums(int i) {
		
		if(i == 1) return 1;		
		
		return i + sumOfNnums(i-1);
			
	}

}
