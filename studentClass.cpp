#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
    public:
        Student(){
            
        }
    
        ~Student() {
            
        }
        
        void set_age(const int& age){
            this->age = age;
        }
    
        void set_standard(const int& standard ) {
            this->standard = standard;
        }
    
        void set_first_name(const string& first_name) {
            this->first_name = first_name;
        }
    
        void set_last_name(const string& last_name) {
            this->last_name = last_name;
        }
    
    
        int get_age() const{
            return age;
        }
    
        int get_standard() const {
            return standard;
        }
    
        string get_first_name() const {
            return first_name;
        }
    
        string get_last_name() const {
            return last_name;
        }
    
        string to_string() {
            stringstream result;
            result<<age<<","<<first_name<<","<<last_name<<","<<standard;
            return result.str();
        }
    
    private:
        int age;
        int standard;
        string first_name;
        string last_name;
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
