// 函数: sub_4a9cd0
// 地址: 0x4a9cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx_4 = data_75d4fc
int32_t* eax = *(ecx_4 + 0x134)

if (eax == *(ecx_4 + 0x138))
    return eax

void* esi = *eax
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x2e8ba2e9, *(esi + 0x14) - *(esi + 0x10))
int32_t edx_1 = edx s>> 3
int32_t eax_4 = (edx_1 u>> 0x1f) + edx_1

if (eax_4 s<= arg1 || arg1 s< 0)
    return eax_4

int32_t eax_5 = *(esi + 0x10)
*(arg1 * 0x2c + eax_5 + 0xc)
return eax_5
