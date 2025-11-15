// 函数: sub_4972e0
// 地址: 0x4972e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@_W@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_3 = sub_497c60(arg1)
uint32_t result
char var_30

if (eax_3 != 0)
    if ((*(**(arg1 + 0x128) + 0xc))(eax_2).b == 0)
        result.b = 0
    else
        int32_t ebx_1 = arg2
        
        if (ebx_1.b != 0 && (*(**(arg1 + 0x128) + 0x70))() != 0)
            (*(**(arg1 + 0x128) + 0x78))()
        
        sub_4995b0(arg1 + 0x12c)
        
        if (sub_4996c0(arg1 + 0x1d4, *(arg1 + 0x14)).b == 0)
            result.b = 0
        else
            int32_t* ecx_7 = *(arg1 + 0x1d4)
            char eax_13
            
            if (ecx_7 != 0)
                int32_t edx_2 = neg.d(arg1)
                eax_13 = (*(*ecx_7 + 8))(arg1, sbb.d(edx_2, edx_2, arg1 != 0) & (arg1 + 4))
            
            if (ecx_7 == 0 || eax_13 == 0)
                sub_497de0(arg1)
                result.b = 0
            else
                if (ebx_1.b != 0)
                    char eax_16
                    void* ecx_10
                    eax_16, ecx_10 = (**(arg1 + 0xd4))()
                    
                    if (eax_16 == 0 && sub_42eb30(ecx_10) == 0)
                        sub_403360(&var_30, 0x760940)
                        int32_t var_8_2 = 1
                        sub_6c56d0(&var_30)
                        int32_t var_8_3 = 0xffffffff
                        sub_403320(&var_30)
                
                sub_409670(arg1 + 0x188, sub_4981e0(arg1, &var_30))
                sub_403320(&var_30)
                
                if (ebx_1.b != 0)
                    if ((**(arg1 + 0xd4))() != 0)
                        void var_a8
                        int32_t* eax_22 = sub_4981e0(arg1, &var_a8)
                        int32_t var_8_4 = 2
                        void var_90
                        char* eax_23 = sub_498430(arg1, &var_90)
                        var_8_4.b = 3
                        void var_78
                        char* eax_24 = sub_4176f0(eax_23.b, eax_23, &var_78, " [ ")
                        var_8_4.b = 4
                        void var_60
                        char* eax_25 = sub_4177a0(eax_24, eax_24, &var_60, eax_22)
                        var_8_4.b = 5
                        void var_48
                        char* edx_8 = sub_4176f0(eax_25.b, eax_25, &var_48, " ]")
                        var_8_4.b = 6
                        
                        if (*(edx_8 + 0x14) u>= 0x10)
                            edx_8 = *edx_8
                        
                        (*(**(arg1 + 0x128) + 0x18))(edx_8)
                        sub_403320(&var_48)
                        sub_403320(&var_60)
                        sub_403320(&var_78)
                        sub_403320(&var_90)
                        int32_t var_8_5 = 0xffffffff
                        sub_403320(&var_a8)
                    
                    if ((**(arg1 + 0xd4))() != 0)
                        (*(**(arg1 + 0x128) + 0x10))()
                    
                    ebx_1 = arg2
                
                if ((**(arg1 + 0xd4))().b != 0)
                    (*(**(arg1 + 0x128) + 0x14))(ebx_1, zx.d(*(arg1 + 0x208)))
                
                result.b = 1
else
    uint32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = eax_3
    sub_403490(&var_30, 0x760914, 0x24)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_30)
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
