// 函数: sub_6266d0
// 地址: 0x6266d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_esi_2 = *(arg3 + 0x16bc)

if (__saved_esi_2 s<= 0xd)
    *(arg3 + 0x16b8) |= arg5 << __saved_esi_2.b
    int32_t __saved_esi_1 = __saved_esi_2
    *(arg3 + 0x16bc) = __saved_esi_2 + 3
    return sub_626fb0(__saved_esi_2 + 3, arg2, arg3, arg4)

char* edx = *(arg3 + 8)
int32_t ecx = *(arg3 + 0x14)
*(arg3 + 0x16b8) |= arg5 << __saved_esi_2.b
edx[ecx] = *(arg3 + 0x16b8)
*(arg3 + 0x14) += 1
uint32_t eax_1 = zx.d(*(arg3 + 0x16b9))
(*(arg3 + 0x14))[*(arg3 + 8)] = eax_1.b
int32_t __saved_esi_3
__saved_esi_3.b = 0x10
__saved_esi_3.b = 0x10 - *(arg3 + 0x16bc)
*(arg3 + 0x14) += 1
*(arg3 + 0x16bc) -= 0xd
*(arg3 + 0x16b8) = arg5 u>> __saved_esi_3.b
int32_t __saved_esi = __saved_esi_3
return sub_626fb0(eax_1, arg2, arg3, arg4)
