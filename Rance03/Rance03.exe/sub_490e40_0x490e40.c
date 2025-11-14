// 函数: sub_490e40
// 地址: 0x490e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 0x10)

if (result != 0)
    *(arg1 + 0x40) = 1
    void* eax = *(result + 0x3c)
    int32_t eax_1
    
    if (eax != 0)
        eax_1 = *(eax + 0x14)
    else
        eax_1 = 0xffffffff
    
    int32_t arg_4
    bool cond:0_1 = eax_1 s>= arg_4
    int32_t var_8
    int32_t* ecx = &var_8
    var_8 = eax_1
    
    if (cond:0_1)
        ecx = &arg_4
    
    void* var_4 = nullptr
    void** eax_2 = &var_4
    *(arg1 + 0x48) = 0
    
    if (*ecx s> 0)
        eax_2 = ecx
    
    result = *eax_2
    *(arg1 + 0x44) = result

return result
