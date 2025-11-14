// 函数: sub_6a8859
// 地址: 0x6a8859
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t* esi = arg2

if (esi == 0)
    _inconsistency()
    noreturn

char ebx = 0
int32_t i = 0
int32_t j

if (*esi s> 0)
    int32_t* ecx_1 = nullptr
    arg2 = nullptr
    
    do
        int32_t* eax_2 = *(*(arg1 + 0x1c) + 0xc)
        void* edx_1 = &eax_2[1]
        j = *eax_2
        void* var_c_1 = edx_1
        int32_t j_1 = j
        
        while (j s> 0)
            j = sub_6a8d5e(esi[1] + ecx_1, *edx_1, *(arg1 + 0x1c))
            ecx_1 = arg2
            
            if (j != 0)
                ebx = 1
                break
            
            j = j_1 - 1
            edx_1 = var_c_1 + 4
            j_1 = j
            var_c_1 = edx_1
        
        i += 1
        ecx_1 = &ecx_1[4]
        arg2 = ecx_1
    while (i s< *esi)

j.b = ebx
return j
