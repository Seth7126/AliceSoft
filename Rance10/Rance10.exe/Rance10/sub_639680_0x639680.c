// 函数: sub_639680
// 地址: 0x639680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[0x14]

if ((eax & 0x4000) != 0 && arg1[0x12].w == 0x5c)
    int16_t* edi = *arg1
    arg1[0x11] = 0x5c
    
    if (edi != arg1[2])
        if (*edi == 0x5c && sub_636a80(arg1) != 0)
            *arg1 = &edi[1]
        
        *arg1 += 2
    
    sub_635790(arg1)
    return 1

if ((eax & 0x20000) != 0 && sub_638400(arg1, 0) != 0)
    return 2

if (sub_638390(arg1) == 0)
    int32_t result
    result.b = sub_638780(arg1) != 0
    return result

if (arg1[0x11] == 0)
    return 1

sub_6d0967(2)
noreturn
