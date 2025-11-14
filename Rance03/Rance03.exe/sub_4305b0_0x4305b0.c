// 函数: sub_4305b0
// 地址: 0x4305b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b5548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t edi
int32_t var_50 = edi
int32_t eax_4 = __security_cookie ^ &var_50
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = arg1
void* var_40 = eax_5
int32_t result = 0
int32_t esi = 0
int32_t result_1 = 0

if (arg3 s> 0)
    do
        int32_t var_20_1 = 0xf
        int32_t var_24_1 = 0
        char var_34 = 0
        int32_t var_c_1 = 0
        int32_t* eax_7 = (*(**(eax_5 + 8) + 4))(arg2)
        
        if (eax_7 != 0 && esi s>= 0)
            int32_t eax_10
            int32_t edx_1
            edx_1:eax_10 = sx.q((*(*eax_7 + 0x14))(eax_4))
            
            if (esi s< (eax_10 + (edx_1 & 3)) s>> 2)
                int32_t eax_14 = (*(*eax_7 + 0x18))()
                
                if (eax_14 != 0)
                    sub_42f0d0(var_40, 
                        (*(**(var_40 + 0xc) + 0x24))((*(**(var_40 + 8) + 0x1c))(arg2), esi), 
                        *(eax_14 + (esi << 2)), &var_34)
        
        int32_t var_38
        int32_t* ecx_7 = &var_38
        var_38 = var_24_1
        
        if (result s>= var_24_1)
            ecx_7 = &result_1
        
        result = *ecx_7
        int32_t var_c_2 = 0xffffffff
        result_1 = result
        
        if (var_20_1 u>= 0x10)
            j__free(var_34.d)
        
        eax_5 = var_40
        esi += 1
    while (esi s< arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
