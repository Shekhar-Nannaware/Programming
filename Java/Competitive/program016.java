import java.util.*;

public class program016
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);
        int iNo = 0;   
        int iCount = 0;

        System.out.println("Enter Number : ");
        iNo = src.nextInt();
        
        if(iNo == 0)
        {
            iCount = iCount + 1;
        }
        else
        {
            while (iNo > 0) 
            {
                iCount++;
                iNo = iNo / 10;            
            }
        }
        System.out.println("Number of digits : " + iCount);
      
        src.close();
    }
}

