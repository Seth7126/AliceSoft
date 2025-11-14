// 函数: sub_48f300
// 地址: 0x48f300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1

if (*(arg1 + 0xc) == 0 || *(arg1 + 0x14) == *(arg1 + 0x18))
    return 0

int32_t ecx = *(arg1 + 0x34)

if (ecx == 3 || ((*(arg1 + 0x18) - *(arg1 + 0x14)) & 0xfffffffc) == 4)
    return **(arg1 + 0x14)

int32_t arg_4
int32_t temp0 = divs.dp.d(sx.q(arg_4), *(arg1 + 0x2c))
*(arg1 + 0x2c)
int32_t ebp_2 = (*(arg1 + 0x18) - *(arg1 + 0x14)) s>> 2
int32_t edi = temp0
var_4 = edi

if (ecx == 0)
    arg_4 = ebp_2 - 1
    int32_t* edx_2 = &arg_4
    
    if (ebp_2 - 1 s>= edi)
        edx_2 = &var_4
    
    return *(*(arg1 + 0x14) + (*edx_2 << 2))

if (ecx == 1 || ebp_2 == 2)
    edi = mods.dp.d(sx.q(temp0), ebp_2)
else if (ecx == 2)
    int32_t ebx_1
    edi = mods.dp.d(sx.q(temp0), ebx_1 - 2)
    
    if (ebp_2 s<= edi)
        return *(*(arg1 + 0x14) + (((ebp_2 << 1) - edi - 2) << 2))

return *(*(arg1 + 0x14) + (edi << 2))
