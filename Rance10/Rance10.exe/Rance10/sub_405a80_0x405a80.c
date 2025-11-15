// 函数: sub_405a80
// 地址: 0x405a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi

if (arg2 == 0)
    esi = nullptr
else if (arg2 u< 0x1000)
    esi = sub_6e810c(arg2)
else
    if (arg2 + 0x23 u<= arg2)
        sub_6d08ed()
        noreturn
    
    int32_t eax_2 = sub_6e810c(arg2 + 0x23)
    esi = (eax_2 + 0x23) & 0xffffffe0
    *(esi - 4) = eax_2

char* edx = *arg1
sub_6feca0(esi, edx, arg1[1] - edx)
void* ecx_2 = *arg1
void* ebp_1 = arg1[1] - ecx_2

if (ecx_2 != 0)
    sub_403160(ecx_2, arg1[2] - ecx_2, 1)

arg1[2] = &esi[arg2]
void* result = esi + ebp_1
arg1[1] = result
*arg1 = esi
return result
