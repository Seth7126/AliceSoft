// 函数: sub_695d20
// 地址: 0x695d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747da8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 0x44)
int32_t eax_4 = (*(*esi + 0x1c))(eax_2)
int32_t eax_5 = (*(*esi + 0xc))()
int32_t* esi_1 = *(arg1 + 0x44)
int32_t eax_7 = *(arg1 + 0x2c) * ((eax_4 * eax_5) u>> 3)
int32_t edi_4 = (*(*esi_1 + 0x1c))() * (*(*esi_1 + 0xc))()
int32_t eax_12 = *(arg1 + 0x30) * (edi_4 u>> 3)
HANDLE handles = *(arg1 + 0x68)
int32_t var_1c = *(arg1 + 0x70)
int32_t var_18 = *(arg1 + 0x78)
enum WAIT_EVENT result = WaitForMultipleObjects(3, &handles, 0, 1)

if (result == WAIT_OBJECT_0)
    result.b = 0
else if (result == 0x1)
    if (xcf5fba64::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >::operator[]::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >(
            arg1).b != 0)
        goto label_695dee
    
    result.b = 1
else if (result != 0x2)
label_695dee:
    
    if ((*(*arg1 + 0x40))() == 0)
        int32_t var_24 = 0
        
        if (sub_6965e0(arg1, &var_24).b == 0)
            result.b = 1
        else
            int32_t esi_2 = var_24
            
            if (esi_2 u< *(arg1 + 0x10) u>> 1)
                int32_t eax_23 = *(arg1 + 0x50)
                
                if (eax_23 != 0)
                    *(arg1 + 0x4c) = eax_23
                    *(arg1 + 0x50) = 0
            
            if (*(arg1 + 0x4c) + esi_2 s>= 0)
                struct thread::CCriticalLock::VTable* var_44
                sub_405ec0(&var_44, arg1 + 0x84)
                int32_t eax_28 = *(arg1 + 0x4c) + esi_2
                *(arg1 + 0x34) = eax_28
                
                if (eax_28 u> eax_12)
                    *(arg1 + 0x34) = eax_28 - eax_12 + eax_7
                
                sub_405f30(&var_44)
            
            int32_t ecx_12 = *(arg1 + 0x48)
            
            if ((ecx_12 != 0 || esi_2 u>= *(arg1 + 0x10) u>> 1)
                    && (ecx_12 != 1 || esi_2 u< *(arg1 + 0x10) u>> 1))
                enum WAIT_EVENT esi_3 = (*(**(arg1 + 0x1c) + 0x24))()
                
                if (esi_3 == WAIT_FAILED)
                    result.b = 0
                else
                    struct thread::CCriticalLock::VTable* var_38
                    sub_405ec0(&var_38, arg1 + 0x8c)
                    int32_t var_8_1 = 0
                    int32_t eax_35 = *(arg1 + 0x24)
                    
                    if (eax_35 s<= 0 || *(arg1 + 0x28) s< eax_35)
                        if (sub_696080(arg1) != 0)
                            sub_405f30(&var_38)
                            
                            if (*(arg1 + 0x48) != 0)
                                *(arg1 + 0x48) = 0
                            else
                                *(arg1 + 0x50) = esi_3
                                *(arg1 + 0x48) = 1
                            
                            result.b = 1
                        else
                            sub_405f30(&var_38)
                            result.b = 1
                    else
                        sub_405f30(&var_38)
                        result.b = 0
            else
                result.b = 1
    else
        *(arg1 + 0x40) = (***(arg1 + 0x20))() - *(arg1 + 0x3c)
        result.b = 1
else
    if (sub_6963f0(arg1).b != 0)
        goto label_695dee
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
