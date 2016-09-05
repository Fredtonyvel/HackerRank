import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution 
{
	
    public static void main(String[] args) 
    {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);
        
        /* Declare second integer, double, and String variables. */
        int i2;
        double d2;
        String s2;

        /* Read and save an integer, double, and String to your variables.*/
        i2 = scan.nextInt();
        d2 = scan.nextDouble();
        scan.nextLine();	//This is needed to pick up the new line
        s2 = scan.nextLine();

        /* Print the sum of both integer variables on a new line. */
        int sum_int;
        sum_int = i + i2;
        System.out.println(sum_int);

        /* Print the sum of the double variables on a new line. */
        double sum_double;
        sum_double = d + d2;
        System.out.println(sum_double);

        /* Concatenate and print the String variables on a new line; 
        	the 's' variable above should be printed first. */
        String sentence = s + s2;
        System.out.println(sentence);

		scan.close();
    }
}