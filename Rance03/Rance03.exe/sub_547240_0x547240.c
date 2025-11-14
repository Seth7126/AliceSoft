// 函数: sub_547240
// 地址: 0x547240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    void* eax = *i
    
    if (eax != 0 && *(eax + 8) != 0)
        int32_t ecx = *(eax + 4)
        
        if (ecx == 2 || ecx == 0xb)
            eax = *(eax + 0x18)
            
            if (eax != 0 && *(eax + 0x12b) != 0)
                sub_59b080(arg2 + 4, eax + 0x144)
