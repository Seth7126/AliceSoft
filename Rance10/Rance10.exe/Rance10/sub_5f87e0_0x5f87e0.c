// 函数: sub_5f87e0
// 地址: 0x5f87e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = (*(*arg1 + 8))()
int32_t esi = 0
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(eax_1)
int32_t result = eax_2 - edx
int32_t ebp_1 = result s>> 1

if (ebp_1 s> 0)
    int32_t edi_1 = eax_1 - 1
    
    do
        result = (*(*arg1 + 0x54))(esi, edi_1)
        esi += 1
        edi_1 -= 1
    while (esi s< ebp_1)

return result
