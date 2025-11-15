// 函数: sub_4140a0
// 地址: 0x4140a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t eax = *(arg1 + 4)
char eax_1

if (eax != 0xa && eax != 2 && eax != 0x12 && eax != 0x5c && eax != 0x5b && eax != 0x5d)
    eax_1 = sub_41a7b0(arg1)

if (eax == 0xa || eax == 2 || eax == 0x12 || eax == 0x5c || eax == 0x5b || eax == 0x5d
        || eax_1 != 0)
    int32_t eax_2 = *(arg3 + 4)
    char eax_3
    
    if (eax_2 != 0xa && eax_2 != 2 && eax_2 != 0x12 && eax_2 != 0x5c && eax_2 != 0x5b
            && eax_2 != 0x5d)
        eax_3 = sub_41a7b0(arg3)
    
    if (eax_2 == 0xa || eax_2 == 2 || eax_2 == 0x12 || eax_2 == 0x5c || eax_2 == 0x5b
            || eax_2 == 0x5d || eax_3 != 0)
        int32_t eax_5 = sub_41a840(arg3)
        int32_t eax_6
        eax_6.b = sub_41a840(arg1) s>= eax_5
        sub_414470(arg2, eax_6.b)
        return arg2

sub_414340(arg2)
return arg2
