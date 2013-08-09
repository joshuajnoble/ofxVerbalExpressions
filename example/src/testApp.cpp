#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    // Create an example of how to test for correctly formed URLs
    VerEx expr = VerEx()
                .searchOneLine()
                .startOfLine()
                .then( "http" )
                .maybe( "s" )
                .then( "://" )
                .maybe( "www." )
                .anythingBut( " " )
                .endOfLine();

    // Use VerEx's test() function to find if it matches
    std::cout << expr.test("https://www.google.com") << std::endl;

    // Ouputs the actual expression used: ^(?:http)(?:s)?(?:://)(?:www.)?(?:[^ ]*)$
    std::cout << expr << std::endl;

    // try out the ranger
    VerEx ranger = VerEx().range("a", "c");
    std::cout << " range " << ranger.test("18b9") << endl;

    // Create a test string
    std::string replaceMe = "Replace bird with a duck";
    // Create an expression that seeks for word "bird"
    VerEx expr2 = VerEx().find("bird");
    // Execute the expression
    std::cout << expr2.replace(replaceMe, "duck") << std::endl;

    // Shorthand string replace
    std::cout << VerEx().find( "red" ).replace( "We have a red house", "blue" ) << std::endl;


}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
