// 函数: sub_620840
// 地址: 0x620840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
void* eax = sub_4039d0(1)
*arg1 = eax
arg1[1] = eax
arg1[2] = *arg1 + 1
char* edx = *arg1
int16_t ecx = sx.w(*arg2)
*edx = (ecx << 8 | zx.w(ecx.b)).b
arg1[1] = &edx[1]
return &edx[1]
