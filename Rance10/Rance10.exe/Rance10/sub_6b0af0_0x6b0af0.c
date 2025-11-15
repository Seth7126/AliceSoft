// 函数: sub_6b0af0
// 地址: 0x6b0af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_28
int32_t eax_1 = __security_cookie ^ &var_28
uint32_t eax_2 = arg4

if (arg2 != 0 && arg3 != 0)
    int32_t j_8 = *((eax_2 << 2) + &data_77438c)
    int32_t* ecx = *arg3
    int32_t ebp_2 = ecx * *((eax_2 << 2) + &data_77438c)
    uint32_t edi_1 = zx.d(*(arg3 + 0xb))
    int32_t* i
    int32_t* i_5
    
    if (edi_1 == 1)
        int32_t* i_7 = ((ecx - 1) u>> 3) + arg2
        char* edi_11 = ((ebp_2 - 1) u>> 3) + arg2
        i_5 = i_7
        int32_t var_24_3
        int32_t var_20_3
        void* edx_11
        void* ebp_8
        void* esi_14
        
        if ((arg5 & 0x10000) == 0)
            var_24_3 = 7
            var_20_3 = 1
            edx_11 = 7 - ((ecx - 1) & 7)
            esi_14 = 7 - ((ebp_2 - 1) & 7)
            ebp_8 = nullptr
        else
            var_24_3 = 0
            var_20_3 = 0xffffffff
            edx_11 = (ecx - 1) & 7
            ebp_8 = 7
            esi_14 = (ebp_2 - 1) & 7
        
        var_28 = edx_11
        int32_t* i_4 = nullptr
        
        if (ecx != 0)
            do
                i:1.b = *i_7
                ecx.b = edx_11.b
                i:1.b u>>= ecx.b
                i:1.b &= 1
                
                if (j_8 s> 0)
                    int32_t j_7 = j_8
                    int32_t j
                    
                    do
                        i.b = i:1.b
                        i.b <<= esi_14.b
                        *edi_11 = ((0x7f7f s>> (7 - esi_14.b)).b & *edi_11) | i.b
                        
                        if (esi_14 != var_24_3)
                            esi_14 += var_20_3
                        else
                            esi_14 = ebp_8
                            edi_11 -= 1
                        
                        j = j_7
                        j_7 -= 1
                    while (j != 1)
                    edx_11 = var_28
                    i_7 = i_5
                
                if (edx_11 != var_24_3)
                    edx_11 += var_20_3
                else
                    i_7 -= 1
                    edx_11 = ebp_8
                    i_5 = i_7
                
                i = i_4 + 1
                var_28 = edx_11
                i_4 = i
            while (i u< *arg3)
    else if (edi_1 == 2)
        int32_t* i_6 = ((ecx - 1) u>> 2) + arg2
        char* edi_8 = ((ebp_2 - 1) u>> 2) + arg2
        i_5 = i_6
        int32_t var_24_2
        int32_t var_20_2
        void* edx_7
        void* ebp_7
        void* esi_11
        
        if ((arg5 & 0x10000) == 0)
            var_24_2 = 6
            var_20_2 = 2
            edx_7 = (3 - ((ecx - 1) & 3)) * 2
            esi_11 = (3 - ((ebp_2 - 1) & 3)) * 2
            ebp_7 = nullptr
        else
            var_24_2 = 0
            var_20_2 = 0xfffffffe
            edx_7 = ((ecx << 1) + 0xffffffff) & 6
            ebp_7 = 6
            esi_11 = ((ebp_2 << 1) + 0xffffffff) & 6
        
        var_28 = edx_7
        int32_t* i_3 = nullptr
        
        if (ecx != 0)
            do
                i:1.b = *i_6
                ecx.b = edx_7.b
                i:1.b u>>= ecx.b
                i:1.b &= 3
                
                if (j_8 s> 0)
                    int32_t j_6 = j_8
                    int32_t j_1
                    
                    do
                        i.b = i:1.b
                        i.b <<= esi_11.b
                        *edi_8 = ((0x3f3f s>> (6 - esi_11.b)).b & *edi_8) | i.b
                        
                        if (esi_11 != var_24_2)
                            esi_11 += var_20_2
                        else
                            esi_11 = ebp_7
                            edi_8 -= 1
                        
                        j_1 = j_6
                        j_6 -= 1
                    while (j_1 != 1)
                    edx_7 = var_28
                    i_6 = i_5
                
                if (edx_7 != var_24_2)
                    edx_7 += var_20_2
                else
                    i_6 -= 1
                    edx_7 = ebp_7
                    i_5 = i_6
                
                i = i_3 + 1
                var_28 = edx_7
                i_3 = i
            while (i u< *arg3)
    else if (edi_1 == 4)
        char* ebx_3 = ((ecx - 1) u>> 1) + arg2
        char* edi_5 = ((ebp_2 - 1) u>> 1) + arg2
        char* var_1c_1 = ebx_3
        int32_t var_24_1
        int32_t var_20_1
        void* edx_4
        void* ebp_6
        void* esi_9
        
        if ((arg5 & 0x10000) == 0)
            var_20_1 = 4
            var_24_1 = 4
            edx_4 = 4 - (((ecx - 1) & 1) << 2)
            esi_9 = 4 - (((ebp_2 - 1) & 1) << 2)
            ebp_6 = nullptr
        else
            var_20_1 = 0
            var_24_1 = 0xfffffffc
            edx_4 = not.d(neg.d(ecx) << 2) & 4
            ebp_6 = 4
            esi_9 = not.d(neg.d(ebp_2) << 2) & 4
        
        var_28 = edx_4
        i_5 = nullptr
        
        if (ecx != 0)
            do
                i:1.b = *ebx_3
                ecx.b = edx_4.b
                i:1.b u>>= ecx.b
                i:1.b &= 0xf
                
                if (j_8 s> 0)
                    int32_t j_5 = j_8
                    int32_t j_2
                    
                    do
                        i.b = i:1.b
                        i.b <<= esi_9.b
                        *edi_5 = ((0xf0f s>> (4 - esi_9.b)).b & *edi_5) | i.b
                        
                        if (esi_9 != var_20_1)
                            esi_9 += var_24_1
                        else
                            esi_9 = ebp_6
                            edi_5 -= 1
                        
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
                    edx_4 = var_28
                    ebx_3 = var_1c_1
                
                if (edx_4 != var_20_1)
                    edx_4 += var_24_1
                else
                    ebx_3 -= 1
                    edx_4 = ebp_6
                    var_1c_1 = ebx_3
                
                i = i_5 + 1
                var_28 = edx_4
                i_5 = i
            while (i u< *arg3)
    else
        uint32_t edi_2 = edi_1 u>> 3
        int32_t i_1 = 0
        int32_t i_2 = 0
        char* ebp_5 = (ecx - 1) * edi_2 + arg2
        char* esi_4 = (ebp_2 - 1) * edi_2 + arg2
        
        if (ecx != 0)
            do
                sub_700660(&i_5, ebp_5, edi_2)
                
                if (j_8 s> 0)
                    int32_t j_4 = j_8
                    int32_t j_3
                    
                    do
                        sub_700660(esi_4, &i_5, edi_2)
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
    uint32_t eax_19 = zx.d(i.b)
    
    if (i.b u>= 8)
        int32_t eax_21 = (eax_19 u>> 3) * ebp_2
        arg3[1] = eax_21
        @__security_check_cookie@4(eax_1 ^ &var_28)
        return eax_21
    
    eax_2 = (eax_19 * ebp_2 + 7) u>> 3
    arg3[1] = eax_2

@__security_check_cookie@4(eax_1 ^ &var_28)
return eax_2
