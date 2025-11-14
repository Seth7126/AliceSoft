// 函数: sub_508430
// 地址: 0x508430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
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
    int32_t var_28_1 = *(edx + 8)
    result = sub_44e630(data_75d4cc + 0x288)
    int32_t var_4_1 = 0xffffffff
    
    if (result == 0)
        result.b = 0
    else if ((*result)->__offset(0x28).d(eax_2).b == 0)
        result.b = 1
    else
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        struct _EXCEPTION_REGISTRATION_RECORD** arg_8
        sub_506d00(arg1, &result_1, &arg_8)
        struct _EXCEPTION_REGISTRATION_RECORD** result_8
        int32_t arg_10
        sub_506d00(arg1, &result_8, &arg_10)
        
        if (sub_506d70(arg1, &result_1, &arg_8, &result_8, &arg_10).b == 0)
            result.b = 0
        else
            struct _EXCEPTION_REGISTRATION_RECORD** result_7 = result_8
            int32_t arg_14
            int32_t* ecx_6 = &arg_14
            struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = arg_10
            struct _EXCEPTION_REGISTRATION_RECORD** ebp_1 = arg_8
            struct _EXCEPTION_REGISTRATION_RECORD** result_4 = result_1
            struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_7 - result_4
            arg_10 = edi_1 - ebp_1
            bool cond:0_1 = arg_14 s>= 0xff
            result_8 = 0xff
            
            if (cond:0_1)
                ecx_6 = &result_8
            
            arg_8 = nullptr
            int32_t* eax_5 = &arg_8
            result_1 = result_3
            
            if (*ecx_6 s> 0)
                eax_5 = ecx_6
            
            eax_5.b = *eax_5
            result_8.b = eax_5.b
            int32_t eax_6 = arg_10
            
            if (eax_6 == 0)
                if (result_4 s> result_7)
                    struct _EXCEPTION_REGISTRATION_RECORD** result_5 = result_4
                    result_4 = result_7
                    result_7 = result_5
                
                result = (*result)->__offset(0x8).d(result_4, ebp_1)
                
                if (result_4 s> result_7)
                    result.b = 1
                else
                    char edx_4 = result_8.b
                    result += 3
                    int32_t i_3 = result_7 - result_4 + 1
                    int32_t i
                    
                    do
                        *result = edx_4
                        result = &result[1]
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                    result.b = 1
            else if (result_3 != 0)
                int32_t eax_11
                int32_t edx_7
                edx_7:eax_11 = sx.q(eax_6)
                int32_t eax_13
                int32_t edx_8
                edx_8:eax_13 = sx.q(result_1)
                
                if ((eax_13 ^ edx_8) - edx_8 s<= (eax_11 ^ edx_7) - edx_7)
                    if (ebp_1 s> edi_1)
                        struct _EXCEPTION_REGISTRATION_RECORD** ecx_19 = ebp_1
                        result_4 = result_7
                        ebp_1 = edi_1
                        edi_1 = ecx_19
                    
                    int32_t esi_2 = result_4 << 8
                    struct _EXCEPTION_REGISTRATION_RECORD* edx_14 = *result
                    arg_10 = divs.dp.d(sx.q(result_1 << 8), arg_10)
                    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = edx_14->__offset(0x8).d(0, 0)
                    struct _EXCEPTION_REGISTRATION_RECORD* edx_15 = *result
                    result_1 = result_2
                    struct _EXCEPTION_REGISTRATION_RECORD** ebx_5 = edx_15->__offset(0x1c).d()
                    
                    if (ebp_1 s<= edi_1)
                        char edx_16 = result_8.b
                        void* ecx_23 = ebx_5 * ebp_1
                        void* i_5 = edi_1 - ebp_1 + 1
                        void* i_1
                        
                        do
                            int32_t eax_25 = esi_2
                            esi_2 += arg_10
                            result = ecx_23 + (eax_25 s>> 8 << 2)
                            ecx_23 += ebx_5
                            *(result + result_1 + 3) = edx_16
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    result.b = 1
                else
                    if (result_4 s> result_7)
                        struct _EXCEPTION_REGISTRATION_RECORD** result_6 = result_4
                        ebp_1 = edi_1
                        result_4 = result_7
                        result_7 = result_6
                    
                    void* ebp_2 = ebp_1 << 8
                    struct _EXCEPTION_REGISTRATION_RECORD* edx_10 = *result
                    result_1 = divs.dp.d(sx.q(arg_10 << 8), result_1)
                    int32_t eax_20 = edx_10->__offset(0x8).d(0, 0)
                    struct _EXCEPTION_REGISTRATION_RECORD* edx_11 = *result
                    arg_10 = eax_20
                    arg_8 = edx_11->__offset(0x1c).d()
                    
                    if (result_4 s> result_7)
                        result.b = 1
                    else
                        char edx_12 = result_8.b
                        result = result_1
                        int32_t edi_5 = arg_10
                        
                        do
                            void* ecx_15 = ebp_2
                            ebp_2 += result
                            *((ecx_15 s>> 8) * arg_8 + edi_5 + (result_4 << 2) + 3) = edx_12
                            result_4 += 1
                        while (result_4 s<= result_7)
                        
                        result.b = 1
            else
                if (ebp_1 s> edi_1)
                    struct _EXCEPTION_REGISTRATION_RECORD** eax_8 = ebp_1
                    ebp_1 = edi_1
                    edi_1 = eax_8
                
                void* esi_1 = (*result)->__offset(0x8).d(result_4, ebp_1)
                result = (*result)->__offset(0x1c).d()
                
                if (ebp_1 s> edi_1)
                    result.b = 1
                else
                    char edx_6 = result_8.b
                    void* i_4 = edi_1 - ebp_1 + 1
                    void* i_2
                    
                    do
                        *(esi_1 + 3) = edx_6
                        esi_1 += result
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
