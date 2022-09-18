
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void listElements(const vector<int> &v);
void addElement(vector<int> &v);
double findAverage(const vector<int> &v);
int findMin(const vector<int> &v);
int findMax(const vector<int> &v);

int main() {
    vector<int> v {};
    char choice;
    
    do {
        cout << "Make a choice (P A M S L Q): ";
        cin >> choice;
        cout << endl;
            choice = toupper(choice);
            
        switch(choice) {
            case 'P':
                listElements(v);
                break;
            case 'A': {
                addElement(v);
                break;
            }
            case 'M': {
                if (v.size() == 0) {
                    cout << "No elements";
                    continue;
                }
                cout << "Mean: " << findAverage(v) << endl;
                break;
            }
            case 'S':
                cout << "Min: " << findMin(v) << endl;
                break;
            case 'L':
                cout << "Max: " << findMax(v) << endl;
                break;
            case 'Q':
                cout << "Goodbye" << endl;
                break;
            default:
                cout << "Wrong command";
        }
        
    } while(toupper(choice) != 'Q');
    
    return 0;
}

void listElements(const vector<int> &v) {
    cout << "Elements: ";
    for (auto el: v)
        cout << el << ' ';
    cout << endl;
}

void addElement(vector<int> &v) {
    int newNumber {0};
    cout << "Insert a number: ";
    cin >> newNumber;
    v.push_back(newNumber);
}

double findAverage(const vector<int> &v) {
    double sum {0.0};
    for(int value: v) {
        sum+=value;
    }
    double mean = sum/v.size();
    return mean;
}

int findMin(const vector<int> &v) {
    return *std::min_element(v.begin(), v.end());
}

int findMax(const vector<int> &v) {
    return *std::max_element(v.begin(), v.end());
}
