// 函数: sub_437c80
// 地址: 0x437c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = sub_437ce0(arg2)
char* esi = *arg1
sub_6feca0(eax, esi, arg1[1] - esi)
void* ecx = *arg1
int32_t esi_3 = (arg1[1] - ecx) s>> 1

if (ecx != 0)
    sub_403160(ecx, (arg1[2] - ecx) s>> 1, 2)

arg1[2] = &eax[arg2 << 1]
void* result = &eax[esi_3 << 1]
arg1[1] = result
*arg1 = eax
return result
