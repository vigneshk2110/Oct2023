package com.example.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ConfigurableApplicationContext;

@SpringBootApplication
public class DemoApplication {

	public static void main(String[] args) {
		
		
		
//		Ofc o1 = new Ofc(); // Not Preferred
//		o1.connect(); // Not Preferred
//		
//		new Ofc().connect(); // Not Preferred
		
		ConfigurableApplicationContext context = 
				SpringApplication.run(DemoApplication.class, args);
		Ofc o = context.getBean(Ofc.class);  //This object is called Bean of Spring
		o.connect(); 
		
		Ofc o1 = context.getBean(Ofc.class);
		o1.connect();
		
		

	
	
	}
}
