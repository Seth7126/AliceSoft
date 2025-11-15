// 函数: sub_632a30
// 地址: 0x632a30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3
int32_t edx_2 = (*(arg1 + 0x18)
    & ((((zx.d(edi[2].b) ^ 0x811c9dc5) * 0x1000193) ^ zx.d(*(edi + 9))) * 0x1000193)) << 3
int32_t* ecx_3 = *(arg1 + 0xc) + edx_2

if (ecx_3[1] == edi)
    if (*ecx_3 != edi)
        ecx_3[1] = edi[1]
    else
        *ecx_3 = *(arg1 + 4)
        *(edx_2 + *(arg1 + 0xc) + 4) = *(arg1 + 4)
    
    edi = arg3
else if (*ecx_3 == edi)
    *ecx_3 = *edi
    edi = arg3

int32_t esi = *edi
*edi[1] = esi
*(*edi + 4) = edi[1]
*(arg1 + 8) -= 1
sub_403160(edi, 1, 0xc)
*arg2 = esi
return arg2
