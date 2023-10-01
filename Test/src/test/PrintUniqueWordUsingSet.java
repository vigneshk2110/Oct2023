package test;

import java.io.*;
import java.util.*;

public class PrintUniqueWordUsingSet {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		System.out.println("Enter a string : ");
		String str = scanner.nextLine();
		str = str.trim();

		System.out.println("Entered String is : " + str);
		
		//Splitting the set by space separated
		String strArray[] = str.split(" ");
		
		//Declaring the set
//		Set<String> set = new TreeSet<>();
		
		Set<String> set = new LinkedHashSet<>();
		
		//Storing the string from array into set
		for(int i=0;i<strArray.length;i++) {
			set.add(strArray[i]);
		}
		
		//Printing the element using iterator in java
		
		/*Iterator itr = set.iterator();

		while(itr.hasNext()){
			System.out.print(itr.next()+" ");
		}*/
		
		//Printing the set element using lambda expression
		set.forEach(e->{
			System.out.print(e+" ");
		});
	}
}