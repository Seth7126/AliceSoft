// 函数: sub_47cca0
// 地址: 0x47cca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx_2 = data_75d4f0

if (ecx_2 != 0)
    (**ecx_2)(1)
    data_75d4f0 = 0

int32_t* ecx = data_75d4f4

if (ecx != 0)
    (**ecx)(1)
    data_75d4f4 = 0

struct math::CMRand::VTable** esi = sub_69adc6(0x82c)

if (esi == 0)
    esi = nullptr
else
    *esi = &math::CMRand::`vftable'
    sub_47cb30(esi, 0)

data_75d4f0 = esi
struct math::CMTRand::VTable** result = sub_69adc6(0x9c8)

if (result == 0)
    data_75d4f4 = 0
    result.b = 1
    return result

*result = &math::CMTRand::`vftable'
result[0x271] = 0x271
data_75d4f4 = result
result.b = 1
return result
