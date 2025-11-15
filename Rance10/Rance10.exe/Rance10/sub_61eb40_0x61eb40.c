// 函数: sub_61eb40
// 地址: 0x61eb40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x18)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    result = (*(*ecx + 8))(arg3, arg4)
    
    if (result != 0)
        int16_t* var_1c
        sub_431b80(&var_1c, (*result)->__offset(0x14).d(eax_2) + 8)
        int32_t var_8_1 = 0
        int16_t* esi = var_1c
        void* ebx
        
        if (esi == 0)
            ebx.b = 0
        else
            *esi = 0x4447
            esi[1].b = *(arg1 + 8)
            *(esi + 3) = *(arg1 + 9)
            *(esi + 4) = arg4
            sub_700660(&esi[4], (*result)->__offset(0x18).d((*result)->__offset(0x14).d()))
            (*result)->Handler()
            char eax_6 = (*(**(arg1 + 4) + 8))(arg2, &var_1c)
            esi = var_1c
            
            if (eax_6 == 0)
                ebx.b = 0
            else
                ebx.b = 1
        
        int32_t var_14
        
        if (esi != 0)
            sub_403160(esi, var_14 - esi, 1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return ebx.b

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
