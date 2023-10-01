package Kunal;

public class PrintHelloWorldNTimes {

	public static void main(String[] args) {
		printNTimes(5);		

	}

	private static void printNTimes(int i) {
		
		if(i==0) return;
		
//		printNTimes(i-1);
		System.out.println("Hello!!!"+ i);
		printNTimes(i-1);
		
	}

}
