#include <iostream>

 class Plan{
 public:
    Plan(){}
    std::string getSubscriptionType(){return this->getSubscriptionType();}
 protected:
    std::string SubscriptionType;
};

class Professional : public Plan{
public:
    Professional() : Plan(){
        SubscriptionType = "Professional Plan";
        std::cout << "The user get the Professional Plan \n";
    }
};

class Student : public Plan{
public:
    Student() : Plan(){
        SubscriptionType = "Student Plan";
        std::cout << "The user get the Student Plan \n";
    }
};

class Family : public Plan{
public:
    Family() : Plan(){
        SubscriptionType = "Family Plan";
        std::cout << "The user get the Family Plan \n";
    }
};

class PlanFactory{
public:
    Plan* getPlan(){
        int option = 0;
        std::cout <<"Professional 1\n";
        std::cout <<"Student 2\n";
        std::cout <<"Family 3\n";
        std::cin >> option;

        switch (option) {
            case 1:
                plan = new Professional;
                break;
            case 2:
                plan = new Student;
                break;
            case 3:
                plan = new Family;
                break;
            default:
                plan = nullptr;
                break;
        }
        return plan;
    }
private:
    Plan* plan;
};

int main() {
    PlanFactory planFactory;
    Plan* selectedPlan;

    selectedPlan = planFactory.getPlan();

    if (selectedPlan != nullptr){
        std::cout<< selectedPlan->getSubscriptionType() <<"\n";
    } else{
        std::cout<<"The plan doesn't exist\n";
    }
    return 0;
}

