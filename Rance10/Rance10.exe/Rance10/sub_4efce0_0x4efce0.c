// 函数: sub_4efce0
// 地址: 0x4efce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_2 = arg1

if (*(arg1 + 0x218) == 0)
    *(arg1 + 0x90)
else
    void* edi_1 = data_7fcbbc
    char eax_1
    
    if (edi_1 != 0)
        eax_1 = sub_63c080(edi_1)
    
    int32_t eax_3
    
    if (edi_1 != 0 && eax_1 != 0)
        eax_3 = (*(**(edi_1 + 0x2c) + 0x50))()
    else
        eax_3 = 0
    
    *(arg1 + 0x90)
    long double x87_r0
    long double x87_r1
    sub_63ce00(_mm_cvtepi32_ps(zx.o(eax_3)), x87_r0, x87_r1)

int32_t result = sub_4eff50(arg1, *(arg1 + 0x124))
_mm_cvtepi32_ps(zx.o(result))
return result
