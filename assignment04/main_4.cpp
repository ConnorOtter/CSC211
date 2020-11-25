#include <iostream>
#include <vector>
#include <cmath>
struct pos {
    double x;
    double y;
    double distance;
    char label;
    
};
void nearest(std::vector<pos>& points, int k, struct pos test);
void distanceSort(std::vector<pos>& points);
char theOneThatActuallyGivesTheAnswer(std::vector<pos>& points, int k);

int main() {
    
    struct pos point;
    int n, k;
    char answer;
    std::vector<pos> inputs;
    
    std::cin >> n >> k;
    for(int i = 0; i < n + 1; i++) {
        inputs.push_back(pos());
        std::cin >> inputs[i].x >> inputs[i].y >> inputs[i].label;
    }
    
    point.x = inputs[n].x;
    point.y = inputs[n].y;
    inputs.pop_back();
    
    nearest(inputs, n, point);
    answer = theOneThatActuallyGivesTheAnswer(inputs, k);
    
    std::cout << answer << "\n";
    
    return 0;
}

void nearest(std::vector<pos>& points, int n, struct pos test) {
    for (int i = 0; i < n; i++) { 
        points[i].distance = sqrt((points[i].x - test.x) * (points[i].x - test.x) + (points[i].y - test.y) * (points[i].y - test.y));
    }
    distanceSort(points);
}

void distanceSort(std::vector<pos>& points) {
    double smaller, temp;
    char tempLabel;
	for (int i = 0; i < points.size(); i++) {
		smaller = i;
		for (int j = i + 1; j < points.size(); j++) {
			if (points[j].distance < points[smaller].distance) {
				smaller = j;
			}
		}
		temp = points[smaller].distance;
		tempLabel = points[smaller].label;
		points[smaller].distance = points[i].distance;
		points[smaller].label = points[i].label;
		points[i].distance = temp;
		points[i].label = tempLabel;
	}
}

char theOneThatActuallyGivesTheAnswer(std::vector<pos>& points, int k) {
    int freqR = 0, freqB = 0;
    for(int i = 0; i < k; i ++) {
        if(points[i].label == 'R') {
            freqR++;
        } else if(points[i].label == 'B') {
            freqB++;
        }
    }
    if(freqR > freqB) {
        return 'R';
    } else {
        return 'B';
    }
}