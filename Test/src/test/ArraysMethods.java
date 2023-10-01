package test;

import java.util.*;

public class ArraysMethods {

	public static void main(String[] args) {
		
		String[] array = {"Java", "Python", "C++"};
		String str = Arrays.toString(array);
		System.out.println(str);
		
		
		int[] array1 = {1, 2, 3};
		int[] array2 = {1, 2, 3};
		boolean equals = Arrays.equals(array1, array2);
		System.out.println(equals);

		int[] array3 = {5, 1, 4, 2, 3};
		Arrays.sort(array3);
		
		for (int i : array3) {
			System.out.print(i);
		}
		
		System.out.println();
		
		int[] array4 = {1, 2, 3, 4, 5};
		int index = Arrays.binarySearch(array4, 3);
		System.out.println(index);
		
		// Fill an array with a specified value
		int[] array5 = new int[5];
		Arrays.fill(array5, 1);
		for (int element : array5) {
			System.out.print(element);
		} // Prints 1, 1, 1, 1, 1
		
		System.out.println();
		
		int[] array6 = {1, 2, 3, 4, 5};
		int[] newArray = Arrays.copyOf(array6, 1);
		for (int element : newArray) {
			System.out.print(element);
		} // Prints 1, 2, 3
		
		System.out.println();
		
		int[] array7 = {1, 2, 3, 4, 5};
		int[] newArray2 = Arrays.copyOfRange(array7, 1, 3);
		for (int element : newArray2) {
			System.out.print(element);
		} // Prints 2, 3
		
	}

}
