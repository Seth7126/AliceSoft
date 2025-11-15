// 函数: sub_610290
// 地址: 0x610290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1

while (true)
    eax_1 = arg1[0x7b]
    
    if (eax_1 == 0)
        do
            int16_t* eax_5 = arg1[0x74]
            uint32_t var_8_1 = zx.d(*eax_5)
            arg1[0x74] = &eax_5[1]
            sub_611160(arg1)
        while (arg1[0x7b] == 0)
    else if (eax_1 == 1)
        sub_611070(arg1)
    else
        if (eax_1 == 2)
            break

arg1[0x7a].b = (eax_1 - 1).b - 1
arg1[0x7b] = 2
return 1
