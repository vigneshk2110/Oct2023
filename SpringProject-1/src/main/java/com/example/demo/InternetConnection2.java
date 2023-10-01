package com.example.demo;

import org.springframework.stereotype.Component;

@Component("abc")
public class InternetConnection2 implements InternetModem{
	
	private String networkName;
	private int netSpeed;
	
	public String getNetworkName() {
		return networkName;
	}
	public void setNetworkName(String networkName) {
		this.networkName = networkName;
	}
	public int getNetSpeed() {
		return netSpeed;
	}
	public void setNetSpeed(int netSpeed) {
		this.netSpeed = netSpeed;
	}
	
	public void switchOn() {
		System.out.println(" via modem2");
	}

}
