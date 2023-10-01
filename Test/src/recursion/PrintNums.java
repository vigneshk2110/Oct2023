package recursion;

public class PrintNums {

	public static void countDown(int number){
		if (number == 0) {
			System.out.println(number);
		} else {
			
			countDown(number - 1);
			System.out.println(number);
		}
	}
	
	public static void main(String[] args) {
		countDown(5);
	}

}
