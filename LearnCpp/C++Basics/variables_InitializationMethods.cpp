// 5 forms of initialization in C++:

# include<iostream>

int main()
{
    // Traditional Methods (not so preferred)
    int a ;         // default initializor (no intialization)
    int b = 5 ;     // copy initialization (initial value after equal sign)
        int c(6) ;  // direct initialization (initialization val in () )

    // Modern Methods (preferred)
    int d{7} ;      // diriect list initialization (initial val in {})
    int e{} ;       // value initialization (empty {})

    // NOTE : there are more but we see them later     
}