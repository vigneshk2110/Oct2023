package com.example.demo;

import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

@Component("abc")
@Scope("prototype")
public class Internet1 implements Internet {
	
	public Internet1() {
		System.out.println("Internet 1 - Obj Created");
	}
	
	

	public void switchOn() {
		System.out.println("Internet 1 Switching on!!!");
		
	}

}
