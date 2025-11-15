// 函数: sub_404670
// 地址: 0x404670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = sub_4046d0(arg2)
char* esi = *arg1
sub_6feca0(eax, esi, arg1[1] - esi)
void* ecx = *arg1
int32_t esi_3 = (arg1[1] - ecx) s>> 2

if (ecx != 0)
    sub_403160(ecx, (arg1[2] - ecx) s>> 2, 4)

arg1[2] = &eax[arg2 << 2]
void* result = &eax[esi_3 << 2]
arg1[1] = result
*arg1 = eax
return result
