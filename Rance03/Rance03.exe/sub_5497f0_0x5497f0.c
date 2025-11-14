// 函数: sub_5497f0
// 地址: 0x5497f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t esi = arg3
int32_t ebx = 0
void* result

if (esi u> 5)
label_549825:
    var_4 = nullptr
    
    if (esi == 0)
    label_549841:
        void* eax_2 = *(*(arg1 + 0xd4) + 0x2c)
        
        if (eax_2 != 0)
            var_4 = *(eax_2 + 0x10)
    else if (esi s> 3 && esi s<= 5)
        goto label_549841
    
    arg3 = 0
    
    if (esi == 0)
    label_549865:
        
        if (*(arg1 + 0x21) != 0)
            void* eax_5 = *(*(arg1 + 0xd4) + 0x30)
            
            if (eax_5 != 0)
                arg3 = *(eax_5 + 0x10)
    else if (esi s> 3 && esi s<= 5)
        goto label_549865
    
    int32_t ebp_1 = 0
    
    if (esi == 0)
    label_549890:
        void* ecx_1 = *(arg1 + 0xd8)
        
        if (ecx_1 != 0)
            void* eax_7 = sub_5487c0(ecx_1, *(arg1 + 0xb8))
            
            if (eax_7 != 0)
                ebp_1 = *(eax_7 + 0x10)
    else if (esi s> 3 && esi s<= 5)
        goto label_549890
    
    int32_t ecx_2 = 0
    
    if (esi == 0)
    label_5498bc:
        void* eax_8 = *(arg1 + 0xd8)
        
        if (eax_8 != 0)
            void* eax_9 = *(eax_8 + 0x30)
            
            if (eax_9 != 0)
                ecx_2 = *(eax_9 + 0x10)
    else if (esi s> 3 && esi s<= 5)
        goto label_5498bc
    
    *(arg2 + 0x84) = ecx_2
    *(arg2 + 0x7c) = ebp_1
    *(arg2 + 0x78) = ebx
    *(arg2 + 0x94) = 0
    *(arg2 + 0x80) = arg3
    *(arg2 + 0x88) = 0
    *(arg2 + 0x98) = 0
    *(arg2 + 0x8c) = 0
    *(arg2 + 0x90) = var_4
    *(arg2 + 0x9a) = 0
else
    result = sub_5487c0(*(arg1 + 0xd4), *(arg1 + 0xb8))
    
    if (result != 0)
        ebx = *(result + 0x10)
        
        if (ebx != 0)
            goto label_549825

result.b = 1
return result
