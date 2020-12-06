bool isPrime(int num) {
  // your code here..asd
  
    if(num <=1)
    {
      return false;
    }

    bool check = true;

    int i = 2;
    
    while(i*i <= num)
    {
        if (num%i == 0)
        {
            check = false;
        }
        
        i += 1;
    }
    
    return check;
}