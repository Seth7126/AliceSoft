// 函数: sub_60a270
// 地址: 0x60a270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t var_14
void* var_4 = __security_cookie ^ &var_14
void* result
int32_t esi_1

if (arg2 != 0)
    if (arg2 - 1 u> 5)
    label_60a332:
        result.b = 0
        sub_69a5bc(var_4 ^ &var_14)
        return result
    
    if (arg3 == 0)
        esi_1 = *(*(arg1 + 4) + (arg2 << 3) + 4)
        
        if (esi_1 == 0)
            result.b = 0
            sub_69a5bc(var_4 ^ &var_14)
            return result
    else
        esi_1 = *(*(arg1 + 0x10) + (arg2 << 3) + 4)
        
        if (esi_1 == 0)
            result.b = 0
            sub_69a5bc(var_4 ^ &var_14)
            return result
else if (arg3 == 0)
    esi_1 = *(*(arg1 + 4) + 4)
    
    if (esi_1 == 0)
        goto label_60a332
else
    esi_1 = 0

if (*(arg1 + 0x1c) != esi_1)
    int32_t eax_1 = *arg4
    var_14 = data_709450
    (*(eax_1 + 0x8c))(arg4, esi_1, &var_14, 0xffffffff)
    *(arg1 + 0x1c) = esi_1

result.b = 1
sub_69a5bc(var_4 ^ &var_14)
return result
