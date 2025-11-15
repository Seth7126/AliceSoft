// 函数: sub_6221d0
// 地址: 0x6221d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebx_2 = *(arg1 + 0x10)

if ((((*(arg1 + 0xc)).b + __saved_ebx_2.b) & 3) == 0 && *(arg1 + 8) u<= (__saved_ebx_2 + 4) u>> 2)
    int32_t __saved_ebx_1 = __saved_ebx_2
    sub_622340(arg1)

*(arg1 + 0xc) &= (*(arg1 + 8) << 2) + 0xffffffff
int32_t edi_1 = *(arg1 + 0x10) + *(arg1 + 0xc)
int32_t ebx = ((*(arg1 + 8) - 1) & edi_1 u>> 2) << 2

if (*(ebx + *(arg1 + 4)) == 0)
    *(ebx + *(arg1 + 4)) = sub_6e810c(0x10)

int32_t* result = *(ebx + *(arg1 + 4))
int32_t* edx = &result[edi_1 & 3]

if (edx != 0)
    result = arg2
    int32_t ecx_5 = *result
    *result = 0
    *edx = ecx_5

*(arg1 + 0x10) += 1
return result
