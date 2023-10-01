package com.example.demo;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

@Component
@Scope("prototype")
//@Scope("singleton")
public class Ofc {
	
	public Ofc() {
		System.out.println("Ofc Obj Created");
	}
	
	private String ofcName;
	private int ofcNum;
	
	
	@Autowired
	@Qualifier("def")
	private Internet ic;
	
	public String getOfcName() {
		return ofcName;
	}
	public void setOfcName(String ofcName) {
		this.ofcName = ofcName;
	}
	
	public int getOfcNum() {
		return ofcNum;
	}
	public void setOfcNum(int ofcNum) {
		this.ofcNum = ofcNum;
	}
	
	public void connect() {
		ic.switchOn();
		System.out.println(""
				+ ""
				+ ""
				+ "Connecting to Internet");
	}
	
}
