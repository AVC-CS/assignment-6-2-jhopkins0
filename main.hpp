//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        int random;
        srand(time(0));
        random = rand() % 100;
        return random;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        int med = (rdnum1 + rdnum2 + rdnum3) / 3;

        int med1 = (rdnum1 - med);
        int med2 = (rdnum2 - med);
        int med3 = (rdnum3 - med);

        if ((med1 <= med2) && (med1 <= med3)){
                return rdnum1;
        }
        else if((med2 <= med1) && (med2 <= med3)){
                return rdnum2;
        }
        else{
                return rdnum3;
        }
}