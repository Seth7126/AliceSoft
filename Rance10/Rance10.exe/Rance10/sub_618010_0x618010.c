// 函数: sub_618010
// 地址: 0x618010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_34
int32_t eax_1 = __security_cookie ^ &var_34
char* var_28 = arg2
void** ebx_1 = *(arg1 + 0x1d0) - *(arg1 + 0x1d4)
int32_t esi = *(arg1 + 0x1230)
void** var_30 = ebx_1
void** var_2c
sub_61b380(arg1 + 0x122c, &var_2c, &var_30)
void** eax_3

if (var_2c != esi)
    var_2c = ebx_1
    sub_4cedf0(arg1 + 0x124c, &var_30, &var_2c)
    eax_3 = var_30
    
    if (eax_3 != *(arg1 + 0x124c))
        void* var_24
        sub_403360(&var_24, var_28)
        int32_t esi_1 = eax_3[6]
        sub_60c2a0(&eax_3[5], &var_28, &var_24)
        ebx_1.b = var_28 != esi_1
        int32_t var_10
        
        if (var_10 u>= 0x10)
            sub_403160(var_24, var_10 + 1, 1)
        
        void** eax_4
        eax_4.b = ebx_1.b
        @__security_check_cookie@4(eax_1 ^ &var_34)
        return eax_4

eax_3.b = 0
@__security_check_cookie@4(eax_1 ^ &var_34)
return eax_3
