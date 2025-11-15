// 函数: sub_695b60
// 地址: 0x695b60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747d70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_48 = ebx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(ebx + 0x1c) == 0)
    result.b = 0
else
    if (*(ebx + 0x14) == 0)
        goto label_695bd5
    
    EnterCriticalSection(*(ebx + 0x80) + 4)
    ebx.b = *(ebx + 0x18) != 0
    LeaveCriticalSection(*(var_48 + 0x80) + 4)
    
    if (ebx.b == 0)
        result.b = 0
    else
        ebx = var_48
    label_695bd5:
        int32_t* esi_1 = *(ebx + 0x44)
        *(ebx + 0x4c) = 0
        *(ebx + 0x50) = 0
        *(ebx + 0x28) = 0
        int32_t eax_9 = (*(*esi_1 + 0x1c))(eax_2)
        int32_t eax_10 = (*(*esi_1 + 0xc))()
        int32_t* esi_2 = *(ebx + 0x44)
        int32_t var_4c = *(ebx + 0x2c) * ((eax_9 * eax_10) u>> 3)
        int32_t eax_12 = (*(*esi_2 + 0x1c))()
        int32_t eax_13 = (*(*esi_2 + 0xc))()
        int32_t esi_4 = *(ebx + 0x30) * ((eax_12 * eax_13) u>> 3)
        
        if (esi_4 u> var_4c)
            if ((*(**(ebx + 0x1c) + 0x24))() == 0xffffffff)
                result.b = 0
            else
                *(ebx + 0x48) = 0
                struct thread::CCriticalLock::VTable* var_20
                sub_405ec0(&var_20, ebx + 0x8c)
                int32_t var_8_2 = 2
                struct thread::CCriticalLock::VTable** ecx_14 = &var_20
                
                if (sub_696080(ebx) != 0)
                    int32_t var_8_3 = 0xffffffff
                    sub_405f30(ecx_14)
                    
                    if (sub_695fb0(ebx).b == 0)
                        result.b = 0
                    else
                        *(ebx + 0x48) = 1
                        sub_405ec0(&var_20, ebx + 0x8c)
                        int32_t var_8_4 = 3
                        ecx_14 = &var_20
                        
                        if (sub_696080(ebx) == 0)
                            sub_405f30(ecx_14)
                            result.b = 0
                        else
                            sub_405f30(ecx_14)
                            *(ebx + 0x48) = 0
                            result.b = 1
                else
                    sub_405f30(ecx_14)
                    result.b = 0
        else
            void var_2c
            sub_403360(&var_2c, 0x76f790)
            int32_t var_8_1 = 0
            var_8_1.b = 1
            void var_44
            sub_45aae0(sub_5fcca0(&var_4c, &var_2c, &var_44, &var_4c, esi_4))
            sub_403320(&var_44)
            sub_403320(&var_2c)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
