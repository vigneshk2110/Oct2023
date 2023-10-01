package Program1;

import java.util.Scanner;

public class Problem1 {

	public static void main(String[] args) {		
		
		System.out.println("Please enter the 'n' Value ");
		
		Scanner sc = new Scanner(System.in);
		
		int nValue = sc.nextInt();
		
		int num1=0,num2=1,sum;
		
		for(int i=1;i<=nValue;i++)
		{
			sum=num1+num2;
			
			for(int j=1;j<=sum;j++)
			{
				System.out.print(sum);
			}
			
			num1=num2;
			num2=sum;
			
			System.out.println();
		}
	}
}
