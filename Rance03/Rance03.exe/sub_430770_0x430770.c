// 函数: sub_430770
// 地址: 0x430770
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b5548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_44 = arg1
int32_t result = 0
int32_t esi = 0
int32_t result_1 = 0

if (arg3 s> 0)
    void* edi_1 = arg1
    
    do
        int32_t var_20_1 = 0xf
        int32_t var_24_1 = 0
        char var_34 = 0
        int32_t var_c_1 = 0
        int32_t* eax_6 = (*(**(edi_1 + 8) + 4))(arg2)
        int32_t eax_9
        int32_t edx_1
        
        if (eax_6 != 0 && esi s>= 0)
            edx_1:eax_9 = sx.q((*(*eax_6 + 0x14))(eax_4))
        
        int32_t var_40
        
        if (eax_6 == 0 || esi s< 0 || esi s>= (eax_9 + (edx_1 & 3)) s>> 2)
            edi_1 = var_44
        else
            int32_t eax_13 = (*(*eax_6 + 0x18))()
            edi_1 = var_44
            
            if (eax_13 != 0)
                var_40 = *(eax_13 + (esi << 2))
                int32_t var_38
                
                if (sub_42dd60(edi_1, arg2, &var_38) != 0)
                    sub_42f0d0(edi_1, var_38, var_40, &var_34)
        
        int32_t* ecx_5 = &var_40
        var_40 = var_24_1
        
        if (result s>= var_24_1)
            ecx_5 = &result_1
        
        result = *ecx_5
        int32_t var_c_2 = 0xffffffff
        result_1 = result
        
        if (var_20_1 u>= 0x10)
            j__free(var_34.d)
        
        esi += 1
    while (esi s< arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
