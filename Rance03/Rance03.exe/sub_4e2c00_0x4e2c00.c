// 函数: sub_4e2c00
// 地址: 0x4e2c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t eax_1 = arg3 - 1
void* const var_c

if (arg3 == 1)
    var_c = &data_6e1cec
else
    int32_t temp2_1 = eax_1
    eax_1 -= 1
    
    if (temp2_1 == 1)
        var_c = &data_6e1ce4
    else
        int32_t temp3_1 = eax_1
        eax_1 -= 1
        
        if (temp3_1 != 1)
            char* esi = arg1
            *(esi + 0x14) = 0xf
            *(esi + 0x10) = 0
            *esi = 0
            sub_401ff0(esi, arg2, 0, 0xffffffff)
            return esi
        
        var_c = &data_6e1cd8

sub_410930(eax_1, arg2, arg1, var_c)
return arg1
