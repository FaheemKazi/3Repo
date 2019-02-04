package arthematicoperations;

import java.util.Scanner;

public class arthematic {
	 
	public static void main(String[] args) {
		  Scanner reader= new Scanner(System.in);
		  System.out.println("Enter two numbers");
		  
		  int firstnum=reader.nextInt();
		  int secondnum=reader.nextInt();
		  
		  
		  System.out.println("Enter an operator:");
		  int result;
		  char operator = reader.next().charAt(0);

		   
		  
	
	switch(operator) {
	case '+':
		result=firstnum+secondnum;
		break;
	case '-':
		result=firstnum-secondnum;
		break;
	case '*':
		result=firstnum*secondnum;
		break;
	default:
		System.out.println("Invalid Operation!!!");
		return;
	
	}
	
	System.out.println("Result is:" +result);
	
		
	}

}
