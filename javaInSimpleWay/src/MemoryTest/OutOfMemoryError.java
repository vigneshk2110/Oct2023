package MemoryTest;

public class OutOfMemoryError {

	public static void main(String[] args) {

		while (true) {
			new OutOfMemoryError();
		}

	}

}
