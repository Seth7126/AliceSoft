// 函数: sub_6b64d0
// 地址: 0x6b64d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebp
uint32_t var_4 = ebp
void* ecx
void* edx
ecx, edx = __alloca_probe(0x137c)
void var_8
int32_t eax_1 = __security_cookie ^ &var_8
int32_t ebx = *(edx + 0x504)
void* esi = *(edx + 0x510)
void** result = nullptr
void* arg_4 = esi
int32_t arg_34 = ebx
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
    __builtin_memset(&arg_35c, 0, ebx << 2)
    cond:0 = ebx != 0
    
    if (ebx s> 0)
        int32_t ecx_7
        int32_t edi_3
        edi_3, ecx_7 = __memfill_u32(&arg_254, 1, ebx)
        cond:0 = ebx != 0
        __builtin_memset(&arg_464, 0xffffffff, ebx << 2)

void arg_56c
uint32_t eax_5

if (cond:0)
    int32_t esi_1 = 0
    var_4 = ebx - 1
    
    if (ebx - 1 s> 0)
        uint32_t (* edi_4)[0x4] = &arg_56c
        uint32_t ebx_1 = 0
        
        do
            uint32_t eax_8 = sub_6b59e0(edx, arg_4, arg1, *(edx + (esi_1 << 2)), 
                *(edx + (esi_1 << 2) + 4), edi_4, *(edx + 0x508), arg_4)
            esi_1 += 1
            ebx_1 += eax_8
            edi_4 = &(*edi_4)[0xe]
        while (esi_1 s< var_4)
        
        esi = arg_4
        ebx = arg_34
        eax_5 = ebx_1
        goto label_6b65f1
else
    uint32_t eax_4 = *(edx + 0x508)
    eax_5 = sub_6b59e0(eax_4, arg_4, arg1, 0, eax_4, &arg_56c, eax_4, esi)
