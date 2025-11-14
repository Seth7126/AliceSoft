// 函数: sub_5dba10
// 地址: 0x5dba10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4b08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** ebp = arg1
struct _EXCEPTION_REGISTRATION_RECORD*** var_34 = ebp
struct _EXCEPTION_REGISTRATION_RECORD** result
struct _EXCEPTION_REGISTRATION_RECORD** i

if (ebp[5] == 4)
    result = *ebp
    i = *result

if (ebp[5] != 4 || i == result)
label_5dbbef:
    result.b = 1
else
    while (true)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_5 = i[5]
        int32_t ecx = i[4]
        
        if (ecx u< (*(arg2 + 0x28) - *(arg2 + 0x24)) s>> 2)
            int32_t edx_1 = *(arg2 + 0x24)
            
            if (edx_1 != *(arg2 + 0x28))
                result = *(arg2 + 0x30)
                
                if (result != *(arg2 + 0x34))
                    void* edx_2 = *(edx_1 + (ecx << 2))
                    void* edx_3 = edx_2 + result
                    
                    if (edx_2 != neg.d(result))
                        bool cond:1_1 = *edx_3 != 0
                        int32_t var_18_1 = 0xf
                        int32_t** var_1c_1 = nullptr
                        char var_2c = 0
                        void* ecx_1
                        
                        if (cond:1_1)
                            void* ecx_2 = edx_3
                            void* edi_1 = ecx_2 + 1
                            
                            do
                                result.b = *ecx_2
                                ecx_2 += 1
                            while (result.b != 0)
                            
                            ecx_1 = ecx_2 - edi_1
                        else
                            ecx_1 = nullptr
                        
                        sub_402110(&var_2c, edx_3, ecx_1)
                        void* ebp_1 = &ebp[2]
                        int32_t var_4 = 0
                        var_3c = ebp_1
                        void** eax_8
                        int32_t** ecx_5
                        eax_8, ecx_5 = sub_417ed0(ebp_1, &var_2c)
                        void** edi_2 = eax_8
                        
                        if (edi_2 == *ebp_1)
                            goto label_5dbb53
                        
                        void* edx_4 = &edi_2[4]
                        int32_t** ebp_2 = *(edx_4 + 0x10)
                        
                        if (edi_2[9] u>= 0x10)
                            edx_4 = *edx_4
                        
                        int32_t* ecx_6 = &var_2c
                        int32_t** eax_9 = ebp_2
                        
                        if (var_18_1 u>= 0x10)
                            ecx_6 = var_2c.d
                        
                        if (var_1c_1 u< ebp_2)
                            eax_9 = var_1c_1
                        
                        int32_t eax_10
                        eax_10, ecx_5 = sub_405190(eax_9, edx_4, ecx_6, eax_9)
                        bool cond:4_1 = eax_10 s< 0
                        
                        if (eax_10 == 0)
                            ecx_5 = var_1c_1
                            
                            if (ecx_5 u>= ebp_2)
                                eax_10.b = ecx_5 != ebp_2
                            else
                                eax_10 = 0xffffffff
                            
                            cond:4_1 = eax_10 s< 0
                        
                        eax_10.b = cond:4_1
                        
                        if (eax_10.b != 0)
                            ebp_1 = var_3c
                        label_5dbb53:
                            int32_t** var_54_4 = ecx_5
                            var_3c = &var_2c
                            void** var_58_2 = &var_3c
                            int32_t* eax_11 = sub_453b50(ecx_5)
                            void** var_30
                            sub_4280a0(ebp_1, &var_30, edi_2, &eax_11[4], eax_11)
                            edi_2 = var_30
                        
                        edi_2[0xa] = eax_5
                        int32_t var_4_1 = 0xffffffff
                        
                        if (var_18_1 u>= 0x10)
                            j__free(var_2c.d)
                        
                        if (*(i + 0xd) == 0)
                            struct _EXCEPTION_REGISTRATION_RECORD** i_1 = i[2]
                            
                            if (*(i_1 + 0xd) != 0)
                                result = i[1]
                                
                                if (*(result + 0xd) == 0)
                                    while (i == result[2])
                                        i = result
                                        result = result[1]
                                        
                                        if (*(result + 0xd) != 0)
                                            break
                                
                                i = result
                            else
                                i = i_1
                                result = *i
                                
                                while (*(result + 0xd) == 0)
                                    i = result
                                    result = *i
                        
                        ebp = var_34
                        
                        if (i == *ebp)
                            goto label_5dbbef
                        
                        continue
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
