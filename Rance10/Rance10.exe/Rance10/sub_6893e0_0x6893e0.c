// 函数: sub_6893e0
// 地址: 0x6893e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi

if (arg2 != 0)
    if (arg2 u> 0x9249249)
        sub_6d08ed()
        noreturn
    
    int32_t eax_3 = arg2 * 0x1c
    
    if (eax_3 u< 0x1000)
        esi = sub_6e810c(eax_3)
    else
        if (eax_3 + 0x23 u<= eax_3)
            sub_6d08ed()
            noreturn
        
        int32_t eax_4 = sub_6e810c(eax_3 + 0x23)
        esi = (eax_4 + 0x23) & 0xffffffe0
        *(esi - 4) = eax_4
else
    esi = nullptr

char* edx = *arg1
sub_6feca0(esi, edx, arg1[1] - edx)
int32_t ecx_4 = arg1[1] - *arg1
int32_t eax_7 = *arg1

if (eax_7 != 0)
    sub_403160(*arg1, (arg1[2] - eax_7) s/ 0x1c, 0x1c)

arg1[2] = &esi[arg2 * 0x1c]
void* result = &esi[ecx_4 s/ 0x1c * 0x1c]
arg1[1] = result
*arg1 = esi
return result
