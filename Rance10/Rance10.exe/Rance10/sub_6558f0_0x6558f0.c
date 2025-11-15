// 函数: sub_6558f0
// 地址: 0x6558f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0 || arg4 == 0)
    *(*arg3 + 0x14) = 0x18
    (**arg3)(arg3)

if (arg3[6] == 0)
    arg3[6] = (*arg3[1])(arg3, 0, 0x28)

int32_t* esi = arg3[6]
esi[2] = sub_4033e0
esi[3] = sub_655850
esi[4] = sub_6558d0
esi[5] = arg2
esi[6] = arg4
esi[7] = 0

if (*arg2 == 0 || *arg4 == 0)
    int32_t var_14_2 = 0x1000
    int32_t eax_6 = sub_705e22()
    *arg2 = eax_6
    esi[7] = eax_6
    
    if (eax_6 == 0)
        *(*arg3 + 0x14) = 0x38
        *(*arg3 + 0x18) = 0xa
        (**arg3)(arg3)
    
    *arg4 = 0x1000

int32_t eax_11 = *arg2
esi[8] = eax_11
*esi = eax_11
int32_t result = *arg4
esi[9] = result
esi[1] = result
return result
