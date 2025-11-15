// 函数: sub_485d90
// 地址: 0x485d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ed50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_41ac20(0x76014c, 0x75daa4)

if (result.b == 0)
    result.b = 0
else
    int32_t* esi_1 = data_7fcb40
    
    if (esi_1 == 0)
        result.b = 0
    else
        int32_t var_8_1 = 0
        void* var_44
        bool cond:0_1 = sub_485ed0(esi_1, sub_4175e0(result, arg2, &var_44, "Sound.afa")) == 0
        int32_t var_8_2 = 0xffffffff
        int32_t* result_1
        result = result_1
        int32_t ebx
        ebx.b = cond:0_1
        
        if (result u>= 0x10)
            result = sub_403160(var_44, result + 1, 1)
        
        if (ebx.b != 0)
            result.b = 0
        else
            int32_t var_8_3 = 1
            int32_t var_8_4 = 0xffffffff
            char var_2c
            ebx.b = sub_485ed0(esi_1, sub_4175e0(result, arg2, &var_2c, "Voice.afa")) == 0
            int32_t* var_18
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c.d, var_18 + 1, 1)
            
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            
            if (ebx.b != 0)
                result.b = 0
            else
                result = (*(*esi_1 + 0x10))(5)
                *(arg1 + 4) = result
                
                if (result != 0)
                    (**result)(eax_2)
                
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
