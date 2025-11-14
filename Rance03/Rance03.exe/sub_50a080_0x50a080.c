// 函数: sub_50a080
// 地址: 0x50a080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 8)

if (i != *(arg1 + 0xc))
    int32_t ebx
    ebx.b = arg3
    
    do
        void* ecx_1 = *(*i + 4)
        
        if (ecx_1 != 0)
            *(ecx_1 + 0xbc) = arg2
        
        void* ecx_3 = *(*i + 4)
        
        if (ecx_3 != 0)
            *(ecx_3 + 0xc1) = ebx.b
        
        i = &i[1]
    while (i != *(arg1 + 0xc))

return i
