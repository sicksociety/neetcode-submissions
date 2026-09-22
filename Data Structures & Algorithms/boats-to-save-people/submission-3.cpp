class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int sol=0;
        for (int i=0;i<people.size();i++){
            if (people[i] == limit){
                people.erase(people.begin()+i);
                sol++;
            }
        }
        int l=0;
        int r=people.size()-1;
        sort(people.begin(),people.end());
        while (r>l){
            if (people[l]+people[r]<=limit){
                people.erase(people.begin()+r);
                people.erase(people.begin()+l);
                l=0;
                r=people.size()-1;
                sol++;
                
            }
            else if(people[l]+people[r]>limit){
                r--;
            } 
            else{
                l++;
            }
        }
        return (sol+people.size());
    }
};