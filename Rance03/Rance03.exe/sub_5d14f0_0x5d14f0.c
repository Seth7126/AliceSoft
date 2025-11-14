// 函数: sub_5d14f0
// 地址: 0x5d14f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t* ecx = *(arg1 + 4)

if (ecx + arg3 u> *(arg1 + 8))
    void* eax_2
    eax_2.b = 0
    sub_69a5bc(eax_1 ^ &var_20)
    return eax_2

int32_t var_c = 0xf
int32_t var_10 = 0
var_20 = 0
sub_402110(&var_20, ecx, arg3)

if (arg2 != &var_20)
    if (arg2[5] u>= 0x10)
        j__free(*arg2)
    
    arg2[5] = 0xf
    arg2[4] = 0
    *arg2 = 0
    sub_4030b0(arg2, &var_20)

if (var_c u>= 0x10)
    j__free(var_20.d)

*(arg1 + 4) += arg3
char* eax_3
eax_3.b = 1
sub_69a5bc(eax_1 ^ &var_20)
return eax_3
