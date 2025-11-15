// 函数: sub_5f05a0
// 地址: 0x5f05a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* eax
int32_t ecx
eax, ecx = sub_4ac4a0(arg2)
int32_t var_14_1 = ecx
int32_t var_18 = arg2
int32_t var_1c = ecx
int128_t* result = sub_5f0f40(eax, arg1[1], *arg1, eax)
void* ecx_2 = *arg1
void* esi_1 = arg1[1] - ecx_2

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (arg1[2] - ecx_2) s>> 4, 0x10)

arg1[2] = &eax[arg2]
arg1[1] = (esi_1 & 0xfffffff0) + eax
*arg1 = eax
return result
