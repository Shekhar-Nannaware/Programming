/*
    START 
        Accept number as No
        if No is completely divisible by 2
            then print Even 
        Otherwise
            print Odd          
    STOP

        START 
            Accept Number as No
            Divide No by 2
            If remainder is 0
                then print as Even
            Otherwise
                print as Odd              
        STOP
*/
import java.util.Scanner;

public class Program9
{
    public static void main(String args[])
    {
        int iValue;
        int iRemander;

        Scanner sc = new Scanner(System.in);
       System.out.println("Start");
         
            System.err.println("Enter fequency : ");
            iValue = sc.nextInt();

            iRemander = iValue % 2;

            if(iRemander == 0)
            {
                System.out.println("Number is Even "+iValue);
            }
            else
            {
                System.out.println("Number is Odd "+iValue);
            }
        
       System.out.println("Stop");
    }
}