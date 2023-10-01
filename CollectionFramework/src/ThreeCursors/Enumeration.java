package ThreeCursors;

import java.util.Vector;

public class Enumeration {

	public static void main(String[] args) {

		Vector<Integer> v = new Vector<>();

//		System.out.println(v);

		for (int i = 0; i < v.capacity(); i++) {
			v.addElement(i);			
		}

//		System.out.println(v);

		java.util.Enumeration<Integer> e = v.elements();

		while (e.hasMoreElements()) {
			int i = e.nextElement();	
			if (i%3 == 0) {
				System.out.println(i);
			}
		}
		

		System.out.println(v);

	}

}
