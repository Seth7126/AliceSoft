// 函数: sub_509e70
// 地址: 0x509e70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 8)

if (i != *(arg1 + 0xc))
    int32_t ebx
    ebx:1.b = arg2
    
    do
        if (ebx:1.b == 0 || *(arg1 + 0x40) != (i - *(arg1 + 8)) s>> 2)
            ebx.b = 0
        else
            ebx.b = 1
        
        void* ecx_4 = *(*i + 4)
        
        if (ecx_4 != 0)
            *(ecx_4 + 0x2c) = ebx.b
        
        i = &i[1]
    while (i != *(arg1 + 0xc))

return i
