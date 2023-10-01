package ConstructorChaining;

public class ConstructorChaining2 {

	public ConstructorChaining2() {
		System.out.println("hello parent constrcutor");
	}

	public static void main(String[] args) {
		child2 c = new child2();
	}

}

class child1 extends ConstructorChaining2{
	public child1() {
		System.out.println("hello child1 constrcutor");

	}
}

class child2 extends child{
	public child2() {
		System.out.println("hello child 2 constrcutor");

	}
}