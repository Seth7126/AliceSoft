// 函数: sub_5bffa0
// 地址: 0x5bffa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1

while (true)
    eax_1 = arg1[0x86]
    
    if (eax_1 == 0)
        do
            int16_t* eax_5 = arg1[0x82]
            uint32_t ecx_1 = zx.d(*eax_5)
            arg1[0x82] = &eax_5[1]
            sub_5c1100(arg1, ecx_1)
        while (arg1[0x86] == 0)
    else if (eax_1 == 1)
        sub_5c0fe0(arg1)
    else
        if (eax_1 == 2)
            break

arg1[0x85].b = (eax_1 - 1).b - 1
arg1[0x86] = 2
return 1
