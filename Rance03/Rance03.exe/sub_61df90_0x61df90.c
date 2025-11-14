// 函数: sub_61df90
// 地址: 0x61df90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce228
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_38
int32_t eax_2 = __security_cookie ^ &var_38
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t eax_6 = (*(arg1[0x11] + 0x1c))(__security_cookie ^ &__saved_edi)
int32_t eax_7 = (*(arg1[0x11] + 0xc))()
int32_t ebp_1 = arg1[0xb] * ((eax_6 * eax_7) u>> 3)
int32_t eax_9 = (*(arg1[0x11] + 0x1c))()
int32_t eax_10 = (*(arg1[0x11] + 0xc))()
int32_t edi = arg1[0xc]
HANDLE handles = arg1[0x21]
int32_t var_18 = arg1[0x23]
int32_t var_14 = arg1[0x25]
int32_t edi_1 = edi * ((eax_9 * eax_10) u>> 3)
enum WAIT_EVENT result = WaitForMultipleObjects(3, &handles, 0, 1)

if (result == WAIT_OBJECT_0)
    result.b = 0
else if (result == 0x1)
    if (sub_61e610(arg1).b != 0)
        goto label_61e06e
    
    result.b = 1
else if (result != 0x2)
label_61e06e:
    
    if ((*(*arg1 + 0x40))() == 0)
        var_38 = 0
        
        if (sub_61e8f0(arg1, &var_38).b == 0)
            result.b = 1
        else
            int32_t esi_6 = var_38
            
            if (esi_6 u< arg1[4] u>> 1)
                int32_t eax_21 = arg1[0x1b]
                
                if (eax_21 != 0)
                    arg1[0x1a] = eax_21
                    arg1[0x1b] = 0
            
            if (arg1[0x1a] + esi_6 s>= 0)
                struct thread::CCriticalLock::VTable* var_28
                sub_5f40d0(&var_28, &arg1[0x28])
                int32_t eax_26 = arg1[0x1a] + esi_6
                arg1[0xd] = eax_26
                
                if (eax_26 u> edi_1)
                    arg1[0xd] = eax_26 - edi_1 + ebp_1
                
                sub_5f4140(&var_28)
            
            int32_t ecx_11 = arg1[0x19]
            
            if ((ecx_11 != 0 || esi_6 u>= arg1[4] u>> 1) && (ecx_11 != 1 || esi_6 u< arg1[4] u>> 1))
                enum WAIT_EVENT esi_7 = (*(*arg1[7] + 0x24))()
                
                if (esi_7 == WAIT_FAILED)
                    result.b = 0
                else
                    struct thread::CCriticalLock::VTable* var_34
                    sub_5f40d0(&var_34, &arg1[0x2a])
                    int32_t var_4 = 0
                    int32_t eax_33 = arg1[9]
                    
                    if (eax_33 s<= 0 || arg1[0xa] s< eax_33)
                        if (sub_61e330(arg1) != 0)
                            sub_5f4140(&var_34)
                            
                            if (arg1[0x19] != 0)
                                arg1[0x19] = 0
                            else
                                arg1[0x1b] = esi_7
                                arg1[0x19] = 1
                            
                            result.b = 1
                        else
                            sub_5f4140(&var_34)
                            result.b = 1
                    else
                        sub_5f4140(&var_34)
                        result.b = 0
            else
                result.b = 1
    else
        arg1[0x10] = (**arg1[8])() - arg1[0xf]
        result.b = 1
else
    if (sub_61e6e0(arg1).b != 0)
        goto label_61e06e
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
