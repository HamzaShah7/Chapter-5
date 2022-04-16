
float interestAmount(float Amount, float Percentage)
{
    float interestAmount, interest;
    interest = Amount * (Percentage/100.0);
    interestAmount = (interest + Amount);
    return interestAmount;
}
