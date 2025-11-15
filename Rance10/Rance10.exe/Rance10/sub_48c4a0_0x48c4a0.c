// 函数: sub_48c4a0
// 地址: 0x48c4a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
void* edx = nullptr
int32_t* var_4 = arg1
arg1[1] = arg2
*arg1 = 0
uint32_t i = arg2 - 1

if (arg2 != 1)
    do
        i u>>= 1
        edx = (edx << 1) + 1
    while (i != 0)

arg1[2] = edx + 1
arg1[3] = edx
int32_t ecx_1
ecx_1.b = mulu.dp.d(edx + 1, 4) u>> 0x20 != 0
int32_t var_10 = neg.d(ecx_1) | ((edx + 1) * 4)
int32_t* i_1 = sub_6e8787()
arg1[4] = i_1

for (void* edi = &i_1[arg1[2]]; i_1 != edi; i_1 = &i_1[1])
    *i_1 = *arg3

return arg1
