class TimeMap {
private:
    unordered_map<string,map<int,string>> t;

public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        t[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        auto it = t.find(key);
        if (it==t.end()) return "";
        auto& times=it->second;
        auto up = times.upper_bound(timestamp);
        if (up==times.begin()) return "";
        up--;
        return (up->second);
    
    }
};