label_6b65f1:
    
    if (eax_5 == 0)
        result = nullptr
    else
        __return_addr = 0xffffff38
        void* __return_addr_15 = 0xffffff38
        sub_6b5b80(&__return_addr, ebx - 1, &arg_56c, &__return_addr, &__return_addr_15, esi)
        void* const __return_addr_1 = __return_addr
        int32_t esi_2 = 2
        void* __return_addr_13 = __return_addr_15
        __return_addr_7 = __return_addr_1
        __return_addr_6 = __return_addr_1
        void* __return_addr_9 = __return_addr_13
        void** result_1
        void* __return_addr_5
        void* const __return_addr_4
        
        if (ebx s<= 2)
            __return_addr_4 = __return_addr
        else
            void* edx_4 = edx
            void* __return_addr_17 = edx_4 + 0x210
            __return_addr_15 = __return_addr_17
            
            do
                int32_t eax_10 = *__return_addr_17
                int32_t i_1 = arg_35c[eax_10]
                int32_t i = arg_254[eax_10]
                
                if (arg_464[i_1] != i)
                    int32_t edi_5 = *(edx_4 + (i_1 << 2) + 0x208)
                    int32_t edx_5 = *(edx_4 + (i << 2) + 0x208)
                    void* edx_6 = arg_4
                    arg_464[i_1] = i
                    __return_addr_5 = *(edx_6 + (i_1 << 2) + 0x344)
                    int32_t edi_7 = *(edx_6 + (i << 2) + 0x344)
                    void* __return_addr_14 = (&__return_addr_7)[i_1]
                    void* arg_20
                    
                    if (__return_addr_14 s>= 0)
                        int32_t __saved_edi
                        arg_20 = &(&__saved_edi)[i_1 + 0x16]
                        int32_t ecx_14 = (&__saved_edi)[i_1 + 0x16]
                        
                        if (ecx_14 s>= 0)
                            __return_addr_14 = (__return_addr_14 + ecx_14) s>> 1
                    else
                        __return_addr_14 = (&__return_addr_6)[i_1]
                        arg_20 = &(&__return_addr_6)[i_1]
                        edx_6 = arg_4
                    
                    void** eax_11 = &(&__return_addr_7)[i]
                    void* __return_addr_2 = *eax_11
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
                    
                    int32_t eax_13 = sub_6b6280(__return_addr_2, edi_7, __return_addr_5, 
                        __return_addr_14, __return_addr_2, arg1, arg_4, edx_6)
                    void** result_3
                    int32_t eax_16
                    int32_t eax_19
                    void* __return_addr_3
                    void** result_2
                    
                    if (eax_13 != 0)
                        void* __return_addr_16 = 0xffffff38
                        void* __return_addr_18 = __return_addr_15
                        result_1 = 0xffffff38
                        result_3 = 0xffffff38
                        __return_addr_5 = 0xffffff38
                        int32_t eax_15 = edi_5 * 7
                        eax_16 = sub_6b5b80(eax_15, *__return_addr_18 - edi_5, 
                            &arg_56c + (eax_15 << 3), &__return_addr_16, &result_1, arg_4)
                        int32_t eax_17 = *__return_addr_15
                        eax_19 = sub_6b5b80(&arg_56c, edx_5 - eax_17, &arg_56c + eax_17 * 0x38, 
                            &result_3, &__return_addr_5, arg_4)
                        void** result_4 = result_3
                        result_3 = result_4
                        
                        if (eax_16 == 0)
                            __return_addr_14 = __return_addr_16
                            result_2 = result_1
                        else
                            result_2 = result_4
                        
                        result_1 = result_2
                        
                        if (eax_19 == 0)
                            __return_addr_3 = __return_addr_5
                        else
                            __return_addr_3 = __return_addr
                            result_3 = result_2
                    
                    if (eax_13 != 0 && (eax_16 == 0 || eax_19 == 0))
                        *arg_20 = __return_addr_14
                        void* const __return_addr_10 = __return_addr_7
                        
                        if (i_1 == 0)
                            __return_addr_10 = __return_addr_14
                        
                        void** result_5 = result_3
                        __return_addr_7 = __return_addr_10
                        (&__return_addr_7)[esi_2] = result_2
                        (&__return_addr_6)[esi_2] = result_5
                        *eax_11 = __return_addr_3
                        void* __return_addr_8 = __return_addr_9
                        
                        if (i == 1)
                            __return_addr_8 = __return_addr_3
                        
                        __return_addr_9 = __return_addr_8
                        
                        if (result_1 s>= 0 || result_5 s>= 0)
                            int32_t ecx_25 = *__return_addr_15
                            int32_t eax_23 = ecx_25 - 1
                            
                            if (eax_23 s>= 0)
                                while (arg_254[eax_23] == i)
                                    arg_254[eax_23] = esi_2
                                    int32_t temp4_1 = eax_23
                                    eax_23 -= 1
                                    
                                    if (temp4_1 - 1 s< 0)
                                        break
                            
                            int32_t eax_24 = ecx_25 + 1
                            
                            if (eax_24 s< ebx)
                                while (arg_35c[eax_24] == i_1)
                                    arg_35c[eax_24] = esi_2
                                    eax_24 += 1
                                    
                                    if (eax_24 s>= ebx)
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
        uint32_t ecx_28 = ((ebx << 2) + 7) & 0xfffffff8
        var_4 = ecx_28
        
        if (*(edx_14 + 0x48) + ecx_28 s> *(edx_14 + 0x4c))
            if (*(edx_14 + 0x44) != 0)
                int32_t var_18_7 = 8
                int32_t* eax_28 = sub_705e22()
                edx_14 = ecx
                *(edx_14 + 0x50) += *(edx_14 + 0x48)
                eax_28[1] = *(edx_14 + 0x54)
                *eax_28 = *(edx_14 + 0x44)
                ecx_28 = var_4
                *(edx_14 + 0x54) = eax_28
            
            uint32_t var_18_8 = ecx_28
            *(edx_14 + 0x4c) = ecx_28
            edx_14 = ecx
            ecx_28 = var_4
            *(edx_14 + 0x44) = sub_705e22()
            *(edx_14 + 0x48) = 0
        
        int32_t eax_30 = *(edx_14 + 0x48)
        result = *(edx_14 + 0x44) + eax_30
        bool cond:1_1 = __return_addr_7 s< 0
        result_1 = result
        *(ecx + 0x48) = eax_30 + ecx_28
        
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
            void* eax_33 = &result[2]
            bool cond:3_1
            
            do
                int32_t eax_34 = *(__return_addr_11 + 0xfc)
                int32_t esi_4 = *__return_addr_11
                int32_t edi_10 = *(ebx_2 + (eax_34 << 2) + 0x344)
                int32_t eax_36 = result[eax_34] & 0x7fff
                int32_t ebx_5 = (result[esi_4] & 0x7fff) - eax_36
                int32_t eax_38
                int32_t edx_16
                edx_16:eax_38 = sx.q(ebx_5)
                int32_t temp0_1 = divs.dp.d(
                    sx.q(((eax_38 ^ edx_16) - edx_16) * (*__return_addr - edi_10)), 
                    *(arg_4 + (esi_4 << 2) + 0x344) - edi_10)
                int32_t eax_45
                
                if (ebx_5 s>= 0)
                    eax_45 = eax_36 + temp0_1
                else
                    eax_45 = eax_36 - temp0_1
                
                int32_t ecx_41 = (&__return_addr_7)[arg_18]
                
                if (ecx_41 s>= 0)
                    int32_t esi_5 = (&__return_addr_6)[arg_18]
                    
                    if (esi_5 s>= 0)
                        ecx_41 = (ecx_41 + esi_5) s>> 1
                else
                    ecx_41 = (&__return_addr_6)[arg_18]
                
                if (ecx_41 s< 0 || eax_45 == ecx_41)
                    *(eax_33 + (arg_18 << 2) - 8) = eax_45 | 0x8000
                else
                    *(eax_33 + (arg_18 << 2) - 8) = ecx_41
                
                void* __return_addr_12 = __return_addr_5
                __return_addr += 4
                __return_addr_11 = __return_addr_12 + 4
                cond:3_1 = arg_18 + 1 s< arg_34
                ebx_2 = arg_4
                arg_18 += 1
                result = result_1
                __return_addr_5 = __return_addr_11
            while (cond:3_1)
            @__security_check_cookie@4(eax_1 ^ &var_8)
            return result
@__security_check_cookie@4(eax_1 ^ &var_8)
return result
