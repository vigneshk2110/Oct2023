package com.example.demo;

import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

@Component("def")
@Scope("prototype")
public class Internet2 implements Internet {
	
	public Internet2() {
		System.out.println("Internet 2 - Obj Created");
	}
	
	

	public void switchOn() {
		System.out.println("Internet 2 Switching on!!!");
		
	}

}
