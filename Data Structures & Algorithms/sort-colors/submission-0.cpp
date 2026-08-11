class Solution {
public:
    	void swap (int a ,int b , vector<int>& v ){
		int temp=v[a];
		v[a]=v[b];
		v[b]=temp;
	}
	void bubble_sort(vector<int>& v){
		bool swapped ;
		do{ 
			swapped=false;
			for (int i=0;i<v.size()-1;i++){
				int j= i+1;
				if (v[j]<v[i]){
					swapped=true;
					swap(i,j,v);
				}
				
			}	
		}while (swapped);
	}
    void sortColors(vector<int>& nums) {
        bubble_sort(nums);
        
    }
};
;