#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;
    Difference(vector<int>a)
    {
        for(int i=0;i<a.size();i++)
            elements.push_back(a[i]);
        maximumDifference=0;
    }
    int computeDifference(void)
    {
        for(int i=0;i<elements.size()-1;i++)
        {
            for(int j=i+1;j<elements.size();j++)
            {
                int min=elements[i]>elements[j] ? elements[i]-elements[j] : elements[j]-elements[i];
                if(maximumDifference<min)
                    maximumDifference=min;
            }
        }
        return maximumDifference;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
