// 函数: sub_51ddf0
// 地址: 0x51ddf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
void* edi = arg2
int32_t result = esi[1]

if (edi u< result)
    arg1 = *esi

if (edi u< result && arg1 u<= edi)
    if (result == esi[2])
        int32_t* var_c_1 = arg1
        result = sub_51de80(esi)
    
    edi = ((edi - arg1) & 0xffffffc0) + *esi
else if (result == esi[2])
    int32_t* var_c_2 = arg1
    result = sub_51de80(esi)

struct partsengine::CTextDecoration::VTable** ecx_2 = esi[1]

if (ecx_2 != 0)
    *ecx_2 = &partsengine::CTextDecoration::`vftable'
    ecx_2[1] = &partsengine::CCharSpriteProperty::`vftable'
    ecx_2[2] = *(edi + 8)
    ecx_2[3] = *(edi + 0xc)
    *(ecx_2 + 0x10) = *(edi + 0x10)
    ecx_2[8] = *(edi + 0x20)
    ecx_2[9] = *(edi + 0x24)
    *(ecx_2 + 0x28) = *(edi + 0x28)
    ecx_2[0xe] = *(edi + 0x38)
    result = *(edi + 0x3c)
    ecx_2[0xf] = result

esi[1] += 0x40
return result
