class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mp;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back(pair<int, string>{timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (!mp.count(key)) return "";
        auto& vals = mp[key];
        auto it = upper_bound(vals.begin(), vals.end(), timestamp,
          [](int t, const pair<int, string> p) {
            return t < p.first;
          });

        if (it == vals.begin()) return "";

        return prev(it)->second;
    }
};
