// 函数: sub_42fa10
// 地址: 0x42fa10
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
void* result = nullptr
int32_t esi = 0
void* result_1 = nullptr

if (arg2 s> 0)
    do
        int32_t var_20_1 = 0xf
        void* var_24_1 = nullptr
        char var_34 = 0
        int32_t var_c_1 = 0
        int32_t eax_7 = (*(**(eax_5 + 8) + 8))(eax_4)
        void* var_3c = (*(**(var_40 + 0xc) + 0xc))((*(**(var_40 + 8) + 0x18))(eax_7), esi)
        int32_t* eax_14 = (*(**(var_40 + 8) + 4))(eax_7)
        
        if (eax_14 != 0 && esi s>= 0)
            int32_t eax_17
            int32_t edx_2
            edx_2:eax_17 = sx.q((*(*eax_14 + 0x14))())
            
            if (esi s< (eax_17 + (edx_2 & 3)) s>> 2)
                int32_t eax_21 = (*(*eax_14 + 0x18))()
                
                if (eax_21 != 0)
                    sub_42d4b0(var_40, var_3c, *(eax_21 + (esi << 2)), &var_34)
        
        void** ecx_8 = &var_3c
        var_3c = var_24_1
        
        if (result s>= var_24_1)
            ecx_8 = &result_1
        
        result = *ecx_8
        int32_t var_c_2 = 0xffffffff
        result_1 = result
        
        if (var_20_1 u>= 0x10)
            j__free(var_34.d)
        
        eax_5 = var_40
        esi += 1
    while (esi s< arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
