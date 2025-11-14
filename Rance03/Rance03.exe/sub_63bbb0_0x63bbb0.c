// 函数: sub_63bbb0
// 地址: 0x63bbb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp
void* var_4 = ebp
void* ecx
void* edx
ecx, edx = __chkstk(0x137c)
void var_8
int32_t eax_1 = __security_cookie ^ &var_8
void** result_1
void** result_2 = result_1
void* ebx = *(edx + 0x504)
void* esi = *(edx + 0x510)
void** result = nullptr
void* arg_4 = esi
void* arg_34 = ebx
bool cond:0 = ebx != 0
void* const __return_addr_6
void* const __return_addr_7
int32_t arg_254[0x42]
int32_t arg_35c[0x42]
int32_t arg_464[0x42]

if (ebx s> 0)
    int32_t ecx_2
    int32_t edi_1
    edi_1, ecx_2 = __memfill_u32(&__return_addr_7, 0xffffff38, ebx)
    int32_t ecx_4
    int32_t edi_2
    edi_2, ecx_4 = __memfill_u32(&__return_addr_6, 0xffffff38, ebx)
    __builtin_memset(&arg_254, 0, ebx << 2)
    cond:0 = ebx != 0
    
    if (ebx s> 0)
        int32_t ecx_7
        int32_t edi_3
        edi_3, ecx_7 = __memfill_u32(&arg_35c, 1, ebx)
        cond:0 = ebx != 0
        __builtin_memset(&arg_464, 0xffffffff, ebx << 2)

void arg_56c
void* eax_4

if (cond:0)
    int32_t esi_1 = 0
    var_4 = ebx - 1
    
    if (ebx - 1 s> 0)
        char* edi_4 = &arg_56c
        void* ebx_1 = nullptr
        
        do
            int32_t eax_7 = sub_63b0d0(edx, arg_4, result_2, *(edx + (esi_1 << 2)), 
                *(edx + (esi_1 << 2) + 4), edi_4, *(edx + 0x508), arg_4)
            esi_1 += 1
            ebx_1 += eax_7
            edi_4 = &edi_4[0x38]
        while (esi_1 s< var_4)
        
        esi = arg_4
        ebx = arg_34
        eax_4 = ebx_1
        goto label_63bcd1
else
    int32_t eax_3 = *(edx + 0x508)
    eax_4 = sub_63b0d0(eax_3, arg_4, result_2, 0, eax_3, &arg_56c, eax_3, esi)
