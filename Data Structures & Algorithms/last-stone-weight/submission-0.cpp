class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> stone;
        int l1, l2, val;
        for(int i : stones){
            stone.push(i);
        }
        int c = 0;
        while(stone.size() > 1){
            cout << c << " ";
            c += 1;
            l1 = stone.top();
            stone.pop();
            l2 = stone.top();
            stone.pop();
            val = std::abs(l1 - l2);
            stone.push(val);
        }
        return stone.top();
    }
};
