class Solution {
public:
    void merge(vector<int>left_array, vector<int>right_array, vector<int>& v ){
		int i=0, l=0,r=0 ; 
		while(l<left_array.size()&& r<right_array.size()){
			if(left_array[l]<=right_array[r]){ // we used '<=' to make the sorting stable* 
				v[i]= left_array[l];
				i++;
				l++;
			}
			else{
				v[i]=right_array[r];
				i++;
				r++;
			}
		}
		while(l<left_array.size()){
			v[i]= left_array[l];
			i++;
			l++;
		}
		while(r<right_array.size()){
			v[i]=right_array[r];
			i++;
			r++;
		}
	}
	void merge_sort(vector<int> & v){
		if (v.size()<=1) return; // vectors can have one or zero element 
		vector<int> left_array, right_array; 
		for (int i = 0; i<v.size()/2;i++){
			left_array.push_back(v[i]);
		}
		for (int i = v.size()/2; i<v.size();i++){
			right_array.push_back(v[i]);
		}
		merge_sort(left_array);
		merge_sort(right_array);
		merge(left_array,right_array,v);
	}
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums);
        return nums;
        
    }
};