// 函数: sub_622160
// 地址: 0x622160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_18
void var_c
int32_t* ecx
int32_t* eax_1 = sub_622260(sub_44a580(ecx, &var_c), &var_18, arg1)
int32_t* esi = *eax_1

if (esi != 0)
    esi = *esi

int32_t edx = eax_1[2]
return *(esi[1] + ((edx u>> 2 & (esi[2] - 1)) << 2)) + ((edx & 3) << 2)
