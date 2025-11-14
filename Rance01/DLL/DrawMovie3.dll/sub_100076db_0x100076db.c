// 函数: sub_100076db
// 地址: 0x100076db
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg2 == 0 || arg1 == 0)
    return 0

void* esi = *arg1

if (esi != arg2)
    *arg1 = arg2
    sub_100075b3(arg2)
    
    if (esi != 0)
        sub_10007642(esi)
        
        if (*esi == 0 && esi != 0x10020460)
            sub_1000746a(esi)

return arg2
