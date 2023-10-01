package test;

import java.util.*;

public class LinkedHashSetEg {

	public static void main(String[] args) {
		LinkedHashSet<String> set = new LinkedHashSet<>();

		// Add an element to the set
		set.add("Java");

		// Add a collection of elements to the set
		set.addAll(Arrays.asList("Python", "C++", "JavaScript"));

		// Get the linked iterator
		Iterator<String> iterator = set.iterator();

		// Iterate over the elements of the set
		while (iterator.hasNext()) {
		  System.out.println(iterator.next());
		}

	}

}
