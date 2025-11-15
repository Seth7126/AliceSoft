// 函数: sub_41ebf0
// 地址: 0x41ebf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728ce8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_38 = esi
int32_t eax_6 = (*(**(*(esi + 4) + 8) + 0x28))(eax_2) - 1
sub_6ca100(arg2, eax_6)
int32_t ebx = 0
void* result

if (eax_6 s<= 0)
label_41eda8:
    result.b = 1
else
    while (true)
        void* var_1c_1 = 0xf
        void* var_20_1 = nullptr
        char var_30 = 0
        int32_t var_8_1 = 0
        void* esi_1 = *(esi + 4)
        int32_t eax_11 = (*(**(esi_1 + 8) + 0x14))((*(**(esi_1 + 8) + 0x2c))(
            (*(**(esi_1 + 8) + 0x28))() - 1 - ebx - 1))
        char* edx_6 = (***(esi_1 + 0xc))(eax_11)
        
        if (edx_6 != 0)
            void* ecx_6
            
            if (*edx_6 != 0)
                char* ecx_7 = edx_6
                char* eax_12
                
                do
                    eax_12.b = *ecx_7
                    ecx_7 = &ecx_7[1]
                while (eax_12.b != 0)
                ecx_6 = ecx_7 - &ecx_7[1]
            else
                ecx_6 = nullptr
            
            sub_403490(&var_30, edx_6, ecx_6)
            char* edi_1 = &var_30
            char* edx_7 = &var_30
            
            if (var_1c_1 u>= 0x10)
                edi_1 = var_30.d
            
            if (var_1c_1 u>= 0x10)
                edx_7 = var_30.d
            
            int32_t var_5c_5 = 0.d
            sub_6ca200(arg2 + 4, *(arg2 + 8), edx_7, var_20_1 + edi_1)
            char var_31 = 0
            sub_4263a0(arg2 + 4, &var_31)
            void* esi_5 = *(var_38 + 4)
            
            if (ebx s>= 0 && ebx s< (*(**(esi_5 + 8) + 0x28))())
                sub_6ca100(arg2, 
                    (*(**(esi_5 + 8) + 0x2c))((*(**(esi_5 + 8) + 0x28))() - 1 - ebx - 1))
                void* esi_6 = *(var_38 + 4)
                
                if (ebx s< (*(**(esi_6 + 8) + 0x28))())
                    esi = var_38
                    sub_6ca100(arg2, 
                        (*(**(*(esi + 4) + 8) + 0x38))((*(**(esi_6 + 8) + 0x2c))(
                            (*(**(esi_6 + 8) + 0x28))() - 1 - ebx - 1)))
                    int32_t var_8_2 = 0xffffffff
                    
                    if (var_1c_1 u>= 0x10)
                        sub_403160(var_30.d, var_1c_1 + 1, 1)
                    
                    ebx += 1
                    
                    if (ebx s>= eax_6)
                        goto label_41eda8
                    
                    continue
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
