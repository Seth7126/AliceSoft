// 函数: sub_68c510
// 地址: 0x68c510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 u<= 0xd)
    uint32_t eax_1 = zx.d(lookup_table_68c650[arg2])
    void var_14
    
    switch (eax_1)
        case 0
            int32_t* edx_1 = arg1[1]
            void* ecx_1 = *arg1
            
            if (ecx_1 != edx_1)
                int32_t var_c_1 = 0
                sub_68c8a0(eax_1, edx_1, ecx_1, var_14)
        case 1
            int32_t* edx_2 = arg1[1]
            void* ecx_2 = *arg1
            
            if (ecx_2 != edx_2)
                int32_t var_c_2 = 0
                sub_68c980(eax_1, edx_2, ecx_2, var_14)
        case 2
            int32_t* edx_3 = arg1[1]
            void* ecx_3 = *arg1
            
            if (ecx_3 != edx_3)
                int32_t var_c_3 = 0
                sub_68ca60(eax_1, edx_3, ecx_3, var_14)
        case 3
            int32_t* edx_4 = arg1[1]
            void* ecx_4 = *arg1
            
            if (ecx_4 != edx_4)
                int32_t var_c_4 = 0
                sub_68cb40(eax_1, edx_4, ecx_4, var_14)
        case 4
            int32_t* edx_5 = arg1[1]
            void* ecx_5 = *arg1
            
            if (ecx_5 != edx_5)
                int32_t var_c_5 = 0
                sub_68cc20(eax_1, edx_5, ecx_5, var_14)
        case 5
            int32_t* edx_6 = arg1[1]
            void* ecx_6 = *arg1
            
            if (ecx_6 != edx_6)
                int32_t var_c_6 = 0
                sub_68cd00(eax_1, edx_6, ecx_6, var_14)
        case 6
            int32_t* edx_7 = arg1[1]
            void* ecx_7 = *arg1
            
            if (ecx_7 != edx_7)
                int32_t var_c_7 = 0
                sub_68cde0(eax_1, edx_7, ecx_7, var_14)

int32_t result = arg2 - 7

if (result u<= 6)
    void* esi_1 = arg1[1]
    
    for (void* i = *arg1; i != esi_1; i += 0x44)
        esi_1 -= 0x44
        
        if (i == esi_1)
            break
        
        result = sub_68ea50(i, esi_1)

return result
