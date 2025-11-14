// 函数: sub_5c1090
// 地址: 0x5c1090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

do
    int16_t* eax_1 = arg1[0x82]
    uint32_t edx_1 = zx.d(*eax_1)
    arg1[0x82] = &eax_1[1]
    
    if (edx_1 == 0x63)
        int32_t ecx = *(eax_1 + 2)
        arg1[0x83]
        arg1[0x82] = &eax_1[3]
        
        if (ecx == 0x14)
            break
        
        arg1[0x82] = &eax_1[1]
    
    sub_5c1100(arg1, edx_1)
while (arg1[0x86] == 0)

void* result
result.b = 1
return result
