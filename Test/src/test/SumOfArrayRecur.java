package test;


public class SumOfArrayRecur {

	public static void main(String[] args) {
		int[] arr= {1,2,3,4,5};
		System.out.println(sum(arr,0,arr.length));
	}
	private static int sum(int[] arr, int n, int l)
	{
		if(n==l-1)
			return arr[n];
		return arr[n]+sum(arr,n+1,l);
	}

}
