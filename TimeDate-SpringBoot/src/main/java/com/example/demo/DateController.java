package com.example.demo;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
public class DateController {
	
	
	@RequestMapping("date")
	public String date() {	
		return "date";		
	}

}
