// 函数: sub_5ea2a0
// 地址: 0x5ea2a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8
int32_t var_4
sub_5ea3e0(arg1, &var_8, &var_4)
int32_t ecx_1 = arg2 - var_8
int32_t edi_1 = arg3 - var_4
int32_t eax

if (*(arg1 + 0x5c) != 0 || *(arg1 + 0xc) == 0)
    if (ecx_1 s>= 0 && ecx_1 s< *(arg1 + 0x60) && edi_1 s>= 0 && edi_1 s< *(arg1 + 0x64))
        *arg4 = ecx_1
        *arg5 = edi_1
        int32_t* eax_10
        eax_10.b = 1
        return eax_10
    
    eax.b = 0
    return eax

int32_t ebp = *(arg1 + 0x34)

if (ecx_1 s< 0 || ecx_1 s>= *(arg1 + 0x30) || edi_1 s< 0 || edi_1 s>= ebp)
    eax.b = 0
    return eax

*arg4 = divs.dp.d(sx.q(*(arg1 + 0x60) * ecx_1), *(arg1 + 0x30))
*arg5 = divs.dp.d(sx.q(*(arg1 + 0x64) * edi_1), ebp)
int32_t eax_8
eax_8.b = 1
return eax_8
