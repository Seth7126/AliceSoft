// 函数: sub_40ddd0
// 地址: 0x40ddd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = &arg1[9]
*arg1 = 0
arg1[1] = 0xffffffff
bool cond:0 = eax[5] u< 0x10
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
void* eax_1 = &arg1[0x13]
arg1[0xf] = 0xffffffff
arg1[0x10] = 0xffffffff
arg1[0x11] = 0
arg1[0x12] = 0
bool cond:1 = *(eax_1 + 0x14) u< 0x10
*(eax_1 + 0x10) = 0

if (not(cond:1))
    eax_1 = *eax_1

*eax_1 = 0
int32_t ebx = arg1[0x1a]

for (void* i = arg1[0x19]; i != ebx; i += 0x74)
    sub_405be0(i)

int32_t result = arg1[0x19]
arg1[0x1a] = result
arg1[0x1c].b = 0
return result
