#include <iostream>
#include <string>
#include <Windows.h>    // Only used in optional setFuelType function, safe to leave off if it cause issues for you

/*
    Structures or often simply referred to by their keyword "Struct" are inherited from the C language, but with some improvements:
       - structs in C could only hold data members (variables), in C++ they can hold data members as well as member functions
       - structs in C cannot directly initialize data members, which we can in C++
       - structs in C do not allow for data hiding or the use of access modifiers, while we do have this ability in C++

    By default members of a structure are public, this is important to remember

    Structures in C++ are user defined data types and can contain Data Members and Member Functions

    A variable in a structure or class is often referred to as a Data Member
    A function in a structure or class is often referred to as a Member Function
*/

struct MyStructure

{
    // By default these are all publicly accessible
    int dataMember01;
    float dataMember02;
    double dataMember03;

    void memberFunction01()
    {
        std::cout << "\nVariable 01 is: " << dataMember01;
    }
    void memberFunction02()
    {
        std::cout << "\nVariable 02 is: " << dataMember02;
    }
    void memberFunction03()
    {
        std::cout << "\nVariable 03 is: " << dataMember03;
    }

};

/*
    Classes are identical to structs except for the following exhaustive list of key differences:
       - structs default to public visibility and public inheritance
       - classes default to private visibility and private inheritance

    By default members of a class are private, this is important to remember
    Classes in C++ are user defined data types and can contain Data Members and Member Functions

    A variable in a structure or class is often referred to as a Data Member
    A function in a structure or class is often referred to as a Member Function


    When to use a class versus a struct?

    The best practice guideline is: Use class if the class has an invariant, use struct if the data
    members can vary independently, or put more simply, if your class requires the use of one or more
    private members, use a class, otherwise use a struct.

*/

/*
    class ClassName             // Keyword class,  class name (user defined)
    {
        Access Specifier        // Private (default), public, and protected

        Data Members;           // Variables (local to class) subject to access specifier rules

        Member Functions(){}    // Class Functions to allow access to data members (are also local to class)
                                // and subject to access specifier rules
    };

    A class by itself is just a definition, or specification, of a user-defined data type, no memory is allocated.

    To utilize the members of a class you need to create an object: ClassName ObjectName; at this point memory is allocated for the newly created object.

    You can create multiple objects from the same class. ClassName obj1, obj2, obj3; Each can have their own unique values assigned to data members.

*/

class MyClass
{
public:
    // By default these are all private
    int dataMember01;
    float dataMember02;
    double dataMember03;

    void memberFunction01()
    {
        std::cout << "\nVariable 01 is: " << dataMember01;
    }
    void memberFunction02()
    {
        std::cout << "\nVariable 02 is: " << dataMember02;
    }
    void memberFunction03()
    {
        std::cout << "\nVariable 03 is: " << dataMember03;
    }

};

/*
    Car1 class
    Has 3 Private members that are unable to be directly accessed or changed outside of the class.
    We need to use public functions to work with private variables.
    Known as setters and getters as they are used to 'set' (change) or 'get' (access) private data members.
    Setter and Getter sometimes called mutators and accessors.
*/


class Car1
{
    std::string make_;
    std::string model_;
    unsigned year_;
public:
    std::string getMake(){return make_;}
    std::string getModel(){return model_;}
    unsigned getYear(){return year_;}

    void setMake(std::string m){make_ = m;}
    void setModel(std::string mod){model_ = mod;}
    void setYear(unsigned y){year_ = y;}

    std::string details()
    {
        return std::to_string(year_) + " " +  make_ + " " + model_;
    }
};


/*
    Car2 class
    More practical example showing why we might want to have private members.
    We still need to use public functions to work with private variables.
    Good practice to use const in getter function, and prefix setter and getter with set/get
    While private is default good practice is to include it to make code clearer
*/


class Car2
{
private:
    // Private data members
    std::string VIN_;
    std::string purchaseOrder_;
    unsigned dealerCost_;
    unsigned dealerMarkup_;
    unsigned mfgRebate_;

public:
    //Publicly accessible data members
    std::string make;
    std::string model;
    unsigned mileage;
    unsigned year;
    unsigned retailPrice;



    // Getters
    std::string getVIN() const{return VIN_;}
    std::string getPO() const{return purchaseOrder_;}
    unsigned getWholesale() const{return dealerCost_;}

    // Setters
    void setVIN(std::string v)
    {
        if(v.length() == 17) // Beginning with model year 1981, VINs are exactly 17 characters.
            VIN_ = v;
        else
            std::cout << "Invalid VIN Length" << std::endl;
    }
    void setPO(std::string po){purchaseOrder_ = po;}
    void setWholesale(unsigned c){dealerCost_ = c;}
};

