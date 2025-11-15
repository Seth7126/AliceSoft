// 函数: sub_67b900
// 地址: 0x67b900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0x70]
int32_t ebx = *(edi + 0x18)

if (arg1[0x13] != 0)
    arg1[0x13] = 2

if (arg2 == 0)
    bool cond:1_1 = arg1[0x13] == 2
    int32_t eax = sub_67b480
    *(edi + 8) = sub_4033e0
    
    if (cond:1_1)
        eax = sub_67b550
    
    *(edi + 4) = eax
    int32_t ebp_1 = arg1[0x1c]
    
    if (ebp_1 s< 1)
        *(*arg1 + 0x14) = 0x3a
        *(*arg1 + 0x18) = 1
        (**arg1)(arg1)
    
    if (ebp_1 s> 0x100)
        *(*arg1 + 0x14) = 0x3b
        *(*arg1 + 0x18) = 0x100
        (**arg1)(arg1)
    
    if (arg1[0x13] == 2)
        void* ebp_3 = (arg1[0x17] + 2) * 6
        
        if (*(edi + 0x20) == 0)
            *(edi + 0x20) = (*(arg1[1] + 4))(arg1, 1, ebp_3)
        
        _memset(*(edi + 0x20), 0, ebp_3)
        
        if (*(edi + 0x28) == 0)
            sub_67b840(arg1)
        
        *(edi + 0x24) = 0
else
    *(edi + 4) = sub_67a7a0
    *(edi + 8) = sub_67b8e0
    *(edi + 0x1c) = 1

if (*(edi + 0x1c) == 0)
    return 

for (int32_t i = 0; i s< 0x20; i += 1)
    _memset(*(ebx + (i << 2)), 0, 0x1000)

*(edi + 0x1c) = 0
