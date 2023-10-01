package test;
import java.util.Scanner;

public class Pattern {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n=s.nextInt();
		for(int i=0;i<2*n;i++)
		{
			for(int j=0;j<2*n;j++)
			{
//				if(i==0 || i==2*n-1 || j==0||j==2*n-1)
					System.out.print(n);
//				else {
//					System.out.print(" ");
//				}
			}
			System.out.println();
		}
	}

}
