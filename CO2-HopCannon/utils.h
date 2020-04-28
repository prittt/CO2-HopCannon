#ifndef CO2_HOPCANNON_UTILS_H_
#define CO2_HOPCANNON_UTILS_H_

String RepeatString(String str, int n)
{
    String ret = "";
    while (n-- > 0) {
        ret += str;
    }
    return ret;
}

#endif // CO2_HOPCANNON_UTILS_H_
