// 函数: sub_633190
// 地址: 0x633190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_2
int32_t eax_1 = __security_cookie ^ &i_2
uint32_t eax_2 = arg4

if (arg2 != 0 && arg3 != 0)
    int32_t j_8 = *((eax_2 << 2) + &data_6f1a1c)
    int32_t* ecx = *arg3
    int32_t ebp_2 = ecx * *((eax_2 << 2) + &data_6f1a1c)
    uint32_t edi_1 = zx.d(*(arg3 + 0xb))
    int32_t* i
    int32_t* i_5
    
    if (edi_1 == 1)
        int32_t* i_8 = ((ecx - 1) u>> 3) + arg2
        char* edi_11 = ((ebp_2 - 1) u>> 3) + arg2
        i_5 = i_8
        int32_t var_20_3
        void* edx_8
        void* ebp_8
        void* esi_11
        
        if ((arg5 & 0x10000) == 0)
            i_2 = 7
            var_20_3 = 1
            edx_8 = 7 - ((ecx - 1) & 7)
            esi_11 = 7 - ((ebp_2 - 1) & 7)
            ebp_8 = nullptr
        else
            i_2 = 0
            var_20_3 = 0xffffffff
            edx_8 = (ecx - 1) & 7
            ebp_8 = 7
            esi_11 = (ebp_2 - 1) & 7
        
        void* var_24_3 = edx_8
        int32_t* i_4 = nullptr
        
        if (ecx != 0)
            do
                i:1.b = *i_8
                ecx.b = edx_8.b
                i:1.b u>>= ecx.b
                i:1.b &= 1
                
                if (j_8 s> 0)
                    int32_t j_7 = j_8
                    int32_t j
                    
                    do
                        i.b = i:1.b
                        i.b <<= esi_11.b
                        *edi_11 = ((0x7f7f s>> (7 - esi_11.b)).b & *edi_11) | i.b
                        
                        if (esi_11 != i_2)
                            esi_11 += var_20_3
                        else
                            esi_11 = ebp_8
                            edi_11 -= 1
                        
                        j = j_7
                        j_7 -= 1
                    while (j != 1)
                    edx_8 = var_24_3
                    i_8 = i_5
                
                if (edx_8 != i_2)
                    edx_8 += var_20_3
                else
                    i_8 -= 1
                    edx_8 = ebp_8
                    i_5 = i_8
                
                i = i_4 + 1
                var_24_3 = edx_8
                i_4 = i
            while (i u< *arg3)
    else if (edi_1 == 2)
        int32_t* i_6 = ((ecx - 1) u>> 2) + arg2
        char* edi_8 = ((ebp_2 - 1) u>> 2) + arg2
        i_5 = i_6
        int32_t var_20_2
        void* edx_4
        void* ebp_7
        void* esi_8
        
        if ((arg5 & 0x10000) == 0)
            i_2 = 6
            var_20_2 = 2
            edx_4 = (3 - ((ecx - 1) & 3)) * 2
            esi_8 = (3 - ((ebp_2 - 1) & 3)) * 2
            ebp_7 = nullptr
        else
            i_2 = 0
            var_20_2 = 0xfffffffe
            edx_4 = ((ecx << 1) + 0xffffffff) & 6
            ebp_7 = 6
            esi_8 = ((ebp_2 << 1) + 0xffffffff) & 6
        
        void* var_24_2 = edx_4
        int32_t* i_3 = nullptr
        
        if (ecx != 0)
            int32_t* i_7 = i_6
            
            do
                i:1.b = *i_7
                ecx.b = edx_4.b
                i:1.b u>>= ecx.b
                i:1.b &= 3
                
                if (j_8 s> 0)
                    int32_t j_6 = j_8
                    int32_t j_1
                    
                    do
                        i.b = i:1.b
                        i.b <<= esi_8.b
                        *edi_8 = ((0x3f3f s>> (6 - esi_8.b)).b & *edi_8) | i.b
                        
                        if (esi_8 != i_2)
                            esi_8 += var_20_2
                        else
                            esi_8 = ebp_7
                            edi_8 -= 1
                        
                        j_1 = j_6
                        j_6 -= 1
                    while (j_1 != 1)
                    edx_4 = var_24_2
                    i_7 = i_5
                
                if (edx_4 != i_2)
                    edx_4 += var_20_2
                else
                    i_7 -= 1
                    edx_4 = ebp_7
                    i_5 = i_7
                
                i = i_3 + 1
                var_24_2 = edx_4
                i_3 = i
            while (i u< *arg3)
    else if (edi_1 == 4)
        char* ebx_3 = ((ecx - 1) u>> 1) + arg2
        char* edi_5 = ((ebp_2 - 1) u>> 1) + arg2
        char* var_1c_1 = ebx_3
        int32_t var_20_1
        void* edx_1
        void* ebp_6
        void* esi_6
        
        if ((arg5 & 0x10000) == 0)
            var_20_1 = 4
            i_2 = 4
            edx_1 = 4 - (((ecx - 1) & 1) << 2)
            esi_6 = 4 - (((ebp_2 - 1) & 1) << 2)
            ebp_6 = nullptr
        else
            var_20_1 = 0
            i_2 = 0xfffffffc
            edx_1 = (0xffffffff - (ecx << 2)) & 4
            esi_6 = (0xffffffff - (ebp_2 << 2)) & 4
            ebp_6 = 4
        
        void* var_24_1 = edx_1
        i_5 = nullptr
        
        if (ecx != 0)
            do
                i:1.b = *ebx_3
                ecx.b = edx_1.b
                i:1.b u>>= ecx.b
                i:1.b &= 0xf
                
                if (j_8 s> 0)
                    int32_t j_5 = j_8
                    int32_t j_2
                    
                    do
                        i.b = i:1.b
                        i.b <<= esi_6.b
                        *edi_5 = ((0xf0f s>> (4 - esi_6.b)).b & *edi_5) | i.b
                        
                        if (esi_6 != var_20_1)
                            esi_6 += i_2
                        else
                            esi_6 = ebp_6
                            edi_5 -= 1
                        
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
                    edx_1 = var_24_1
                    ebx_3 = var_1c_1
                
                if (edx_1 != var_20_1)
                    edx_1 += i_2
                else
                    ebx_3 -= 1
                    edx_1 = ebp_6
                    var_1c_1 = ebx_3
                
                i = i_5 + 1
                var_24_1 = edx_1
                i_5 = i
            while (i u< *arg3)
    else
        uint32_t edi_2 = edi_1 u>> 3
        int32_t i_1 = 0
        i_2 = 0
        int32_t* ebp_5 = (ecx - 1) * edi_2 + arg2
        int32_t* esi_4 = (ebp_2 - 1) * edi_2 + arg2
        
        if (ecx != 0)
            do
                sub_69d850(&i_5, ebp_5, edi_2)
                
                if (j_8 s> 0)
                    int32_t j_4 = j_8
                    int32_t j_3
                    
                    do
                        sub_69d850(esi_4, &i_5, edi_2)
                        esi_4 -= edi_2
                        j_3 = j_4
                        j_4 -= 1
                    while (j_3 != 1)
                    i_1 = i_2
                
                i_1 += 1
                ebp_5 -= edi_2
                i_2 = i_1
            while (i_1 u< *arg3)
    i.b = *(arg3 + 0xb)
    *arg3 = ebp_2
    uint32_t eax_20 = zx.d(i.b)
    
    if (i.b u>= 8)
        int32_t eax_22 = (eax_20 u>> 3) * ebp_2
        arg3[1] = eax_22
        sub_69a5bc(eax_1 ^ &i_2)
        return eax_22
    
    eax_2 = (eax_20 * ebp_2 + 7) u>> 3
    arg3[1] = eax_2

sub_69a5bc(eax_1 ^ &i_2)
return eax_2
