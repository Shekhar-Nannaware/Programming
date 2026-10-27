class program63
{   
    public static void main(String A[])
    {
        Iteration iteration = new Iteration();

        iteration.Display();
    }
}

class Iteration
{
    public void Display()
    {
        int iCnt = 0;

        for(iCnt = 6; iCnt <= 6; iCnt--)    // Infinite Loop
        {
            System.out.println("Jay Ganesh...");
        }
    }
}