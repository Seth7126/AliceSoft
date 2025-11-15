// 函数: sub_5712e0
// 地址: 0x5712e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* eax
int32_t ecx
eax, ecx = sub_5713a0(arg2)
int32_t var_14_1 = ecx
int32_t var_18 = arg2
int32_t var_1c = ecx
int128_t* result = sub_5714d0(eax, arg1[1], *arg1, eax)
void* ecx_2 = *arg1
void* esi_1 = arg1[1] - ecx_2

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (arg1[2] - ecx_2) s>> 5, 0x20)

arg1[2] = &eax[arg2 * 2]
arg1[1] = (esi_1 & 0xffffffe0) + eax
*arg1 = eax
return result
