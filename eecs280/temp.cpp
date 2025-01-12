#include <iostream>
#include <vector>
#include <iostream>
#include <set>
#include <string>

using namespace std;

// Exception class for the PlayerStats class
class LevelNotFoundError {};

struct LevelStats {
    string name; // INVARIANT: the level name is unique
    int score; // INVARIANT: must be >= 0
};
class PlayerStats {
    private:
        // Stores earned achievements, represented by a unique string name.
        // Elements are unique and sorted alphabetically as a balanced BST.
        set<string> achievements;
        // Stores stats for all completed levels, in the order in which
        // they are completed (i.e. levels are not sorted by name).
        // INVARIANT: Each element in the vector has a unique level name.
        vector<LevelStats> levels;
    public:
        // MODIFIES: *this
        // EFFECTS: Add achievement to the player's achievement set.
        // If it already exists, this function does nothing.
        void add_achievement(const string& achievement){
            // 添加 achievement 到 set里
            achievements.insert(achievement);
        }

        // EFFECTS: Returns whether this player has earned achievement.
        // Returns false if achievement doesn't exist in the set.
        bool has_achievement(const string& achievement){
            return achievements.find(achievement) != achievements.end();
        }
        // EFFECTS: Searches for the level with the name level_name in the
        // levels vector. If it exists, this function
        // returns the score associated with that level name,
        // otherwise it throws a LevelNotFoundError exception.
        int get_score(const string& level_name) const{
            for(auto level:levels){
                if(level.name == level_name){
                    return level.score;
                }
            }
            throw LevelNotFoundError();
        }
        // EFFECTS: Counts the number of levels this player completed with
        // a score higher than the threshold.
        int count_high_scores(int threshold) const{
            int count = 0;
            for(auto level:levels){
                if(level.score > threshold){
                    count ++;
                }
            }
            return count;
        }
};