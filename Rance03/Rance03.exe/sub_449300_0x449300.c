// 函数: sub_449300
// 地址: 0x449300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0xc) == 0)
    return 0

int32_t* eax_1 = *(arg1 + 8)
int32_t edx
int32_t* esi = *sub_4494a0(eax_1, edx, &arg2, *eax_1, eax_1, arg2)
int32_t* eax_3 = *(arg1 + 8)

if (esi == eax_3)
    return 0

int32_t* result = esi[8]

if (esi != *eax_3)
    sub_449390(arg1 + 8, &esi[2])
    sub_4493e0(arg1 + 8, &arg2, esi)

(**result)()
return result
