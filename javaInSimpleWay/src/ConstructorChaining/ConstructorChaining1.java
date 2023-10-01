package ConstructorChaining;

public class ConstructorChaining1 {

	public ConstructorChaining1() {
		System.out.println("hello parent constrcutor");
	}

	public static void main(String[] args) {
		child1 c = new child1();
	}

}

class child extends ConstructorChaining1{
	public child() {
		System.out.println("hello child constrcutor");

	}
}


/*
Notable points about constructor in Java


1) Default constructor is added automatically for any class in java

2) If there is any parameterized constructor exist then default constructor is not added automatically.

3) super() call to super class default constructor is the default first statement of any constructor 
     if there is no 'this' or 'super' call explicitely.

4) Both ‘super’ and ‘this’ can never be used for single constructor, any one of them is allowed.

5) ‘super’ and ‘this’ should be the first statement inside a constructor. */
