// 函数: sub_61d970
// 地址: 0x61d970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(*arg1 + 0x4c))() == 0)
    return 0

uint32_t ecx = arg1[0x17]

if (ecx == 0)
    ecx = 4
    uint32_t eax_6 = (arg1[0x18] * arg1[0x14]) u>> 3
    
    if (eax_6 != 0)
        ecx = eax_6

int32_t ecx_1 = arg1[0x15]

if (ecx_1 == 0)
    ecx_1 = 0xac44

int32_t eax_11
uint32_t edx_2
edx_2:eax_11 = mulu.dp.d(divu.dp.d(0:(arg1[0xd] - 1 + ecx), ecx), 0x3e8)
return __aulldiv(eax_11, edx_2, ecx_1, 0)
