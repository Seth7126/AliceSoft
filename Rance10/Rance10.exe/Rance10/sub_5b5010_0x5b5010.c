// 函数: sub_5b5010
// 地址: 0x5b5010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
int32_t edi = arg1[2]

if (edx == edi && (edi - edx) s>> 2 u< 1)
    int32_t ecx = *arg1
    int32_t edx_2 = (edx - ecx) s>> 2
    
    if (0x3fffffff - edx_2 u< 1)
        sub_6d0927("vector<T> too long")
        noreturn
    
    int32_t edx_3 = edx_2 + 1
    int32_t edi_2 = (edi - ecx) s>> 2
    int32_t ecx_1 = 0
    uint32_t eax_5 = edi_2 u>> 1
    
    if (0x3fffffff - eax_5 u>= edi_2)
        ecx_1 = eax_5 + edi_2
    
    if (ecx_1 u>= edx_3)
        edx_3 = ecx_1
    
    sub_5b49e0(arg1, edx_3)

int32_t* edx_4 = arg1[1]

if (edx_4 != 0)
    int32_t ecx_3 = *arg2
    *arg2 = 0
    *edx_4 = ecx_3

arg1[1] += 4
