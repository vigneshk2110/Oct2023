package test;

import java.util.Stack;  
public class StackSearchMethodExample  
{  
	public static void main(String[] args)   
	{  
		Stack<String> stk= new Stack<>();  
		
		System.out.println(stk.isEmpty());
		System.out.println(stk.empty());
		//pushing elements into Stack  
		stk.push("Mac Book");  
		stk.push("HP");  
		stk.push("DELL");  
		stk.push("Asus");  
		System.out.println(stk.isEmpty());
		System.out.println("Stack: " + stk);  
		// Search an element  
		int location = stk.search("Mac Book");  
		System.out.println("Location of Dell: " + location);  
	}  
} 