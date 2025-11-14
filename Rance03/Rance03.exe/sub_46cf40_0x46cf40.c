// 函数: sub_46cf40
// 地址: 0x46cf40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp

if (*(arg1 + 4) != 0)
    int32_t* i = *(arg1 + 8)
    uint32_t ebx
    ebx.b = 0
    
    for (; i != *(arg1 + 0xc); i = &i[1])
        void* ecx = *i
        char var_9 = 0
        
        if (sub_46d390(ecx, &var_9) != 0)
            ebx = zx.d(ebx.b)
            
            if (var_9 != 0)
                ebx = 1
    
    int32_t* ecx_1 = *(arg1 + 0x14)
    
    if (ecx_1 != 0 && ebx.b != 0)
        (**ecx_1)(1)
    
    void* ecx_2 = *(arg1 + 0x18)
    
    if (ecx_2 != 0 && ebx.b != 0)
        sub_46d950(ecx_2)

var_4
return 1
