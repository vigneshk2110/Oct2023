package test;

import java.io.*;
//import java.util.TreeSet;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Scanner;
import java.util.Set;

public class PrintUniqueWordUsingSet2 {

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
		
		Set<String> set = new HashSet<>();
		
		//Storing the string from array into set
		for(int i=0;i<strArray.length;i++) {
			set.add(strArray[i]);
		}
		
		for(int i=0;i<strArray.length;i++) {
			if(set.contains(strArray[i])) {
				System.out.print(strArray[i] + " ");
				set.remove(strArray[i]);
			}
		}
		
		
		
	}
}