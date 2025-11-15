// 函数: sub_4cb370
// 地址: 0x4cb370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
int32_t* eax
int32_t ecx
eax, ecx = sub_4cb3e0(arg2)
int32_t var_18_1 = ecx
int32_t var_1c = 0
int32_t var_20 = ecx
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
