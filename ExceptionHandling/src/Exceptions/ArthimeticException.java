package Exceptions;

public class ArthimeticException {

	public static void main(String[] args){
		
		try {
			int k = 5/0;
		}
		catch (Exception e) {
			System.out.println("Exception in try block");
		}	
		
		
		System.out.println(100);

	}

}
