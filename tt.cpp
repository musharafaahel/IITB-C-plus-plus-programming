#include<simplecpp>
main_program{
    unsigned int n=7589, m=0;
    repeat(5){
        m=10*m+(n%10);
        n=n/10;
    }
}
