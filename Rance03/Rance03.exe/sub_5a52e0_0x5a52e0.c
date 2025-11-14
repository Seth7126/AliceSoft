// 函数: sub_5a52e0
// 地址: 0x5a52e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s< 0)
    return 

void* esi_1 = data_75d508

if (arg3 s>= (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
    return 

void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))

if (ecx == 0 || arg2 s< 0 || arg2 s>= (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
    return 

void* edi_1 = *(*(ecx + 0x1c) + (arg2 << 2))

if (edi_1 == 0 || arg4 s< 0)
    return 

int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x2fa0be83, *(edi_1 + 0xdc) - *(edi_1 + 0xd8))
int32_t edx_1 = edx s>> 5

if (arg4 s< (edx_1 u>> 0x1f) + edx_1)
    *(arg4 * 0xac + *(edi_1 + 0xd8) + 0x78)
