// 函数: sub_61dc60
// 地址: 0x61dc60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x1c)

if (ecx == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t eax_2 = (*(*ecx + 0x28))()
uint32_t ecx_1 = *(arg1 + 0x5c)

if (ecx_1 == 0)
    ecx_1 = 4
    uint32_t eax_5 = (*(arg1 + 0x60) * *(arg1 + 0x50)) u>> 3
    
    if (eax_5 != 0)
        ecx_1 = eax_5

int32_t ecx_2 = *(arg1 + 0x54)

if (ecx_2 == 0)
    ecx_2 = 0xac44

int32_t eax_9
uint32_t edx_3
edx_3:eax_9 = mulu.dp.d(divu.dp.d(0:(eax_2 - 1 + ecx_1), ecx_1), 0x3e8)
*(arg1 + 0x74) = __aulldiv(eax_9, edx_3, ecx_2, 0)
uint32_t eax_10
eax_10.b = 1
return eax_10
