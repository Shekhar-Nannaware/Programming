import java.util.*;

public class program015
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);
        int Maraks = 0;   

        System.out.println("Enter Marks : ");
        Maraks = src.nextInt();
        
        if(90 <= Maraks)
        {
            System.out.println("Grade 'A' ");
        }
        else if(75 <= Maraks)
        {
            System.out.println("Grade 'B' ");
        }
        else if(60 <= Maraks)
        {
            System.out.println("Grade 'C' ");
        }
        else if(40 <= Maraks)
        {
            System.out.println("Grade 'D' ");
        }
        else
        {
            System.out.println("Grade Fail ");
        }
      
        src.close();
    }
}