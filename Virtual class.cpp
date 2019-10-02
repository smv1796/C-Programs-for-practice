/* Diamond problem- Suppose there are 2 classes 'B' and 'C' which are derived from one parent class 'A' and there is one more class 'D' which
inheriting from 'B' and 'C'. In such a scenario a problem arises that the class 'D' will inherit multiple copies of members
of class 'A' via class 'B' and 'C'.

Solution: This problem can be resolved by making the class 'A' virtual when class 'B' and 'C' are being inherited form it.
/*

#include<iostream>

int main()
