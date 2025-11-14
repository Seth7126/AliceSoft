// 函数: sub_42f8d0
// 地址: 0x42f8d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b5548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
int32_t esi = 0
int32_t result_1 = 0

if (arg2 s> 0)
    void* edi_1 = arg1
    
    do
        int32_t var_20_1 = 0xf
        int32_t var_24_1 = 0
        char var_34 = 0
        int32_t var_c_1 = 0
        int32_t* eax_7 = (*(**(edi_1 + 8) + 4))((*(**(edi_1 + 8) + 0x20))(eax_4))
        
        if (eax_7 == 0 || esi s< 0)
            edi_1 = arg1
        else
            int32_t eax_10
            int32_t edx_2
            edx_2:eax_10 = sx.q((*(*eax_7 + 0x14))())
            
            if (esi s>= (eax_10 + (edx_2 & 3)) s>> 2)
                edi_1 = arg1
            else
                int32_t eax_14 = (*(*eax_7 + 0x18))()
                
                if (eax_14 == 0)
                    edi_1 = arg1
                else
                    edi_1 = arg1
                    sub_42f0d0(edi_1, (*(**(arg1 + 0xc) + 0x18))(esi), *(eax_14 + (esi << 2)), 
                        &var_34)
        
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
        
        esi += 1
    while (esi s< arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
