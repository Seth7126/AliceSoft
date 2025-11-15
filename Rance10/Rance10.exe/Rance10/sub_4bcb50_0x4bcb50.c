// 函数: sub_4bcb50
// 地址: 0x4bcb50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* ebx = arg2
int32_t* i = *(arg1 + 8)

for (int32_t edi = *(arg1 + 0xc); i != edi; i = &i[1])
    if (sub_4bc800(*i, ebx) != 0)
        return 1

void* eax_2 = sub_6e810c(0x14)
arg2 = eax_2
arg2 = eax_2
*(eax_2 + 4) = *(arg1 + 4)
*eax_2 = &partsengine::CSurfacePack::`vftable'
*(eax_2 + 8) = 0
*(eax_2 + 0xc) = 0
*(eax_2 + 0x10) = 0

if (sub_4bc800(eax_2, ebx) != 0)
    sub_42ca30(arg1 + 8, &arg2)
    return 1

(**eax_2)(1)
int32_t result
result.b = 0
return result
