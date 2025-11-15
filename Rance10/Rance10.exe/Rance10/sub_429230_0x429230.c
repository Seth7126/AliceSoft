// 函数: sub_429230
// 地址: 0x429230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi

if (arg2 != 0)
    if (arg2 u> 0x3fffffff)
        sub_6d08ed()
        noreturn
    
    int32_t eax_1 = arg2 << 2
    
    if (eax_1 u< 0x1000)
        esi = sub_6e810c(eax_1)
    else
        if (eax_1 + 0x23 u<= eax_1)
            sub_6d08ed()
            noreturn
        
        int32_t eax_2 = sub_6e810c(eax_1 + 0x23)
        esi = (eax_2 + 0x23) & 0xffffffe0
        *(esi - 4) = eax_2
else
    esi = nullptr

char* edx = *arg1
sub_6feca0(esi, edx, arg1[1] - edx)
void* ecx_3 = *arg1
int32_t ebp_2 = (arg1[1] - ecx_3) s>> 2

if (ecx_3 != 0)
    sub_403160(ecx_3, (arg1[2] - ecx_3) s>> 2, 4)

arg1[2] = &esi[arg2 << 2]
void* result = &esi[ebp_2 << 2]
arg1[1] = result
*arg1 = esi
return result
