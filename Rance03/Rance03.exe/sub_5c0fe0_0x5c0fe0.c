// 函数: sub_5c0fe0
// 地址: 0x5c0fe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = 0
char result

while (true)
    while (arg1[0x87].b == 0)
        result = (**arg1[5])()
        
        if (result == 0)
            goto label_5c106a
    
    edi += 1
    
    if (edi s>= 0x20)
        result = (**arg1[5])()
        
        if (result == 0)
            break
        
        edi = 0
    
    if (arg1[0x85].b != 0)
        int16_t* eax_5 = arg1[0x82]
        uint32_t ecx_2 = zx.d(*eax_5)
        arg1[0x82] = &eax_5[1]
        sub_5c1100(arg1, ecx_2)
    
    (**arg1[0x6e])(arg1[0x82] - arg1[0x83])
    
    if (*(arg1 + 0x21d) != 0)
        arg1[0x87].b = 0

label_5c106a:
arg1[0x86] = 2
arg1[0x86] = 2
return result
