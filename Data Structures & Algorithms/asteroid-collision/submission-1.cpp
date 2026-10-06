class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for(int i = 0; i < asteroids.size(); i++) {
            while(!st.empty() && st.back() > 0 && asteroids[i] < 0) {
                if(st.back() + asteroids[i] > 0) {
                    asteroids[i] = 0;
                    break;
                }
                else if(st.back() + asteroids[i] == 0) {
                    st.pop_back();
                    asteroids[i] = 0;
                    break;
                }
                else {
                    st.pop_back();
                }
            }

            if(asteroids[i] != 0) {
                st.push_back(asteroids[i]);
            }
        }

        return st;
    }
};