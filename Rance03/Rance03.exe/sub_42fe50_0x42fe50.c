// 函数: sub_42fe50
// 地址: 0x42fe50
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
void* ebx = arg1
void* var_40 = ebx
void* result = nullptr
int32_t esi = 0
void* result_1 = nullptr

if (arg3 s> 0)
    result = nullptr
    
    do
        int32_t var_20_1 = 0xf
        void* var_24_1 = nullptr
        char var_34 = 0
        int32_t var_c_1 = 0
        void* eax_7 = (*(**(ebx + 0xc) + 0xc))((*(**(ebx + 8) + 0x18))(arg2), esi)
        int32_t* ecx_2 = *(ebx + 8)
        void* var_3c = eax_7
        int32_t* eax_9 = (*(*ecx_2 + 4))(arg2)
        int32_t eax_12
        int32_t edx_2
        
        if (eax_9 != 0 && esi s>= 0)
            edx_2:eax_12 = sx.q((*(*eax_9 + 0x14))(eax_4))
        
        if (eax_9 == 0 || esi s< 0 || esi s>= (eax_12 + (edx_2 & 3)) s>> 2)
            ebx = var_40
        else
            int32_t eax_16 = (*(*eax_9 + 0x18))()
            ebx = var_40
            
            if (eax_16 != 0)
                sub_42d4b0(ebx, var_3c, *(eax_16 + (esi << 2)), &var_34)
        
        void** ecx_6 = &var_3c
        var_3c = var_24_1
        
        if (result s>= var_24_1)
            ecx_6 = &result_1
        
        result = *ecx_6
        int32_t var_c_2 = 0xffffffff
        result_1 = result
        
        if (var_20_1 u>= 0x10)
            j__free(var_34.d)
        
        esi += 1
    while (esi s< arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
