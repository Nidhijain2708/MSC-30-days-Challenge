// https://www.codingninjas.com/studio/problems/lower-bound_8165382?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
int lowerBound(vector<int> arr, int n, int x) {
	int s=0,e=n-1,m;
	while(s<=e){
		m=(s+e)/2;
		if(arr[m]==x){
			while(m>=0){
				m--;
				if(arr[m]==x){

				}
				else{
					return m+1;
				}
			}
		}
		else if(arr[m]>x){
			e=m-1;
		}
		else if(arr[m]<x){
			s=m+1;
		}
	}
}
