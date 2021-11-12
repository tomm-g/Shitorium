//
// Ver 0.2 <3
//
#include <string>
using namespace std;

class Shitter{

    private:
        string name;
        int num_shits;

    public:
        Shitter(string, int); // constructor; input number of shits
        int get_shits(); // returns number of shits
        Shitter update_shits(int); // updates number of shits done by person
        string get_name(); // returns name of shitter

};
