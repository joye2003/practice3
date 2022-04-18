#include <iostream>
using namespace std;
class Sample {
public:
    Sample(void) {
        cout << "I am a Sample." << endl;
    }
    ~Sample(){
        cout << "\"The sample is deleted.\"";
    }
};
int main( ) {
    Sample s1;
    return 0;
}