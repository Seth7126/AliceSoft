// 函数: sub_58d010
// 地址: 0x58d010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* eax
int32_t ecx
eax, ecx = sub_56e3a0(arg2)
int32_t var_14_1 = ecx
int32_t var_18 = arg2
int32_t var_1c = ecx
int128_t* result = sub_56e470(eax, arg1[1], *arg1, eax)
void* ecx_2 = *arg1
void* esi_1 = arg1[1] - ecx_2

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (arg1[2] - ecx_2) s>> 6, 0x40)

arg1[2] = &eax[arg2 * 4]
arg1[1] = (esi_1 & 0xffffffc0) + eax
*arg1 = eax
return result
