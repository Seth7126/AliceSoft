// 函数: sub_4a8fe0
// 地址: 0x4a8fe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t ebx = arg2
int32_t eax = *(arg1 + 0x6c)
void* ecx = arg1 + 0x58
int32_t ebp = *(ecx + 0x10)
void* edx

if (eax u< 0x10)
    edx = ecx
else
    edx = *ecx

if (eax u>= 0x10)
    ecx = *ecx

uint32_t var_14 = arg2
sub_468ff0(ebx + 4, *(ebx + 8), ecx, edx + ebp)
arg2.b = 0
sub_414b60(ebx + 4, &arg2)

if (sub_4a57f0(arg1 + 4, ebx) != 0)
    void* eax_3 = *(arg1 + 0x54)
    void* eax_4
    
    if (eax_3 != 0)
        eax_4 = *(eax_3 + 4)
    
    int32_t eax_5
    
    if (eax_3 == 0 || eax_4 == 0)
        eax_5 = 0
    else
        eax_5 = *(eax_4 + 0x2c)
    
    sub_468ec0(ebx, eax_5)
    void* ecx_5 = *(arg1 + 0x44)
    
    if (ecx_5 != 0 && sub_4a8ea0(ecx_5, ebx) != 0)
        sub_468ec0(ebx, (*(arg1 + 0x4c) - *(arg1 + 0x48)) s>> 2)
        void** esi_1 = *(arg1 + 0x48)
        
        if (esi_1 == *(arg1 + 0x4c))
            return 1
        
        while (true)
            void* ecx_7 = *esi_1
            
            if (ecx_7 == 0)
                return 0
            
            if (sub_4a8ea0(ecx_7, ebx) == 0)
                return 0
            
            esi_1 = &esi_1[1]
            
            if (esi_1 == *(arg1 + 0x4c))
                return 1

return 0
