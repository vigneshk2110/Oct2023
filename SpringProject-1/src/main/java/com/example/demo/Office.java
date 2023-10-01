package com.example.demo;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

@Component
@Scope("singleton")
//@Scope("prototype")
public class Office {

	private String name;
	private int noOfEmployees;
	
	@Autowired
	@Qualifier("xyz")
	private InternetModem modem;

	public Office() {
		super();
		System.out.println("office obj created");
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getNoOfEmployees() {
		return noOfEmployees;
	}
	public void setNoOfEmployees(int noOfEmployees) {
		this.noOfEmployees = noOfEmployees;
	}

	public void connect() {
		System.out.print("Conneted to Internet in office");
		modem.switchOn();
	}
}
