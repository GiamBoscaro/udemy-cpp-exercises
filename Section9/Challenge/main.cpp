
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v {};
    char choice;
    
    do {
        
        cout << "Make a choice (P A M S L Q): ";
        cin >> choice;
        cout << endl;
        choice = toupper(choice);
        
        switch(choice) {
            case 'P':
                cout << "Elements: ";
                for (auto el: v)
                    cout << el << ' ';
                cout << endl;
                break;
            case 'A': {
                int newNumber;
                cout << "Insert a number: ";
                cin >> newNumber;
                v.push_back(newNumber);
                break;
            }
            case 'M': {
                if (v.size() == 0) {
                    cout << "No elements";
                    continue;
                }
                double sum {0.0};
                for(int value: v) {
                    sum+=value;
                }
                double mean = sum/v.size();
                cout << "Mean: " << mean << endl;
                break;
            }
            case 'S':
                cout << "Min: " << *std::min_element(v.begin(), v.end()) << endl;
                break;
            case 'L':
                cout << "Max: " << *std::max_element(v.begin(), v.end()) << endl;
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