label_63bcd1:
    
    if (eax_4 == 0)
        result = nullptr
    else
        __return_addr = 0xffffff38
        void* __return_addr_15 = 0xffffff38
        sub_63b270(&__return_addr, ebx - 1, &arg_56c, &__return_addr, &__return_addr_15, esi)
        void* const __return_addr_1 = __return_addr
        int32_t esi_2 = 2
        void* __return_addr_13 = __return_addr_15
        __return_addr_7 = __return_addr_1
        __return_addr_6 = __return_addr_1
        void* __return_addr_9 = __return_addr_13
        void* __return_addr_5
        void* const __return_addr_4
        
        if (ebx s<= 2)
            __return_addr_4 = __return_addr
        else
            void* edx_4 = edx
            void* __return_addr_17 = edx_4 + 0x210
            __return_addr_15 = __return_addr_17
            
            do
                int32_t eax_9 = *__return_addr_17
                int32_t i_1 = arg_254[eax_9]
                int32_t i = arg_35c[eax_9]
                
                if (arg_464[i_1] != i)
                    int32_t edi_5 = *(edx_4 + (i_1 << 2) + 0x208)
                    int32_t edx_5 = *(edx_4 + (i << 2) + 0x208)
                    void* edx_6 = arg_4
                    arg_464[i_1] = i
                    __return_addr_5 = *(edx_6 + (i_1 << 2) + 0x344)
                    int32_t edi_7 = *(edx_6 + (i << 2) + 0x344)
                    void* __return_addr_14 = (&__return_addr_7)[i_1]
                    void* arg_1c
                    
                    if (__return_addr_14 s>= 0)
                        int32_t __saved_edi
                        arg_1c = &(&__saved_edi)[i_1 + 0x16]
                        int32_t ecx_14 = (&__saved_edi)[i_1 + 0x16]
                        
                        if (ecx_14 s>= 0)
                            __return_addr_14 = (__return_addr_14 + ecx_14) s>> 1
                    else
                        __return_addr_14 = (&__return_addr_6)[i_1]
                        arg_1c = &(&__return_addr_6)[i_1]
                        edx_6 = arg_4
                    
                    void** eax_10 = &(&__return_addr_7)[i]
                    void* __return_addr_2 = *eax_10
                    __return_addr = __return_addr_2
                    
                    if (__return_addr_2 s>= 0)
                        int32_t ecx_16 = (&__return_addr_6)[i]
                        
                        if (ecx_16 s>= 0)
                            __return_addr_2 = (__return_addr_2 + ecx_16) s>> 1
                            __return_addr = __return_addr_2
                    else
                        __return_addr_2 = (&__return_addr_6)[i]
                        __return_addr = __return_addr_2
                    
                    if (__return_addr_14 == 0xffffffff || __return_addr_2 == 0xffffffff)
                        _exit(1)
                        noreturn
                    
                    int32_t eax_12 = sub_63b960(__return_addr_2, edi_7, __return_addr_5, 
                        __return_addr_14, __return_addr_2, result_2, arg_4, edx_6)
                    void** result_4
                    int32_t eax_15
                    int32_t eax_18
                    void* __return_addr_3
                    void** result_3
                    
                    if (eax_12 != 0)
                        void* __return_addr_16 = 0xffffff38
                        void* __return_addr_18 = __return_addr_15
                        result_1 = 0xffffff38
                        result_4 = 0xffffff38
                        __return_addr_5 = 0xffffff38
                        int32_t eax_14 = edi_5 * 7
                        eax_15 = sub_63b270(eax_14, *__return_addr_18 - edi_5, 
                            &arg_56c + (eax_14 << 3), &__return_addr_16, &result_1, arg_4)
                        int32_t eax_16 = *__return_addr_15
                        eax_18 = sub_63b270(&arg_56c, edx_5 - eax_16, &arg_56c + eax_16 * 0x38, 
                            &result_4, &__return_addr_5, arg_4)
                        void** result_5 = result_4
                        result_4 = result_5
                        
                        if (eax_15 == 0)
                            __return_addr_14 = __return_addr_16
                            result_3 = result_1
                        else
                            result_3 = result_5
                        
                        result_1 = result_3
                        
                        if (eax_18 == 0)
                            __return_addr_3 = __return_addr_5
                        else
                            __return_addr_3 = __return_addr
                            result_4 = result_3
                    
                    if (eax_12 != 0 && (eax_15 == 0 || eax_18 == 0))
                        *arg_1c = __return_addr_14
                        void* const __return_addr_10 = __return_addr_7
                        
                        if (i_1 == 0)
                            __return_addr_10 = __return_addr_14
                        
                        void** result_6 = result_4
                        __return_addr_7 = __return_addr_10
                        (&__return_addr_7)[esi_2] = result_3
                        (&__return_addr_6)[esi_2] = result_6
                        *eax_10 = __return_addr_3
                        void* __return_addr_8 = __return_addr_9
                        
                        if (i == 1)
                            __return_addr_8 = __return_addr_3
                        
                        __return_addr_9 = __return_addr_8
                        
                        if (result_1 s>= 0 || result_6 s>= 0)
                            int32_t ecx_25 = *__return_addr_15
                            int32_t eax_22 = ecx_25 - 1
                            
                            if (eax_22 s>= 0)
                                while (arg_35c[eax_22] == i)
                                    arg_35c[eax_22] = esi_2
                                    int32_t temp4_1 = eax_22
                                    eax_22 -= 1
                                    
                                    if (temp4_1 - 1 s< 0)
                                        break
                            
                            int32_t eax_23 = ecx_25 + 1
                            
                            if (eax_23 s< ebx)
                                while (arg_254[eax_23] == i_1)
                                    arg_254[eax_23] = esi_2
                                    eax_23 += 1
                                    
                                    if (eax_23 s>= ebx)
                                        break
                    else
                        (&__return_addr_6)[esi_2] = 0xffffff38
                        (&__return_addr_7)[esi_2] = 0xffffff38
                    
                    edx_4 = edx
                
                esi_2 += 1
                __return_addr_17 = __return_addr_15 + 4
                __return_addr_15 = __return_addr_17
            while (esi_2 s< ebx)
            
            __return_addr_4 = __return_addr_6
        
        void* edx_14 = ecx
        void* ecx_28 = ((ebx << 2) + 7) & 0xfffffff8
        var_4 = ecx_28
        
        if (*(edx_14 + 0x48) + ecx_28 s> *(edx_14 + 0x4c))
            if (*(edx_14 + 0x44) != 0)
                int32_t* eax_27 = _malloc(8)
                edx_14 = ecx
                *(edx_14 + 0x50) += *(edx_14 + 0x48)
                eax_27[1] = *(edx_14 + 0x54)
                *eax_27 = *(edx_14 + 0x44)
                ecx_28 = var_4
                *(edx_14 + 0x54) = eax_27
            
            *(edx_14 + 0x4c) = ecx_28
            int32_t eax_28 = _malloc(ecx_28)
            edx_14 = ecx
            ecx_28 = var_4
            *(edx_14 + 0x44) = eax_28
            *(edx_14 + 0x48) = 0
        
        void* eax_29 = *(edx_14 + 0x48)
        result = *(edx_14 + 0x44) + eax_29
        bool cond:1_1 = __return_addr_7 s< 0
        result_1 = result
        *(ecx + 0x48) = eax_29 + ecx_28
        
        if (not(cond:1_1))
            if (__return_addr_4 s>= 0)
                __return_addr_4 = (__return_addr_4 + __return_addr_7) s>> 1
            else
                __return_addr_4 = __return_addr_7
        
        *result = __return_addr_4
        
        if (__return_addr_13 s< 0)
            __return_addr_13 = __return_addr_9
        else if (__return_addr_9 s>= 0)
            __return_addr_13 = (__return_addr_13 + __return_addr_9) s>> 1
        
        result[1] = __return_addr_13
        int32_t arg_18 = 2
        
        if (ebx s> 2)
            void* ebx_2 = arg_4
            void* __return_addr_11 = edx + 0x30c
            __return_addr_5 = __return_addr_11
            __return_addr = ebx_2 + 0x34c
            void* eax_32 = &result[2]
            bool cond:3_1
            
            do
                int32_t eax_33 = *(__return_addr_11 + 0xfc)
                int32_t esi_4 = *__return_addr_11
                int32_t edi_10 = *(ebx_2 + (eax_33 << 2) + 0x344)
                int32_t eax_35 = result[eax_33] & 0x7fff
                int32_t ebx_5 = (result[esi_4] & 0x7fff) - eax_35
                int32_t eax_37
                int32_t edx_16
                edx_16:eax_37 = sx.q(ebx_5)
                int32_t temp0_1 = divs.dp.d(
                    sx.q(((eax_37 ^ edx_16) - edx_16) * (*__return_addr - edi_10)), 
                    *(arg_4 + (esi_4 << 2) + 0x344) - edi_10)
                int32_t eax_44
                
                if (ebx_5 s>= 0)
                    eax_44 = eax_35 + temp0_1
                else
                    eax_44 = eax_35 - temp0_1
                
                int32_t ecx_41 = (&__return_addr_7)[arg_18]
                
                if (ecx_41 s>= 0)
                    int32_t esi_5 = (&__return_addr_6)[arg_18]
                    
                    if (esi_5 s>= 0)
                        ecx_41 = (ecx_41 + esi_5) s>> 1
                else
                    ecx_41 = (&__return_addr_6)[arg_18]
                
                if (ecx_41 s< 0 || eax_44 == ecx_41)
                    *(eax_32 + (arg_18 << 2) - 8) = eax_44 | 0x8000
                else
                    *(eax_32 + (arg_18 << 2) - 8) = ecx_41
                
                void* __return_addr_12 = __return_addr_5
                __return_addr += 4
                __return_addr_11 = __return_addr_12 + 4
                cond:3_1 = arg_18 + 1 s< arg_34
                ebx_2 = arg_4
                arg_18 += 1
                result = result_1
                __return_addr_5 = __return_addr_11
            while (cond:3_1)
            sub_69a5bc(eax_1 ^ &var_8)
            return result
sub_69a5bc(eax_1 ^ &var_8)
return result
