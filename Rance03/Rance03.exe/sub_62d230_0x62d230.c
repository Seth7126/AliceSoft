// 函数: sub_62d230
// 地址: 0x62d230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 9) != 0x10)
    return 

int32_t ecx = 0
void* eax_2 = &arg2[arg1[1]]
uint32_t ebx_4 = (eax_2 - arg2 + 1) u>> 1

if (arg2 u> eax_2)
    ebx_4 = 0

void* esi_1 = arg2

if (ebx_4 != 0)
    do
        eax_2.b = *arg2
        esi_1 += 1
        ecx += 1
        *(esi_1 - 1) = eax_2.b
        arg2 = &arg2[2]
    while (ecx u< ebx_4)

eax_2.b = *(arg1 + 0xa)
eax_2.b <<= 3
*(arg1 + 0xb) = eax_2.b
int32_t eax = zx.d(*(arg1 + 0xa)) * *arg1
*(arg1 + 9) = 8
arg1[1] = eax
