/*4.Refactor the following code so that the user’s phone number in the UserProfile class is private and can only be set or retrieved using 
public methods.<br><br><em><strong>Hint:</strong> Add private access modifier to the phone number and create setPhoneNumber() and 
getPhoneNumber() methods.</em>*/

#include <iostream>
#include <string>

class UserProfile {
private:
    std::string phoneNumber;

public:
    UserProfile(const std::string& phone = "") : phoneNumber(phone) {}

    void setPhoneNumber(const std::string& phone) {
        phoneNumber = phone;
    }

    std::string getPhoneNumber() const {
        return phoneNumber;
    }
};

int main() {
    UserProfile user;
    user.setPhoneNumber("+1234567890");

    std::cout << "Phone Number: " << user.getPhoneNumber() << std::endl;

    return 0;
}