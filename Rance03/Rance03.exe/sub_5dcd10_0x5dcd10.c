// 函数: sub_5dcd10
// 地址: 0x5dcd10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14[0x4]
int32_t var_4 = __security_cookie ^ &var_14
void* esi = *(arg1 + 4)
int32_t eax_1

if (*(esi + 0x48) != 0)
    if ((*(esi + 0x38) != 0 || *(esi + 0x3c) - 0x10 u<= 1) && sub_5d4ad0(esi).b == 0)
        eax_1.b = 0
        sub_69a5bc(var_4 ^ &var_14)
        return eax_1
    
    *(esi + 0xc) = 0
    *(esi + 0x48) = 0

if (arg3 s<= 0)
    eax_1.b = 1
    sub_69a5bc(var_4 ^ &var_14)
    return eax_1

int32_t ecx_5 = 0

if (arg3 s> 0)
    int32_t* edx_2 = arg2 + ((arg3 - 1) << 2)
    
    do
        int32_t eax_4 = *edx_2
        edx_2 = &edx_2[-1]
        var_14[ecx_5] = eax_4
        ecx_5 += 1
    while (ecx_5 s< arg3)

bool cond:0 = sub_5d4340(*(arg1 + 4), arg3, &var_14, 1) != 0
sub_69a5bc(var_4 ^ &var_14)
return cond:0