class Car
{
private:
    // Private data members
    std::string VIN_;
    std::string purchaseOrder_;
    std::string fuelType_;
    unsigned wholesale_;
    unsigned year_;
    const static unsigned dealerMarkup_;    // Expressed in whole percentage
    const static unsigned mfgRebate_;
    const static int YEAR_MIN = 2000;
    const static int YEAR_MAX = 2025;
    const static std::string FUEL_TYPES[];

public:
    //Publicly accessible data members
    bool used;
    bool forSale;
    std::string stockNum;
    std::string make;
    std::string model;
    std::string extColor;
    std::string intColor;
    std::string Description;
    unsigned mpgCity;
    unsigned mpgHwy;
    unsigned dtrain;
    unsigned trans;
    unsigned mileage;
    unsigned retailPrice;

    // Getters
    std::string getVIN() const{return VIN_;}
    std::string getPO() const{return purchaseOrder_;}
    std::string getFuel() const{return fuelType_;}
    unsigned getWholesale() const{return wholesale_;}
    unsigned getYear() const{return year_;}
    unsigned getRebate() const{return mfgRebate_;}
    unsigned getMarkup() const{return dealerMarkup_;}

    // getDealerCost is wholesale - rebates + minMarkup (dealer's overhead to break-even)
    unsigned getDealerCost() const
    {
        return (getWholesale() - getRebate()) + getMarkup();
    }

    // getMaxMargin  returns max potential profit based on retail price versus dealer cost
    unsigned getMaxMargin()
    {
        return (retailPrice - getDealerCost());
    }

    // getMinMarkup() minimum markup in dollars to break-even applied to this car.
    // I created this after the video to cleanup our last output statement that I mentioned toward the end..
    unsigned getMinMarkup()
    {
        return (getMarkup() * getWholesale() / 100);
    }

    // Setters
    void setVIN(std::string);
    void setPO(std::string po){purchaseOrder_ = po;}
    void setWholesale(unsigned c){wholesale_ = c;}
    void setYear(unsigned);
    void setFuel(unsigned);
};


// Member function definitions outside of class - Note use of :: Scope Resolution Operator
void Car::setVIN(std::string vin)
{
    if(vin.length() == 17) // Beginning with model year 1981, VINs are exactly 17 characters.
        VIN_ = vin;
    else
        std::cout << "Invalid VIN Length" << std::endl;
}
void Car::setYear(unsigned y)
{
    if (y >= YEAR_MIN && y <= YEAR_MAX)
        year_ = y;
    else
        std::cout << "Invalid Year Format - Must use 1960-2025" << std::endl;
}
void Car::setFuel(unsigned i)
{
    if(i < 6)
        fuelType_ = FUEL_TYPES[i];
    else
        std::cout << "Invalid Fuel ID - Must be 0-5" << std::endl;

}

// We can initialize const values outside of the class as well. Note these are applied to the class not the object, so all objects will have the values applied here
const std::string Car::FUEL_TYPES[] = {"Gasoline", "Ethanol", "Diesel", "Natural Gas", "Propane", "Electric"};
const unsigned Car::dealerMarkup_ = 10; // 10% Minimum dealer profit to cover expenses
const unsigned Car::mfgRebate_ = 2000;  // $2,000 Manufactures rebate to dealers if they sell x number of cars

// Non-Class function that generates a menu of fuel types to select from, returns an integer from user input
unsigned setFuelType()
{
    Car s;

    int id;
    std::cout << "Fuel IDs and Types" << std::endl;
    for (int i = 0; i<6; i++ )
    {
        s.setFuel(i);
        std::cout << i << ": " << s.getFuel() << std::endl;
    }

    std::cout << "\nEnter Fuel ID: " << std::endl;
    std::cin >> id;

    system("cls");          // Optional, requires Windows.h header and simply clears screen before returning to main (safe to remove or comment out)
    return id;
}


