// 函数: sub_62f840
// 地址: 0x62f840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1

if (*(esi + 9) != 8 || *(esi + 8) == 3)
    return 

void* eax_1 = *(esi + 4)
void* edx = arg2 + eax_1
char* eax_2 = eax_1 + edx

while (eax_2 u> edx)
    arg1.b = *(edx - 1)
    edx -= 1
    eax_2[0xffffffff] = arg1.b
    eax_2 = &eax_2[0xfffffffe]
    *eax_2 = arg1.b

int32_t eax_3 = *(esi + 4)
*(esi + 9) = 0x10
*(esi + 4) = eax_3 * 2
int32_t eax
eax.b = *(esi + 0xa)
eax.b <<= 4
*(esi + 0xb) = eax.b
