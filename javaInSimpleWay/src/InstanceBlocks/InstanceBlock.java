package InstanceBlocks;

public class InstanceBlock {
	
	/*
	SIB – Static Initialization Block
	SIB executes when the class gets loaded 
	and executes only once in entire execution
	*/
	
	static {
        System.out.println("SIB – Static Initialization Block -1");
    }
	
	static {
        System.out.println("SIB – Static Initialization Block-2");
    }
   
	/*
	IIB – Instance Initialization Block
	IIB executes when the constructor is called 
	but before the execution of constructor.
	So it executes as many times as constructor gets executed.
	*/
   
    {
        System.out.println("IIB – Instance Initialization Block -1 ");
    }
    
    {
        System.out.println("IIB – Instance Initialization Block - 2");
    }
   
    public InstanceBlock() {
        System.out.println("Constructor");
    }
 
    public static void main(String[] args) {
       
    	InstanceBlock sib = new InstanceBlock();
    	InstanceBlock sib2 = new InstanceBlock();
    	InstanceBlock sib3 = new InstanceBlock();
    }
 
}