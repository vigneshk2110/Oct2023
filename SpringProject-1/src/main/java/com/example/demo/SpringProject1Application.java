package com.example.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ConfigurableApplicationContext;

@SpringBootApplication
public class SpringProject1Application {

	public static void main(String[] args) {
		ConfigurableApplicationContext context = 
		SpringApplication.run(SpringProject1Application.class, args);
		
		Office ofc = context.getBean(Office.class);
		ofc.connect();	
		
		Office ofc1 = context.getBean(Office.class);
		ofc1.connect();	
	
	}

}
