import java.util.*;

public class program017
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        String sNo = "";
        int iNo = 0;
        int iCount = 0;

        System.out.print("Enter Number : ");
        sNo = src.nextLine();

        iNo = Integer.parseInt(sNo);

        if(iNo == 0)
        {
            iCount = sNo.length();
        }
        else
        {
            while(iNo > 0)
            {
                iCount++;
                iNo = iNo / 10;
            }
        }

        System.out.println("Number of digits : " + iCount);

        src.close();
    }
}