#include <iostream>
#include <iomanip> 
#include <string.h> 

using namespace std;

int main()
{
    char s1[20] = "Hello World";
    char s2[20] = "Hello";

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    
    for (int i = 0; i <= len1 - len2; i++) {
        if (strncmp(s1 + i, s2, len2) == 0)
        {
            int pos = 1;
        }
        else {
            cout << s1;
            return 0;
        }
        if (strncmp(s1 + i, s2, len2) == 0)
        {
            int pos = 1;
        }
        else {
            cout << s1;
            return 0;
        }
    }
   

}
