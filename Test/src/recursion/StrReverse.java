package recursion;

public class StrReverse {

	public static void main(String[] args) {
		
		System.out.println(strReverse("Hello"));

	}

	private static String strReverse(String string) {
		
		
		if(string.length()==0) {
			 return "";
		}
		
		return strReverse(string.substring(0, string.length()-1)) +
				strReverse(string.substring(0, string.length())).charAt(0);
						
		
		
		
		
		
		
		 
				
	}

}
