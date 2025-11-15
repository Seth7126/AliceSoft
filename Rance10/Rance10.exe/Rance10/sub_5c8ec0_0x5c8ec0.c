// 函数: sub_5c8ec0
// 地址: 0x5c8ec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
char* result = *(*ebx + 0x40)
char* result_1 = result

if (result s<= 0 || ebx[0x87] s< 2 || *(ebx + 0x221) == 0)
label_5c8fdc:
    
    if (ebx[0x91].b == 0)
        result.b = 1
    else
        int32_t* var_48_6 = arg1
        sub_5dc6a0(ebx[0x93], ebx[0x94])
        ebx[0x94] = ebx[0x93]
        ebx[0x91].b = 0
        ebx[0x92] = 0xffffffff
        result.b = 1
else
    __Smtx_lock_shared(&ebx[2])
    int32_t* esi_1 = ebx[1]
    __Smtx_unlock_shared(&ebx[2])
    result, arg1 = (*(*esi_1 + 0xa0))(eax_2)
    
    if (result.b == 0)
        goto label_5c8fdc
    
    void* esi_3
    
    if (ebx[0x93] == ebx[0x94] || ebx[0x96] != *(*ebx + 0x58))
        __Smtx_lock_shared(&ebx[2])
        int32_t edi_2 = ebx[1]
        int32_t ecx_3 = __Smtx_unlock_shared(&ebx[2])
        esi_3 = &ebx[0x93]
        int32_t var_48_5 = edi_2
        int32_t var_4c_1 = *(*ebx + 0x58)
        
        if (sub_5dc300(esi_3, ecx_3) != 0)
            goto label_5c8fc1
        
        void var_2c
        sub_403360(&var_2c, 0x76a508)
        int32_t var_8_1 = 0
        sub_5e01e0(&var_2c)
        sub_403320(&var_2c)
        result.b = 0
    else
        esi_3 = &ebx[0x93]
    label_5c8fc1:
        
        if (sub_5dc3f0(esi_3).b == 0)
            result.b = 0
        else
            ebx[0x92] = result_1
            ebx[0x91].b = 1
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
