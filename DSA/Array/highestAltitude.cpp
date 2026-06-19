// There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. The biker starts his trip on point 0 with altitude equal 0.

// You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i​​​​​​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point.

#include <iostream>
#include <vector>
using namespace std;

int maxAltitude(vector<int> &gain)
{
      int n = gain.size();
      int maxii = 0;
      int sum = 0;

      for (int i = 0; i < n; i++)
      {
            sum += gain[i];

            if (sum > maxii)
            {
                  maxii = sum;
            }
      }

      return maxii;
}

int main()
{
      vector<int> gain = {-5, 1, 5, 0, -7};
      cout << maxAltitude(gain);
      return 0;
}