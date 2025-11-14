// 函数: sub_42f5b0
// 地址: 0x42f5b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b52c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = nullptr
int32_t esi = 0
void* result_1 = nullptr

if (arg2 s> 0)
    do
        int32_t var_18_1 = 0xf
        void* var_1c_1 = nullptr
        char var_2c = 0
        int32_t var_4 = 0
        void* eax_6 = (*(**(arg1 + 0xc) + 0x18))(esi)
        int32_t* ecx_1 = *(arg1 + 8)
        var_34 = eax_6
        int32_t* eax_9 = (*(**(arg1 + 8) + 4))((*(*ecx_1 + 0x20))(eax_4))
        
        if (eax_9 != 0 && esi s>= 0)
            int32_t eax_12
            int32_t edx_2
            edx_2:eax_12 = sx.q((*(*eax_9 + 0x14))())
            
            if (esi s< (eax_12 + (edx_2 & 3)) s>> 2)
                int32_t eax_16 = (*(*eax_9 + 0x18))()
                
                if (eax_16 != 0)
                    sub_42d4b0(arg1, var_34, *(eax_16 + (esi << 2)), &var_2c)
        
        void** ecx_6 = &var_34
        var_34 = var_1c_1
        
        if (result s>= var_1c_1)
            ecx_6 = &result_1
        
        result = *ecx_6
        int32_t var_4_1 = 0xffffffff
        result_1 = result
        
        if (var_18_1 u>= 0x10)
            j__free(var_2c.d)
        
        esi += 1
    while (esi s< arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
