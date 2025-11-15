// 函数: sub_6b18f0
// 地址: 0x6b18f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == 0 || arg2 == 0)
    return 

uint32_t eax = zx.d(*(arg2 + 0x14))

if (eax.w == 0 || eax.w u> 0x100)
    return sub_6a7530(arg3, "Invalid palette size, hIST allocation skipped") __tailcall

sub_6a4450(eax, arg2, arg3, 8, 0)
int32_t eax_1 = *(arg3 + 0x274)

if (eax_1 == 0)
    arg1 = sub_705e22()
else
    arg1 = eax_1(arg3, 0x200)

if (arg1 == 0)
    sub_6a7530(arg3, "Out of memory")
    arg1 = 0

*(arg2 + 0xcc) = arg1

if (arg1 == 0)
    return sub_6a7530(arg3, "Insufficient memory for hIST chunk data") __tailcall

uint32_t ecx_4 = zx.d(*(arg2 + 0x14))
*(arg2 + 0xe8) |= 8

if (ecx_4 != 0)
    int32_t ecx_6
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2, ecx_6 = __builtin_memcpy(arg1, arg4, ecx_4 u>> 1 << 2)
    __builtin_memcpy(edi_2, esi_2, adc.d(ecx_6, ecx_6, (ecx_4 & 1) != 0) << 1)

*(arg2 + 8) |= 0x40
