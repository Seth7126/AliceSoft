// 函数: sub_510850
// 地址: 0x510850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i_1 = arg1
int32_t* esi = *arg1
int32_t* i = *esi
i_1 = i

for (; i != esi; i = i_1)
    if (arg2 == i[0xa])
        i.b = 1
        return i
    
    sub_429080(&i_1)

i.b = 0
return i
