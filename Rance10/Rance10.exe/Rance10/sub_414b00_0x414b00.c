// 函数: sub_414b00
// 地址: 0x414b00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** eax = &arg1[0xb]
*arg1 = 0
arg1[1] = 0xffffffff
bool cond:0 = eax[5] u< 0x10
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
void* eax_1 = &arg1[0x15]
arg1[0x11] = 0xffffffff
arg1[0x12] = 0xffffffff
arg1[0x13] = 0
arg1[0x14] = 0
bool cond:1 = *(eax_1 + 0x14) u< 0x10
*(eax_1 + 0x10) = 0

if (not(cond:1))
    eax_1 = *eax_1

*eax_1 = 0
int32_t ebx = arg1[0x1c]

for (void* i = arg1[0x1b]; i != ebx; i += 0x7c)
    sub_40ad50(i)

int32_t result = arg1[0x1b]
arg1[0x1c] = result
arg1[0x1e].b = 0
return result
