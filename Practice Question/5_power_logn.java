class Power {
    int power(int x,int n)
    {
        if(n==0)
        {
            return 1;
        }
        else if(n==1)
        {
            return x;
        }
        else if(n%2==0)
        {
            int half=power(x, n/2);
            return half*half;
        }
        else{
            return x*power(x, n-1);
        }
    }
    public static void main(String[] args) {
        int n=0,x=5;
        int p=new Power().power(x, n);
        System.out.println(p);
    }
}
