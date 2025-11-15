// 函数: sub_4aff10
// 地址: 0x4aff10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7290a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *arg1

if (esi != arg1[1])
    int32_t i
    
    while (true)
        int32_t eax_4 = esi[1]
        int32_t* ecx = *esi
        
        if (eax_4 != ecx)
            while (*ecx != i)
                ecx = &ecx[1]
                
                if (ecx == eax_4)
                    break
            
            if (eax_4 != ecx)
                break
        
        esi = &esi[3]
        
        if (esi == arg1[1])
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_4
    
    void* var_1c
    int32_t* var_30_2 = sub_4af750(&var_1c, arg2)
    int32_t var_8_1 = 0
    eax_3 = sub_4b1030(arg1, &i, &esi[3])
    void* ecx_5 = var_1c
    int32_t var_14
    
    if (ecx_5 != 0)
        eax_3 = sub_403160(ecx_5, (var_14 - ecx_5) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
