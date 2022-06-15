/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:02:45 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 11:02:03 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define CATCH_CONFIG_MAIN
#include <godheader.hpp>
#include <sed.hpp>


TEST_CASE( "ex04", "[cpp01]" )
{
    // create a file and write some text to it 
    SECTION("Basic Test 1")
    {
        std::ofstream file("test.txt");
        file << "Hello World!" << std::endl;
        const char  *file1 = "test.txt";
        const char  *str1 = "World";
        const char *str2 = "Universe";
        REQUIRE(sed(file1, str1, str2) == 0);
        // read the file and check if the text has been changed
        std::ifstream file2("test.txt");
        std::string line;
        std::getline(file2, line);
        REQUIRE(line == "Hello Universe!");
        remove("test.txt");
    }
    SECTION("Basic Test 2")
    {
        std::ofstream file("test.txt");
        std::string input = "Hello Hola Mundo Bonjour Hello Salut Salaam Alooha Hello Earth Hey Hello Marhaba Yasou Namaste Hello\
            Hola Hello" ;
        file << input << std::endl;
            //   file shouldn't be empty
            REQUIRE(sed((const char *)"test.txt", (const char *)"Hello", (const char *)"Go fuck yourself") == 0);
            std::ifstream file2("test.txt");
            std::string line;
            std::cout << "line: " << line << std::endl;
            std::getline(file2, line);
            // change every occurence of "Hello" to "Go fuck yourself"
            while (input.find("Hello") != std::string::npos)
                input = input.replace(input.find("Hello"), 5, "Go fuck yourself");
            REQUIRE(line == input);
            remove( "test.txt" );
    }
    SECTION("Non Existing File Test")
    {
        REQUIRE(sed("non_existing_file.txt", "Hello", "blabla") == 1);        
    }
    SECTION("File Permission Test")
    {
        std::ifstream file("test.txt");
        std::string line;
        // remove read permission from file
        chmod("test.txt", 100);
        REQUIRE(sed("test.txt", "Hello", "blabla") == 1);
        remove( "test.txt" );
    }
    SECTION("Empty File Test")
    {
        std::ofstream file("test.txt");
        file << std::endl;
        REQUIRE(sed("test.txt", "Hello", "blabla") == 0);
        std::ifstream file2("test.txt");
        std::string line;
        std::getline(file2, line);
        REQUIRE(line.empty());
        remove( "test.txt" );
    }
}

