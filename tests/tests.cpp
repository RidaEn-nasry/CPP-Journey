/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 23:02:09 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/18 15:14:44 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#define CATCH_CONFIG_MAIN

#include <tests.hpp>

TEST_CASE( "cpp", "[cpp]" )
{
    
    /*
    ******************************************************************
    *                        CPP01                                    *
    * ****************************************************************
    */
   
    SECTION( "cpp01" )
    {
        
        /*
        * *********************
        *          EX02
        * *********************
        */
       
        SECTION( "ex02" )
        {

            SECTION( "Basic Test 1" )
            {
                std::ofstream file( "test.txt" );
                file << "Hello World!" << std::endl;
                const char* file1 = "test.txt";
                const char* str1 = "World";
                const char* str2 = "Universe";
                REQUIRE( sed( file1, str1, str2 ) == 0 );
                std::ifstream file2( "test.txt" );
                std::string line;
                std::getline( file2, line );
                REQUIRE( line == "Hello Universe!" );
                remove( "test.txt" );
            }
            SECTION( "Basic Test 2" )
            {
                std::ofstream file( "test.txt" );
                std::string input = "Hello Hola Mundo Bonjour Hello Salut Salaam Alooha Hello Earth Hey Hello Marhaba Yasou Namaste Hello\
            Hola Hello";
                file << input << std::endl;
                REQUIRE( sed( (const char*)"test.txt", (const char*)"Hello", (const char*)"Go fuck yourself" ) == 0 );
                std::ifstream file2( "test.txt" );
                std::string line;
                std::cout << "line: " << line << std::endl;
                std::getline( file2, line );
                while (input.find( "Hello" ) != std::string::npos)
                    input = input.replace( input.find( "Hello" ), 5, "Go fuck yourself" );
                REQUIRE( line == input );
                remove( "test.txt" );
            }
            SECTION( "Non Existing File Test" )
            {
                REQUIRE( sed( "non_existing_file.txt", "Hello", "blabla" ) == 1 );
            }
            SECTION( "File Permission Test" )
            {
                std::ifstream file( "test.txt" );
                std::string line;
                chmod( "test.txt", 100 );
                REQUIRE( sed( "test.txt", "Hello", "blabla" ) == 1 );
                remove( "test.txt" );
            }
            SECTION( "Empty File Test" )
            {
                std::ofstream file( "test.txt" );
                file << std::endl;
                REQUIRE( sed( "test.txt", "Hello", "blabla" ) == 0 );
                std::ifstream file2( "test.txt" );
                std::string line;
                std::getline( file2, line );
                REQUIRE( line.empty() );
                remove( "test.txt" );
            }
        }
    }
    
    /******************************************************************
     *                       CPP02                                    *
     * ***************************************************************
    */
   
    SECTION( "cpp02" )
    {
        
        /* *********************
        *          EX02
        * **********************
        */
       
        SECTION( "ex02" )
        {
            SECTION( "Comparison Overloading Tests" )
            {
                Fixed const a( 1.0f );
                Fixed const b( 2.0f );
                bool result = a == b;
                REQUIRE_FALSE( result );
                result = a != b;
                REQUIRE( result == true );
                result = a < b;
                REQUIRE( result == true );
                result = a > b;
                REQUIRE( result == false );
                result = a <= b;
                REQUIRE( result == true );
                result = a >= b;
                REQUIRE( result == false );
                result = a <= a;
                REQUIRE( result == true );
                result = a >= a;
                REQUIRE( result == true );
                result = a == a;
                REQUIRE( result == true );
                result = a != a;
                REQUIRE( result == false );
            }
            SECTION("AO overloading", "[Tests for arithmetic operators overloading]")
            {
                Fixed const a( 1.0f );
                Fixed const b( 2.0f );
                Fixed const c( 3.0f );
                
                Fixed result = a + b;
                REQUIRE( result == Fixed( 3.0f ) );
                result = a - b;
                REQUIRE( result == Fixed( -1.0f ) );
                result = a * b;
                REQUIRE( result == Fixed( 2.0f ) );
                result = a / b;
                REQUIRE( result == Fixed( 0.5f ) );
                result = a + c;
                REQUIRE( result == Fixed( 4.0f ) );
                result = a - c;
                REQUIRE( result == Fixed( -2.0f ) );
                result = a * c;
                REQUIRE( result == Fixed( 3.0f ) );
                result = a / c;
                REQUIRE( result == Fixed( 0.332031f ) );
            }
            
        }
        /* *********************
        *          EX03
        * **********************
        */
       SECTION("ex03") {
        SECTION("Testing getArea function")
        {
            Point const a( 1.0f, 1.0f );
            Point const b( 2.0f, 2.0f );
            Point const c( 3.0f, 3.0f );
            REQUIRE( getArea( a, b, c ) == Approx( 0.0f ) );
        }
       }
    }
}


