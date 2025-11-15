// 函数: sub_59f570
// 地址: 0x59f570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3
int32_t* ebp = arg2
*ebp = 0x7fffffff
*ebx = 0x80000000
int32_t edi = *(arg1 + 8)

for (void* i = *(arg1 + 4); i != edi; i += 0x34c)
    sub_578d20(i, &arg2, &arg3)
    int32_t* eax_1 = arg2
    
    if (*ebp s> eax_1)
        *ebp = eax_1
    
    int32_t* eax = arg3
    
    if (*ebx s< eax)
        *ebx = eax

if (*ebp == 0x7fffffff)
    *ebp = 0

if (*ebx == 0x80000000)
    *ebx = 0
