package striver;

public class CheckIfPalindrome {

	public static void main(String[] args) {
		
		String word = "MADDAM";
		System.out.println(isPalindrome(word, 0, word.length()-1));
		
		word = "EmADAME";
		System.out.println(isPalindrome(word, 0, word.length()-1));
		
		word = "EMADAME";
		System.out.println(isPalindrome(word, 0, word.length()-1));

	}

	private static boolean isPalindrome(String string, int left, int right) {
		
		if(string.charAt(left) != string.charAt(right)) return false;
		
		if(left>=right) return true;
		
		
		
		return isPalindrome(string, left+1, right-1);
	}

}
