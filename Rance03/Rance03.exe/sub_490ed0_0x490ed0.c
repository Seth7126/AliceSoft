// 函数: sub_490ed0
// 地址: 0x490ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
int32_t edx = arg2
int32_t* eax

for (int32_t* i = *(arg1 + 0x1c); i != *(arg1 + 0x20); i = &i[1])
    eax = *i
    
    if (*(eax + 0x29) != 0 && eax[8] != 0)
        sub_490ed0(edx)
        edx = arg2

for (void** i_1 = *(arg1 + 0x34); i_1 != *(arg1 + 0x38); i_1 = &i_1[1])
    void* eax_1 = *i_1
    eax = sub_4938b0(*(eax_1 + 0x10), edx)
    
    if (eax != 0)
        void* eax_2 = eax_1
        int32_t* ecx_2 = *(eax_2 + 0x18)
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 4))()
            eax_2 = eax_1
        
        *(eax_2 + 0x18) = eax
        (**eax)()
    
    edx = arg2
