// 函数: sub_54e340
// 地址: 0x54e340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
void* edi = arg2
int32_t result = esi[1]

if (edi u< result)
    arg1 = *esi

if (edi u< result && arg1 u<= edi)
    if (result == esi[2])
        int32_t* var_c_1 = arg1
        result = sub_54e780(esi)
    
    edi = ((edi - arg1) & 0xffffffe0) + *esi
else if (result == esi[2])
    int32_t* var_c_2 = arg1
    result = sub_54e780(esi)

int32_t* ecx_2 = esi[1]

if (ecx_2 != 0)
    *ecx_2 = *edi
    ecx_2[1] = *(edi + 4)
    ecx_2[2] = &sealengine::CFrameAddColor::`vftable'
    *(ecx_2 + 0xc) = *(edi + 0xc)
    result = *(edi + 0x1c)
    ecx_2[7] = result

esi[1] += 0x20
return result
