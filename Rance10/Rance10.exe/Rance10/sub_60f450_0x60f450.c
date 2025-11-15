// 函数: sub_60f450
// 地址: 0x60f450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3
int32_t eax_5 = (((((((zx.d(edi[2].b) ^ 0x811c9dc5) * 0x1000193) ^ zx.d(*(edi + 9))) * 0x1000193)
    ^ zx.d(*(edi + 0xa))) * 0x1000193) ^ zx.d(*(edi + 0xb))) * 0x1000193
int32_t edx_4 = (*(arg1 + 0x18) & eax_5) << 3
int32_t* ecx_5 = *(arg1 + 0xc) + edx_4

if (ecx_5[1] == edi)
    if (*ecx_5 != edi)
        ecx_5[1] = edi[1]
    else
        *ecx_5 = *(arg1 + 4)
        *(edx_4 + *(arg1 + 0xc) + 4) = *(arg1 + 4)
    
    edi = arg3
else if (*ecx_5 == edi)
    *ecx_5 = *edi
    edi = arg3

int32_t esi = *edi
*edi[1] = esi
*(*edi + 4) = edi[1]
*(arg1 + 8) -= 1
sub_403160(edi, 1, 0x10)
*arg2 = esi
return arg2
