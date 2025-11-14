// 函数: sub_6a8e6c
// 地址: 0x6a8e6c
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0x3ff
int32_t var_8 = 0x30
void* var_30
sub_69beb0(&var_30, arg6)
int32_t i = arg4

if (i s< 0)
    i = 0

char* esi = arg2
int32_t result
int32_t result_1
void* eax

if (esi == 0 || arg3 == 0)
    eax = __errno()
    result_1 = 0x16
label_6a8ec1:
    result = result_1
    *eax = result
    __invalid_parameter_noinfo()
else
    *esi = 0
    
    if (arg3 u<= i + 0xb)
        eax = __errno()
        result_1 = 0x22
        goto label_6a8ec1
    
    int32_t* edx_1 = arg1
    int32_t ebx_1 = edx_1[1]
    int32_t var_18_1 = *edx_1
    
    if ((ebx_1 u>> 0x14 & 0x7ff) != 0x7ff)
        if ((ebx_1 & 0x80000000) != 0)
            *esi = 0x2d
            esi = &esi[1]
        
        *esi = 0x30
        int32_t ebx_5 = neg.d(arg5)
        esi[1] = (((arg5 == 0) - 1) & 0xe0) + 0x78
        char var_14_1 = ((sbb.d(ebx_5, ebx_5, arg5 != 0) & 0xffffffe0) + 0x27).b
        void* esi_1
        
        if ((edx_1[1] & 0x7ff00000) != 0)
            esi[2] = 0x31
            esi_1 = &esi[3]
        else
            esi[2] = 0x30
            esi_1 = &esi[3]
            
            if ((*edx_1 | (edx_1[1] & 0xfffff)) != 0)
                var_c = 0x3fe
            else
                var_c = 0
        
        void* esi_2 = esi_1 + 1
        
        if (i != 0)
            char* eax_18
            eax_18.b = ***(var_30 + 0x84)
            *esi_1 = eax_18.b
        else
            *esi_1 = 0
        
        int32_t eax_20 = edx_1[1] & 0xfffff
        int32_t var_1c_1 = eax_20
        void* ecx_7
        
        if (eax_20 u> 0 || *edx_1 u> 0)
            arg4 = 0
            ecx_7 = 0xf0000
            int32_t eax_21 = var_8
            arg2 = 0xf0000
            
            while (i s> 0)
                uint32_t eax_25 =
                    zx.d(__aullshr(*edx_1 & arg4, edx_1[1] & ecx_7 & 0xfffff, var_8.b) + 0x30)
                
                if (eax_25 u> 0x39)
                    eax_25 += (sbb.d(ebx_5, ebx_5, arg5 != 0) & 0xffffffe0) + 0x27
                
                edx_1 = arg1
                *esi_2 = eax_25.b
                esi_2 += 1
                arg4 = arg4 u>> 4 | arg2 << 0x1c
                ecx_7 = arg2 u>> 4
                eax_21 = var_8 - 4
                i -= 1
                arg2 = ecx_7
                var_8 = eax_21
                
                if (eax_21.w s< 0)
                    break
            
            if (eax_21.w s>= 0)
                int16_t eax_31
                eax_31, ecx_7 = __aullshr(*edx_1 & arg4, edx_1[1] & ecx_7 & 0xfffff, var_8.b)
                
                if (eax_31 u> 8)
                    char* eax_32 = esi_2 - 1
                    
                    while (true)
                        ecx_7.b = *eax_32
                        
                        if (ecx_7.b != 0x66 && ecx_7.b != 0x46)
                            break
                        
                        *eax_32 = 0x30
                        eax_32 -= 1
                    
                    if (eax_32 == esi_1)
                        eax_32[0xffffffff] += 1
                    else
                        ecx_7.b = *eax_32
                        
                        if (ecx_7.b != 0x39)
                            ecx_7.b += 1
                            *eax_32 = ecx_7.b
                        else
                            *eax_32 = var_14_1 + 0x3a
        
        if (i s> 0)
            _memset(esi_2, 0x30, i)
            esi_2 += i
        
        if (*esi_1 == 0)
            esi_2 = esi_1
        
        ecx_7.b = 0x34
        void* eax_33
        eax_33.b = arg5 == 0
        eax_33.b -= 1
        eax_33.b &= 0xe0
        eax_33.b += 0x70
        *esi_2 = eax_33.b
        int32_t ecx_14 = __aullshr(*arg1, arg1[1], ecx_7.b) & 0x7ff
        int32_t ecx_15 = ecx_14 - var_c
        bool c_2 = ecx_14 u< var_c
        uint32_t ebx_10 = sbb.d(0, 0, c_2)
        bool s_1 = sbb.d(0, 0, c_2) s< 0
        bool o_1 = unimplemented  {sbb ebx, eax}
        void* esi_3
        
        if (s_1 || ((sbb.d(0, 0, c_2) == 0 || s_1 != o_1) && ecx_15 u< 0))
            *(esi_2 + 1) = 0x2d
            esi_3 = esi_2 + 2
            int32_t temp4_1 = ecx_15
            ecx_15 = neg.d(ecx_15)
            ebx_10 = neg.d(adc.d(ebx_10, 0, temp4_1 != 0))
        else
            *(esi_2 + 1) = 0x2b
            esi_3 = esi_2 + 2
        
        *esi_3 = 0x30
        void* edi_1 = esi_3
        
        if (ebx_10 s>= 0)
            if (ebx_10 s> 0 || ecx_15 u>= 0x3e8)
                char eax_36
                int32_t edx_10
                eax_36, ecx_15, edx_10 = __alldvrm(ecx_15, ebx_10, 0x3e8, 0)
                int32_t var_1c_2 = edx_10
                *esi_3 = eax_36 + 0x30
                esi_3 += 1
                
                if (esi_3 == edi_1)
                    goto label_6a9163
                
            label_6a9173:
                char eax_37
                int32_t edx_11
                eax_37, ecx_15, edx_11 = __alldvrm(ecx_15, ebx_10, 0x64, 0)
                int32_t var_1c_3 = edx_11
                *esi_3 = eax_37 + 0x30
                esi_3 += 1
            else
            label_6a9163:
                
                if (ebx_10 s>= 0 && (ebx_10 s> 0 || ecx_15 u>= 0x64))
                    goto label_6a9173
        
        if (esi_3 != edi_1)
        label_6a9196:
            char eax_38
            int32_t edx_12
            eax_38, ecx_15, edx_12 = __alldvrm(ecx_15, ebx_10, 0xa, 0)
            int32_t var_1c_4 = edx_12
            *esi_3 = eax_38 + 0x30
            esi_3 += 1
            uint32_t var_1c_5 = ebx_10
        else if (ebx_10 s>= 0 && (ebx_10 s> 0 || ecx_15 u>= 0xa))
            goto label_6a9196
        
        ecx_15.b += 0x30
        result = 0
        *esi_3 = ecx_15.b
        *(esi_3 + 1) = 0
    else
        int32_t eax_6 = 0xffffffff
        
        if (arg3 != 0xffffffff)
            eax_6 = arg3 - 2
        
        result = sub_6a91c8(edx_1, &esi[2], eax_6, i, 0)
        
        if (result == 0)
            if (esi[2] == 0x2d)
                *esi = 0x2d
                esi = &esi[1]
            
            *esi = 0x30
            esi[1] = (((arg5 == 0) - 1) & 0xe0) + 0x78
            void* eax_10 = _strrchr(&esi[2], 0x65)
            
            if (eax_10 != 0)
                *eax_10 = (((arg5 == 0) - 1) & 0xe0) + 0x70
                *(eax_10 + 3) = 0
            
            result = 0
        else
            *esi = 0
char var_24
void* var_28

if (var_24 != 0)
    *(var_28 + 0x70) &= 0xfffffffd
return result
