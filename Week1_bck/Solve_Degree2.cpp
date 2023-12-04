#include<bits/stdc++.h>
using namespace std;
int solve(float a, float b, float c,float &x1, float &x2){
	float delta = b*b - 4*a*c;
	if(delta<0){
		x1=x2=0.0;
		return 0;
	}
	else if(delta==0){
		x1 = x2 = -b/(2*a);
		return 1;
	}
	else{
		delta = sqrt(delta);
		x1 = (-b - delta) / (2*a);
		x2 = (-b + delta) / (2*a);
		return 2;
	}
}
int main(){
	float a,b,c;
	float x1,x2;
	do{
		cin>>a;
		cin>>b;
		cin>>c;
	}
	while(!a);
        int numNo = solve(a,b,c,x1,x2);
	if(numNo ==0 ) {
		cout<<"NO SOLUTION";
	}
	else if(numNo==1){
		printf("%.2f", x1);
	}
	else{
        printf("%.2f %.2f", x1, x2);
	}
}