int main()
{

    Car c;

    // Publicly accessible, can access normally

    c.make = "Honda";
    c.model = "Accord";
    c.setYear(2019);
    c.retailPrice = 28000;

    // Private info, need to use setters/getters to access or change

    c.setVIN("1HGCV1F31LA000000");
    c.setPO("N34987210");
    c.setWholesale(22000);
    c.setFuel(0);
    // c.setFuel(setFuelType());    // Uncomment to run fuel picker menu

    std::cout << "\nCar info: " << c.getYear() << " " << c.make << " " << c.model << ", Retail: $" << c.retailPrice << ", Fuel Type: " << c.getFuel() << std::endl;
    std::cout << "\nSalesman Info:  Purchase Order#: " << c.getPO() << ", VIN: " << c.getVIN() << ", Dealer Cost: $ " << c.getWholesale() << std::endl;
    std::cout << "\nSales Manager Info:  Wholesale Cost: $ " << c.getWholesale() << ", MFG Rebate: $" << c.getRebate() << ", Min Markup: $" << c.getMinMarkup() <<std::endl;
    std::cout << "\nSales Manager Financial:  Minimum Sales Price: $ " <<  c.getDealerCost() << std::endl;

    std::cout << "\nExample sale outcomes:\n" << std::endl;
    for (int i=0; i<5; i++)
    {
        int m = i * 25;
        std::cout << m << "%:\t" << "Sale Price: $" << (c.getDealerCost() + ((c.getMaxMargin()* m)/100)) << "\tDealer Profit: $" <<
                    ((c.getMaxMargin()* m)/100) *.7 << "\t\tSalesman Commission: $" << ((c.getMaxMargin()* m)/100) *.3 << std::endl;

    }

    std::cout <<"\n\n\n\n\n";

    return 0;
}














/*  I left the code from the early parts of the video below, in "commented out" form.
    The final code form from the video is shown above.

    Bonus Tip:  If you select all the lines in a grouping below and hit Ctrl+Shift+X it will uncomment them all at once.
                Conversely, if you select a grouping of uncommented code, and hit Ctrl+Shift+C you will comment them all at once.

*/



//    //Class Example
//    // Code snippet goes into main()
//
//    MyClass c;
//
//    c.dataMember01 = 22;
//    c.dataMember02 = 222.22;
//    c.dataMember03 = 1234567890123456789;
//
//    c.memberFunction01();
//    c.memberFunction02();
//    c.memberFunction03();
//
//    std::cout <<"\n\n\n";




//    // Car1 class example with private members and public setters/getters
//    // Code snippet goes into main()
//    Car1 car;
//    car.setMake("Toyota");
//    car.setModel("Camry");
//    car.setYear(2019);
//
//    std::cout << car.details() << std::endl;




//    // Car2 class example with private members and public setters/getters
//    // Code snippet goes into main()
//    Car2 c2;
//    // Publicly accessible, can access normally
//    c2.make = "Honda";
//    c2.model = "Accord";
//    c2.year = 2019;
//    c2.retailPrice = 28000;
//
//    // Private info, need to use setters/getters to access or change
//
//    c2.setVIN("1HGCV1F31LA000000");
//    c2.setPO("N34987210");
//    c2.setWholesale(22000);
//
//    std::cout << "Car info: " << c2.year << " " << c2.make << " " << c2.model << ", Retail: $" << c2.retailPrice << std::endl;
//    std::cout << "Salesman Info:  PO: " << c2.getPO() << ", VIN: " << c2.getVIN() << ", Cost: $ " << c2.getCost() << std::endl;




//    // Code snippet goes into main()
//    Car c;
//
//    // Publicly accessible, can access normally
//    c.make = "Honda";
//    c.model = "Accord";
//    c.setYear(2019);
//    c.retailPrice = 28000;
//
//    // Private info, need to use setters/getters to access or change
//
//    c.setVIN("1HGCV1F31LA000000");
//    c.setPO("N34987210");
//    c.setWholesale(22000);
//    c.setFuel(0);
//    //c.setFuel(setFuelType());
//
//
//    std::cout << "\nCar info: " << c.getYear() << " " << c.make << " " << c.model << ", Retail: $" << c.retailPrice << ", Fuel Type: " << c.getFuel() << std::endl;
//    std::cout << "\nSalesman Info:  Purchase Order#: " << c.getPO() << ", VIN: " << c.getVIN() << ", Dealer Cost: $ " << c.getWholesale() << std::endl;
//    std::cout << "\nSales Manager Info:  Wholesale Cost: $ " << c.getWholesale() << ", MFG Rebate: $" << c.getRebate() << ", Min Markup: $" << c.getMarkup() * c.getWholesale() / 100  <<std::endl;
//    std::cout << "\nSales Manager Financial:  Minimum Sales Price: $ " <<  c.getDealerCost() << std::endl;
//
//    std::cout << "\nExample sale outcomes:\n" << std::endl;
//    for (int i=0;i<5;i++)
//    {
//        int m = i * 25;
//        int minPrice = c.getDealerCost();
//        std::cout << m << "%:\t" << "Sale Price: $" << (minPrice + (((c.retailPrice - minPrice)* m)/100)) << "\tDealer Profit: $" << (((c.retailPrice - minPrice)* m)/100) *.7 << "\t\tSalesman Commission: $" << (((c.retailPrice - minPrice)* m)/100) *.3 << std::endl;
//
//    }

