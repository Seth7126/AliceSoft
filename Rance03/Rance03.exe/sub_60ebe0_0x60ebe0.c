// 函数: sub_60ebe0
// 地址: 0x60ebe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_30
int32_t eax_1 = __security_cookie ^ &var_30
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 4) = 0

int32_t var_2c = 3
int32_t var_20 = 0
int32_t eax_3
eax_3.b = arg3 != 0
int32_t var_1c = 0
int32_t var_c = eax_3
int32_t var_18 = 0
int32_t var_14 = 1
int32_t var_10 = 0
int32_t var_8 = 0
int32_t var_24_1

if (arg2 == 0)
    int32_t var_28_2 = 1
    var_24_1 = 0
else if (arg2 == 1)
    int32_t var_28_1 = 3
    int32_t var_24 = 1
else
    if (arg2 != 2)
        int32_t eax_7
        eax_7.b = 0
        sub_69a5bc(eax_1 ^ &var_30)
        return eax_7
    
    int32_t var_28 = 3
    var_24_1 = 0
int32_t eax_9
eax_9.b = (*(*arg4 + 0x58))(arg4, &var_2c, arg1 + 4) s>= 0
sub_69a5bc(eax_1 ^ &var_30)
return eax_9
