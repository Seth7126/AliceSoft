// 函数: sub_41b020
// 地址: 0x41b020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_9c = 0xffffffff
int32_t (* var_a0)(void* arg1) = sub_728903
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_98
int32_t eax_2 = __security_cookie ^ &var_98
int32_t var_c4 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s>= 0)
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x38e38e39, *(arg1 + 0xc) - *(arg1 + 8))
    int32_t edx_2 = edx_1 s>> 4
    result = (edx_2 u>> 0x1f) + edx_2
    
    if (arg2 s< result)
        result = *(arg1 + 8)
        void* esi_1 = &result[arg2 * 0x12]
        
        if (esi_1 != 0)
            sub_409170(&var_98, U"\n\r", "\r\n")
            int32_t var_9c_1 = 0
            void var_68
            sub_409170(&var_68, "\r\r", U"\r")
            int32_t var_9c_2 = 1
            int32_t var_c8_1 = 0.d
            int32_t var_b4 = 0
            int32_t var_b0_1 = 0
            int32_t var_ac_1 = 0
            char var_38
            sub_409490(&var_b4, &var_98, &var_38)
            var_9c_2.b = 2
            char var_20
            sub_403360(&var_20, arg3)
            var_9c_2.b = 3
            var_9c_2.b = 4
            sub_4055a0(esi_1 + 0x30, sub_6ca500(&var_b4, &var_20, &var_38, &var_b4), 0, 0xffffffff)
            int32_t var_24
            
            if (var_24 u>= 0x10)
                sub_403160(var_38.d, var_24 + 1, 1)
            
            int32_t var_24_1 = 0xf
            int32_t var_28_1 = 0
            var_38 = 0
            int32_t var_c
            
            if (var_c u>= 0x10)
                sub_403160(var_20.d, var_c + 1, 1)
            
            int32_t var_c_1 = 0xf
            int32_t var_10_1 = 0
            var_20 = 0
            sub_408f50(&var_b4)
            int32_t var_9c_3 = 0xffffffff
            result = `eh vector vbase constructor iterator'(&var_98, 0x30, 2, sub_408940)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_98)
return result
