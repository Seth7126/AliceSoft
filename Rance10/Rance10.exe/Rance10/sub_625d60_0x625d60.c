// 函数: sub_625d60
// 地址: 0x625d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = sub_4cb3e0(arg2)
char* esi = *arg1
sub_6feca0(eax, esi, arg1[1] - esi)
void* ecx = *arg1
int32_t esi_3 = (arg1[1] - ecx) s>> 3

if (ecx != 0)
    sub_403160(ecx, (arg1[2] - ecx) s>> 3, 8)

arg1[2] = &eax[arg2 << 3]
void* result = &eax[esi_3 << 3]
arg1[1] = result
*arg1 = eax
return result
