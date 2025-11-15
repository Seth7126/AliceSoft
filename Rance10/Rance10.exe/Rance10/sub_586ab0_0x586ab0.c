// 函数: sub_586ab0
// 地址: 0x586ab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax
int32_t ecx
eax, ecx = sub_4cb3e0(arg2)
int32_t var_14_1 = ecx
int32_t var_18 = arg2
int32_t var_1c = ecx
sub_423080(eax, arg1[1], *arg1, eax)
void* ecx_2 = *arg1
int32_t ebx_2 = (arg1[1] - ecx_2) s>> 3

if (ecx_2 != 0)
    sub_403160(ecx_2, (arg1[2] - ecx_2) s>> 3, 8)

arg1[2] = &eax[arg2 * 2]
void* result = &eax[ebx_2 * 2]
arg1[1] = result
*arg1 = eax
return result
