  int reverse(int x) {
        int reversed = 0 ;
        int sign = x > 0 ? 1 : -1 ;
        int Max = 2147483647;
        int Min = -2147483648;
        while(x){
           if((reversed*sign > Max / 10&& abs(x) > 0)||(reversed*sign == Max /10 && abs(x) > Max % 10 ))
             return 0;
           if((reversed*sign < Min/10 && abs(x) > 0 ) || (reversed*sign == Min /10 && abs(x)> Min % 10))
           return 0 ;
        reversed = reversed*10 + x % 10 ;
        x /= 10 ; 
        }
        return  reversed  ;
    }
