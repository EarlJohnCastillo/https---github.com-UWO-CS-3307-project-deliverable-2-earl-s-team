#include <string>
#include <emscripten.h>

extern "C"
{
    EMSCRIPTEN_KEEPALIVE // Makes sure that this function stays alive throught run-time
        /*string trial(string risk, int focus, double funds, int years){
            string returnString = "User Chose a risk level of: " + risk + "\n" +
                              "User Chose a focus of: " + focus + "% focus towards Captial Growth \n" +
                              "User has $" + funds + " available to invest \n" +
                              "User wants to keep the investment for: " + years + " Years.";
            return returnString; */

        int
        trial()
    {
        return 1;
    }
}