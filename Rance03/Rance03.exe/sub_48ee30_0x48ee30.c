// 函数: sub_48ee30
// 地址: 0x48ee30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

for (int32_t* i = *(arg1 + 0x14); i != *(arg1 + 0x18); i = &i[1])
    void* ebx_1 = *(*i + 4)
    void* ebx_2
    
    if (ebx_1 != 0)
        ebx_2 = *(ebx_1 + 8)
    else
        ebx_2 = 0xffffffff
    
    void** eax = arg2[1]
    var_4 = ebx_2
    int32_t ecx
    
    if (&var_4 u< eax)
        ecx = *arg2
    
    if (&var_4 u>= eax || ecx u> &var_4)
        if (eax == arg2[2])
            sub_415950(arg2, 1)
        
        eax = arg2[1]
        
        if (eax != 0)
            *eax = ebx_2
    else
        if (eax == arg2[2])
            sub_415950(arg2, 1)
        
        void*** ecx_2 = arg2[1]
        
        if (ecx_2 != 0)
            *ecx_2 = *(*arg2 + ((&var_4 - ecx) s>> 2 << 2))
    
    arg2[1] += 4
