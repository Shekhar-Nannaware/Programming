function DisplayFactors(iNo)
{
    let iCnt = 0

    console.log("Factors of : ",iNo)

    for(iCnt = 1 ; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            console.log(iCnt)
        }
    }
}

function main()
{
    DisplayFactors(12)
}

main()
