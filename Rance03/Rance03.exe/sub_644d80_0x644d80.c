// 函数: sub_644d80
// 地址: 0x644d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t i_12 = 0
int32_t* ebx = arg2
int32_t* var_24 = ebx
int32_t i_14 = 0
_memset(arg1, 0, 0x38)
int32_t i_15 = ebx[1]

if (i_15 s> 0)
    int32_t* eax_2 = ebx[2]
    int32_t i_10 = i_15
    int32_t i
    
    do
        if (*eax_2 s> 0)
            i_12 += 1
        
        eax_2 = &eax_2[1]
        i = i_10
        i_10 -= 1
    while (i != 1)
    i_14 = i_12

arg1[1] = i_15
arg1[2] = i_12
int32_t eax_3 = *ebx
*arg1 = eax_3

if (i_12 s> 0)
    int32_t* eax_4 = sub_644700(eax_3, ebx[1], ebx[2], i_12)
    __alloca_probe_16(i_12 << 2)
    int32_t __saved_edi
    int32_t* ecx_1 = &__saved_edi
    int32_t* var_c_1 = &__saved_edi
    
    if (eax_4 == 0)
        sub_644cf0(arg1)
        sub_69a5bc(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    if (i_12 s> 0)
        int32_t** ecx_5 = &__saved_edi - eax_4
        int32_t i_11 = i_12
        int32_t* ebx_1 = eax_4
        int32_t** var_1c_1 = ecx_5
        int32_t i_1
        
        do
            int32_t ecx_7 = rol.d(*ebx_1, 0x10)
            int32_t edx_5 = ((ecx_7 u>> 8 ^ ecx_7 << 8) & 0xff00ff) ^ ecx_7 << 8
            int32_t ecx_13 = ((edx_5 u>> 4 ^ edx_5 << 4) & 0xf0f0f0f) ^ edx_5 << 4
            int32_t edx_11 = ((ecx_13 u>> 2 ^ ecx_13 << 2) & 0x33333333) ^ ecx_13 << 2
            *ebx_1 = ((edx_11 u>> 1 ^ (edx_11 * 2)) & 0x55555555) ^ (edx_11 * 2)
            *(ecx_5 + ebx_1) = ebx_1
            ebx_1 = &ebx_1[1]
            i_1 = i_11
            i_11 -= 1
        while (i_1 != 1)
        ebx = var_24
        i_12 = i_14
        ecx_1 = var_c_1
    
    sub_69cb60(ecx_1, i_12, 4, sub_644d60)
    __alloca_probe_16(i_12 << 2)
    int32_t* var_18_1 = &__saved_edi
    int32_t ecx_19 = 0
    arg1[5] = _malloc(i_12 << 2)
    
    if (i_12 s> 0)
        do
            var_18_1[(var_c_1[ecx_19] - eax_4) s>> 2] = ecx_19
            ecx_19 += 1
        while (ecx_19 s< i_12)
        
        ebx = var_24
        
        if (i_12 s> 0)
            int32_t* ebx_4 = var_18_1
            int32_t eax_23 = eax_4 - var_18_1
            int32_t i_13 = i_12
            int32_t var_20_1 = eax_23
            int32_t i_2
            
            do
                int32_t edx_13 = *ebx_4
                ebx_4 = &ebx_4[1]
                *(arg1[5] + (edx_13 << 2)) = *(eax_23 + ebx_4 - 4)
                eax_23 = var_20_1
                i_2 = i_12
                i_12 -= 1
            while (i_2 != 1)
            ebx = var_24
            i_12 = i_14
    
    arg1[4] = sub_644980(_free(eax_4), i_12, ebx, var_18_1)
    int32_t i_3 = 0
    arg1[6] = _malloc(i_12 << 2)
    uint32_t edi_1 = 0
    
    if (ebx[1] s> 0)
        do
            if (*(ebx[2] + (i_3 << 2)) s> 0)
                int32_t ecx_22 = var_18_1[edi_1]
                edi_1 += 1
                *(arg1[6] + (ecx_22 << 2)) = i_3
            
            i_3 += 1
        while (i_3 s< ebx[1])
    
    int32_t eax_32
    char* edx_15
    eax_32, edx_15 = _malloc(edi_1)
    int32_t i_4 = 0
    arg1[7] = eax_32
    int32_t edi_2 = 0
    int32_t i_8 = 0
    int32_t var_24_1 = 0
    
    if (ebx[1] s> 0)
        do
            int32_t eax_33 = ebx[2]
            
            if (*(eax_33 + (i_4 << 2)) s> 0)
                edx_15 = var_18_1[edi_2]
                edi_2 += 1
                char* eax_36
                eax_36.b = *(eax_33 + (i_4 << 2))
                edx_15[arg1[7]] = eax_36.b
                i_4 = i_8
            
            i_4 += 1
            i_8 = i_4
        while (i_4 s< ebx[1])
        
        var_24_1 = edi_2
    
    uint32_t i_5 = arg1[2]
    int32_t ecx_24 = 0
    
    for (; i_5 != 0; i_5 u>>= 1)
        ecx_24 += 1
    
    int32_t eax_37 = ecx_24 - 4
    
    if (eax_37 s< 5)
        eax_37 = 5
    
    arg1[9] = eax_37
    
    if (eax_37 s> 8)
        arg1[9] = 8
    
    int32_t ecx_25 = arg1[9]
    int32_t eax_38 = 1 << ecx_25.b
    int32_t eax_39
    int32_t ecx_26
    eax_39, ecx_26 = sub_69cb1c(eax_38, edx_15, ecx_25, eax_38, 4)
    arg1[8] = eax_39
    char* ebx_5 = nullptr
    arg1[0xa] = 0
    
    if (edi_2 s> 0)
        do
            void* ecx_28 = arg1[7]
            int32_t eax_40 = sx.d(*(ecx_28 + ebx_5))
            
            if (arg1[0xa] s< eax_40)
                arg1[0xa] = eax_40
            
            int32_t ecx_29 = sx.d(*(ecx_28 + ebx_5))
            
            if (ecx_29 s<= arg1[9])
                int32_t ecx_31 = rol.d(*(arg1[5] + (ebx_5 << 2)), 0x10)
                int32_t edx_20 = ((ecx_31 u>> 8 ^ ecx_31 << 8) & 0xff00ff) ^ ecx_31 << 8
                int32_t ecx_37 = ((edx_20 u>> 4 ^ edx_20 << 4) & 0xf0f0f0f) ^ edx_20 << 4
                int32_t edx_26 = ((ecx_37 u>> 2 ^ ecx_37 << 2) & 0x33333333) ^ ecx_37 << 2
                int32_t i_6 = 0
                int32_t i_9 = 0
                
                if (1 << ((arg1[9]).b - ecx_29.b) s> 0)
                    do
                        *(arg1[8] + ((i_6 << ebx_5[arg1[7]]
                            | (((edx_26 u>> 1 ^ (edx_26 * 2)) & 0x55555555) ^ (edx_26 * 2))) << 2)) =
                            &ebx_5[1]
                        i_6 = i_9 + 1
                        i_9 = i_6
                    while (i_6 s< 1 << ((arg1[9]).b - ebx_5[arg1[7]]))
                    
                    edi_2 = var_24_1
            
            ebx_5 = &ebx_5[1]
        while (ebx_5 s< edi_2)
    
    int32_t var_c_2 = 0
    int32_t eax_56 = 0xfffffffe << (0x1f - (arg1[9]).b)
    int32_t eax_57 = 0
    int32_t var_14_1 = 0
    int32_t var_20_2 = 0
    
    if (eax_38 s> 0)
        int32_t ebx_6 = 0
        
        do
            int32_t i_7 = eax_57 << (0x20 - (arg1[9]).b)
            int32_t ecx_49 = rol.d(i_7, 0x10)
            int32_t edx_34 = ((ecx_49 u>> 8 ^ ecx_49 << 8) & 0xff00ff) ^ ecx_49 << 8
            int32_t ecx_54 = ((edx_34 u>> 4 ^ edx_34 << 4) & 0xf0f0f0f) ^ edx_34 << 4
            int32_t edx_40 = ((ecx_54 u>> 2 ^ ecx_54 << 2) & 0x33333333) ^ ecx_54 << 2
            
            if (*(arg1[8] + ((((edx_40 u>> 1 ^ (edx_40 * 2)) & 0x55555555) ^ (edx_40 * 2)) << 2))
                    == 0)
                int32_t edx_41 = var_c_2
                int32_t ecx_60 = edx_41 + 1
                
                if (ecx_60 s< edi_2)
                    int32_t* eax_71 = arg1[5] + (edx_41 << 2) + 4
                    
                    while (*eax_71 u<= i_7)
                        ecx_60 += 1
                        edx_41 += 1
                        eax_71 = &eax_71[1]
                        
                        if (ecx_60 s>= edi_2)
                            break
                    
                    ebx_6 = var_14_1
                    var_c_2 = edx_41
                
                if (ebx_6 s< edi_2)
                    int32_t* ecx_62 = arg1[5] + (ebx_6 << 2)
                    
                    while (i_7 u>= (*ecx_62 & eax_56))
                        ebx_6 += 1
                        ecx_62 = &ecx_62[1]
                        
                        if (ebx_6 s>= edi_2)
                            break
                    
                    var_14_1 = ebx_6
                
                int32_t edi_4 = edi_2 - ebx_6
                int32_t ebx_8 = edx_41
                
                if (edx_41 u> 0x7fff)
                    ebx_8 = 0x7fff
                
                if (edi_4 u> 0x7fff)
                    edi_4 = 0x7fff
                
                int32_t edx_46 = ((ecx_49 u>> 8 ^ ecx_49 << 8) & 0xff00ff) ^ ecx_49 << 8
                edi_2 = var_24_1
                int32_t ecx_69 = ((edx_46 u>> 4 ^ edx_46 << 4) & 0xf0f0f0f) ^ edx_46 << 4
                int32_t edx_52 = ((ecx_69 u>> 2 ^ ecx_69 << 2) & 0x33333333) ^ ecx_69 << 2
                *(arg1[8] + ((((edx_52 u>> 1 ^ (edx_52 * 2)) & 0x55555555) ^ (edx_52 * 2)) << 2)) =
                    (ebx_8 | 0xffff0000) << 0xf | edi_4
                ebx_6 = var_14_1
            
            eax_57 = var_20_2 + 1
            var_20_2 = eax_57
        while (eax_57 s< eax_38)

sub_69a5bc(eax_1 ^ &__saved_ebp)
return 0
