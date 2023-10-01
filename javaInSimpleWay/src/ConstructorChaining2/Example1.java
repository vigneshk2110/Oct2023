package ConstructorChaining2;


/*
Notable points about constructor in Java


1) Default constructor is added automatically for any class in java

2) If there is any parameterized constructor exist then default constructor is not added automatically.

3) super() call to super class default constructor is the default first statement of any constructor 
     if there is no 'this' or 'super' call explicitly.

4) Both ‘super’ and ‘this’ can never be used for single constructor, any one of them is allowed.

5) ‘super’ and ‘this’ should be the first statement inside a constructor. */



// What if we call subclass constructor explicitly  from the same subclass constructor ?


// Child2() -> super-> child1() -> child1(int) -> super -> Example2 
// -> child1(int) executes -> child1() continues -> child2() continues


public class Example1 {
	   
    public Example1() {
    System.out.println("inside Example2 constructor");
    }
 
    public static void main(String[] args) {
       
        Child2 c = new Child2();
 
    }
 
}

class Child1 extends Example1{
    public Child1() {
        this(8);
        System.out.println("inside Child1 constructor");
    }
   
    public Child1(int x) {
        System.out.println("inside Child1 parameterized "
                + "constructor");
    }
}

class Child2 extends Child1{
    public Child2() {
        System.out.println("inside Child2 constructor");
    }
}