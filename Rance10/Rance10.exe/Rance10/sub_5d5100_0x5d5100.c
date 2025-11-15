// 函数: sub_5d5100
// 地址: 0x5d5100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f280
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (*(arg1 + 0x1c) != 0)
    int32_t* edi_1 = *(arg1 + 0x24)
    SRWLOCK* ebx
    ebx.b = 1
    char var_45_1 = 1
    int32_t* i = *edi_1
    
    while (i != edi_1)
        __Smtx_lock_shared(&i[0xb])
        int32_t* eax_3 = i[0xa]
        __Smtx_unlock_shared(&i[0xb])
        
        if ((*(*eax_3 + 8))(eax_2) != 0)
            ebx.b = var_45_1
        else
            char var_44
            int32_t* eax_8 = sub_419600(&i[4], 0x76a7fc, &var_44, &i[4])
            int32_t var_8_1 = 0
            var_8_1.b = 1
            char var_2c[0x10]
            sub_6c52e0(sub_4176f0(eax_8.b, eax_8, &var_2c, 0x76a7e0))
            int32_t var_18
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c[0].d, var_18 + 1, 1)
            
            int32_t var_8_2 = 0xffffffff
            var_18 = 0xf
            int32_t var_1c_1 = 0
            var_2c[0] = 0
            int32_t var_30
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
            
            ebx.b = 0
            var_30 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            var_45_1 = 0
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
    
    sub_5d4d60(arg1)
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
