// Copyright (c) 2022 All rights reserved.
// .
// Created by: Spencer S
// Date : Dec 5, 2022
// This program formats the users address


#include <algorithm>
#include <iostream>


std::string addressFormat(std::string fullName, std::string streetNum,
std::string, std::string streetName, std::string city, std::string province,
std::string postalCode, std::string apartment = "") {
    std::string address;
    // if they have an apartment location
    if (apartment != "") {
        address = fullName + "\n" + apartment + "-" +
        streetNum + " " + streetName + "\n" +
        city + " " + province + " " + postalCode + "\n";
        // same information but without apartment question
    } else {
        address = fullName + "\n" + streetNum + " " +
        streetName + "\n" + city + " " + province + " " + postalCode + "\n";
    }
    return address;
}

int main() {
    // Declaring variables
    std::string fullName, question, apartment,
        streetNum, streetName, city,
        province, postalCode, address;

    // gets name
    std::cout << "\nEnter your full name: ";
    std::getline(std::cin, fullName);

    // asks if they live in an apartment
    std::cout << "\nDo you have live in an apartment(y/n): ";
    std::getline(std::cin, question);
    std::transform(question.begin(), question.end(),
                   question.begin(), ::toupper);

    // if they answered yes to the apartment question, asks for apartment info
    if (question == "Y") {
        std::cout << "\nEnter your apartment number: ";
        std::getline(std::cin, apartment);
    }
    // street number question
    std::cout << "\nEnter your street number: ";
    std::getline(std::cin, streetNum);

    // street name question
    std::cout << "\nEnter your street name and type of: ";
    std::getline(std::cin, streetName);

    // city question
    std::cout << "\nEnter your city: ";
    std::getline(std::cin, city);

    // province question
    std::cout << "\nEnter your province: ";
    std::getline(std::cin, province);

    // gets postal code
    std::cout << "\nEnter your Postal Code: ";
    std::getline(std::cin, postalCode);
    std::cout << "";

    // sets all information to caps
    std::transform(fullName.begin(), fullName.end(),
                   fullName.begin(), ::toupper);
    std::transform(apartment.begin(), apartment.end(),
                   apartment.begin(), ::toupper);
    std::transform(streetNum.begin(), streetNum.end(),
                   streetNum.begin(), ::toupper);
    std::transform(city.begin(), city.end(),
                   city.begin(), ::toupper);
    std::transform(province.begin(), province.end(),
                   province.begin(), ::toupper);
    std::transform(postalCode.begin(), postalCode.end(),
                   postalCode.begin(), ::toupper);

    // calls the functions
    address = addressFormat(fullName, apartment,
    streetNum, streetName, city, province, postalCode, apartment);

    // output messages
    std::cout << "Your Canadian mailing address is\n";
    std::cout << address << "\n";
}
