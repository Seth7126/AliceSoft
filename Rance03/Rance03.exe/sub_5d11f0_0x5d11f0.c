// 函数: sub_5d11f0
// 地址: 0x5d11f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x14)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x14) = 0

int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0xc) = 0

int32_t* ecx_2 = *(arg1 + 0xc)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0xc) = 0

struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_4 = sub_69adc6(8)

if (eax_4 == 0)
    eax_4 = nullptr
else
    *eax_4 = &nutria::CZlibDecompressor::`vftable'{for `IDecompressor'}
    eax_4[1] = 1

*(arg1 + 0xc) = eax_4

if (eax_4 == 0)
    eax_4.b = 0
    return eax_4

int32_t* ecx_3 = *(arg1 + 0x14)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    *(arg1 + 0x14) = 0

struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_6 = sub_620e90(0x6ea8c0)
*(arg1 + 0x14) = eax_6
eax_6.b = eax_6 != 0
return eax_6
