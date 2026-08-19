import java.util.*;

public class program013
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int Year = 0;                  
                        
        System.out.print("Enter Year Number : ");
        Year = src.nextInt();

        if( (Year % 400 == 0) || ((Year % 4 == 0) && (Year % 100 != 0)) )
        {
            System.out.println("Leap Year " + Year);
        }
        else 
        {
            System.out.println("Not Leap Year " + Year);
        }
        src.close();
    }
}
