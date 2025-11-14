// 函数: sub_653a70
// 地址: 0x653a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
int32_t edx_2 = (ecx - *arg1) s>> 2

if (edx_2 u> 0x10)
    arg1[1] = ecx + ((0x10 - edx_2) << 2)
    return 

if (edx_2 u>= 0x10)
    return 

sub_415950(arg1, 0x10 - edx_2)
int32_t edi_1 = arg1[1]
int32_t eax_6 = (edi_1 - *arg1) s>> 2

if (0x10 != eax_6)
    __builtin_memset(edi_1, 0, (0x10 - eax_6) << 2)

int32_t ecx_3 = arg1[1]
arg1[1] = ecx_3 + ((0x10 - ((ecx_3 - *arg1) s>> 2)) << 2)
