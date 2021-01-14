#include<simplecpp>
main_program {
turtleSim();
int nsides;
cout<<"Enter the How many side: "<<endl;
cin>>nsides;

repeat(nsides) {
forward(100);
right(360.0/nsides);

}
wait(10);
}
