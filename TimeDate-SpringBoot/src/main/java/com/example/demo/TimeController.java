package com.example.demo;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
public class TimeController {


	@RequestMapping("time")
	//	@ResponseBody     -- To return the String literal of the below method
	public String time() {

		return "time";
	}

}
