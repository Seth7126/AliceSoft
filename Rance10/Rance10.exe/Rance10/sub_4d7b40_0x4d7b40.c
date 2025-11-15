// 函数: sub_4d7b40
// 地址: 0x4d7b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i_1 = arg1

if (*(arg1 + 8) != 5)
    return 0xffffffff

void** edi = *(arg1 + 0x58)
void* i = *edi
i_1 = i

for (; i != edi; i = i_1)
    void* ecx_1 = *(i + 0x14)
    
    if (*(ecx_1 + 0x20) != 0)
        void* ecx_2 = ecx_1 + 0x10
        int32_t* edx_1
        
        if (arg2[5] u< 0x10)
            edx_1 = arg2
        else
            edx_1 = *arg2
        
        void* ebp_1 = ecx_2 + 0x10
        
        if (*(ecx_2 + 0x14) u>= 0x10)
            ecx_2 = *ecx_2
        
        int32_t ebx_1 = arg2[4]
        int32_t eax_3 = ebx_1
        int32_t ebp_2 = *ebp_1
        
        if (ebp_2 u< ebx_1)
            eax_3 = ebp_2
        
        if (sub_406ac0(eax_3, edx_1, ecx_2, eax_3) == 0 && ebp_2 u>= ebx_1 && ebp_2 u<= ebx_1)
            return *(i + 0x10)
    
    sub_429080(&i_1)

return 0xffffffff
