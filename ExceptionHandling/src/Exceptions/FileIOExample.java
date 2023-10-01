package Exceptions;

import java.io.*;
class FileIOExample{  
   public static void main(String args[])   {
	FileInputStream fis = null;
	try{
	fis=new FileInputStream("C:/test.txt");
	}
	catch(FileNotFoundException fnfe){
            System.out.println("File is not " +
			"present at the specified path");
	 }
    
	int charRead=0; 

	try{
	while(( charRead = fis.read() ) != -1) 
	{ 
		System.out.print((char)charRead); 
	} 
	fis.close(); 
}
catch(IOException ioe){
	    System.out.println("I/O exception occurred while reading file: "+ioe);
	 }
   }
}