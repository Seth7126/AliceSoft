// 函数: sub_508110
// 地址: 0x508110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (edx == 0)
    result.b = 0
else
    struct partsengine::CSpriteEngineWrapper::VTable* const var_10_1 =
        &partsengine::CSpriteEngineWrapper::`vftable'
    int32_t var_4 = 0
    int32_t var_2c_1 = *(edx + 8)
    result = sub_44e630(data_75d4cc + 0x288)
    int32_t var_4_1 = 0xffffffff
    
    if (result == 0)
        result.b = 0
    else
        int32_t arg_4
        int32_t arg_8
        sub_506d00(arg1, &arg_4, &arg_8)
        int32_t arg_c
        int32_t arg_10
        sub_506d00(arg1, &arg_c, &arg_10)
        
        if (sub_506d70(arg1, &arg_4, &arg_8, &arg_c, &arg_10).b == 0)
            result.b = 0
        else
            int32_t edi_1 = arg_10
            struct _EXCEPTION_REGISTRATION_RECORD** result_1
            int32_t* ecx_5 = &result_1
            int32_t ebx_1 = arg_c
            int32_t esi_1 = arg_4
            int32_t ebp_1 = arg_8
            int32_t edx_2 = ebx_1 - esi_1
            arg_c = 0xff
            bool cond:0_1 = result_1 s>= 0xff
            arg_8 = edi_1 - ebp_1
            
            if (cond:0_1)
                ecx_5 = &arg_c
            
            arg_4 = 0
            int32_t* eax_5 = &arg_4
            arg_10 = 0
            
            if (*ecx_5 s> 0)
                eax_5 = ecx_5
            
            int32_t arg_18
            int32_t* ecx_6 = &arg_18
            eax_5.b = *eax_5
            arg_c.b = eax_5.b
            
            if (arg_18 s>= 0xff)
                ecx_6 = &arg_4
            
            arg_4 = 0xff
            int32_t* eax_6 = &arg_10
            result_1 = nullptr
            
            if (*ecx_6 s> 0)
                eax_6 = ecx_6
            
            int32_t arg_14
            int32_t* ecx_7 = &arg_14
            eax_6.b = *eax_6
            arg_4.b = eax_6.b
            
            if (arg_14 s>= 0xff)
                ecx_7 = &arg_10
            
            arg_10 = 0xff
            int32_t* eax_7 = &result_1
            
            if (*ecx_7 s> 0)
                eax_7 = ecx_7
            
            eax_7.b = *eax_7
            arg_10.b = eax_7.b
            int32_t eax_8 = arg_8
            
            if (eax_8 == 0)
                if (esi_1 s> ebx_1)
                    int32_t eax_9 = esi_1
                    esi_1 = ebx_1
                    ebx_1 = eax_9
                
                int16_t edx_3
                result, edx_3 = (*result)->__offset(0x8).d(esi_1, ebp_1)
                
                if (esi_1 s> ebx_1)
                    result.b = 1
                else
                    edx_3.b = arg_c.b
                    edx_3:1.b = arg_4.b
                    result += 2
                    char ecx_9 = arg_10.b
                    int32_t i_3 = ebx_1 - esi_1 + 1
                    int32_t i
                    
                    do
                        *(result - 2) = ecx_9
                        result = &result[1]
                        *(result - 5) = edx_3:1.b
                        result[-1].b = edx_3.b
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                    result.b = 1
            else if (edx_2 != 0)
                int32_t eax_14
                int32_t edx_6
                edx_6:eax_14 = sx.q(eax_8)
                int32_t eax_16
                int32_t edx_7
                edx_7:eax_16 = sx.q(edx_2)
                
                if ((eax_16 ^ edx_7) - edx_7 s<= (eax_14 ^ edx_6) - edx_6)
                    if (ebp_1 s> edi_1)
                        int32_t ecx_23 = ebp_1
                        esi_1 = ebx_1
                        ebp_1 = edi_1
                        edi_1 = ecx_23
                    
                    int32_t esi_3 = esi_1 << 8
                    struct _EXCEPTION_REGISTRATION_RECORD* edx_13 = *result
                    arg_18 = divs.dp.d(sx.q(edx_2 << 8), arg_8)
                    struct _EXCEPTION_REGISTRATION_RECORD** result_3 = edx_13->__offset(0x8).d(0, 0)
                    struct _EXCEPTION_REGISTRATION_RECORD* edx_14 = *result
                    result_1 = result_3
                    int16_t edx_15
                    result, edx_15 = edx_14->__offset(0x1c).d(eax_2)
                    
                    if (ebp_1 s<= edi_1)
                        edx_15.b = arg_c.b
                        edx_15:1.b = arg_4.b
                        char ecx_26 = arg_10.b
                        void* ebx_6 = result * ebp_1
                        int32_t i_5 = edi_1 - ebp_1 + 1
                        struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
                        int32_t i_1
                        
                        do
                            int32_t eax_28 = esi_3
                            esi_3 += arg_18
                            void* eax_30 = ebx_6 + (eax_28 s>> 8 << 2)
                            ebx_6 += result_2
                            result = eax_30 + result_1
                            *result = ecx_26
                            *(result + 1) = edx_15:1.b
                            *(result + 2) = edx_15.b
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    result.b = 1
                else
                    if (esi_1 s> ebx_1)
                        int32_t ecx_16 = esi_1
                        ebp_1 = edi_1
                        esi_1 = ebx_1
                        ebx_1 = ecx_16
                    
                    int32_t ebp_2 = ebp_1 << 8
                    struct _EXCEPTION_REGISTRATION_RECORD* edx_9 = *result
                    arg_8 = divs.dp.d(sx.q(arg_8 << 8), edx_2)
                    int32_t eax_23 = edx_9->__offset(0x8).d(0, 0)
                    struct _EXCEPTION_REGISTRATION_RECORD* edx_10 = *result
                    arg_18 = eax_23
                    int16_t edx_11
                    result, edx_11 = edx_10->__offset(0x1c).d(eax_2)
                    result_1 = result
                    
                    if (esi_1 s> ebx_1)
                        result.b = 1
                    else
                        edx_11.b = arg_c.b
                        edx_11:1.b = arg_4.b
                        result.b = arg_10.b
                        int32_t edi_4 = arg_8
                        
                        do
                            int32_t ecx_19 = ebp_2
                            ebp_2 += edi_4
                            int32_t ecx_22 = (ecx_19 s>> 8) * result_1 + arg_18
                            *(ecx_22 + (esi_1 << 2)) = result.b
                            *(ecx_22 + (esi_1 << 2) + 1) = edx_11:1.b
                            *(ecx_22 + (esi_1 << 2) + 2) = edx_11.b
                            esi_1 += 1
                        while (esi_1 s<= ebx_1)
                        
                        result.b = 1
            else
                if (ebp_1 s> edi_1)
                    int32_t eax_11 = ebp_1
                    ebp_1 = edi_1
                    edi_1 = eax_11
                
                char* esi_2 = (*result)->__offset(0x8).d(esi_1, ebp_1)
                int16_t edx_5
                result, edx_5 = (*result)->__offset(0x1c).d(eax_2)
                
                if (ebp_1 s> edi_1)
                    result.b = 1
                else
                    edx_5.b = arg_c.b
                    edx_5:1.b = arg_4.b
                    int32_t i_4 = edi_1 - ebp_1 + 1
                    char ecx_12 = arg_10.b
                    int32_t i_2
                    
                    do
                        *esi_2 = ecx_12
                        esi_2[1] = edx_5:1.b
                        esi_2[2] = edx_5.b
                        esi_2 += result
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
