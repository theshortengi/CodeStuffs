 import java.util.Scanner;  
  
  
public class PJT_2  
{  
  public static void main (String [] args)  
  {  
     Scanner input = new Scanner( System.in );  
     double tempCel;  
     double tempFah;  
     double tempFah2;  
     double tempCel2;  
  
     System.out.print ( "Please enter a temperature in Celsius: ");  
     tempCel = input.nextDouble();;  
     tempFah = tempCel * 9/5 + 32;  
     System.out.println ("The Temperature in Fahrenheit is:" + tempFah);  
       
     System.out.print ( "Please enter a Fahrenheit temperature: ");  
     tempFah2 = input.nextDouble();;  
     tempCel2 = (tempFah2 - 32) * 5/9;  
     System.out.println ("The Temperature in Celsius is:" + tempCel2);  
       
   }  
}
