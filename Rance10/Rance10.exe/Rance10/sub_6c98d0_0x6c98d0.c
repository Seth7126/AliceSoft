// 函数: sub_6c98d0
// 地址: 0x6c98d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748e50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_40 = ebx
int32_t eax_4
eax_4.b = *(ebx + 0xc) != 0
void* result

if (eax_4 + 4 + *(ebx + 4) u<= *(ebx + 8))
    char* esi_1 = nullptr
    char* edx_1 = nullptr
    int32_t edi_1 = 0
    char* var_3c = nullptr
    char* var_38_1 = nullptr
    int32_t var_34_1 = 0
    int32_t var_8_1 = 0
    int32_t var_44_1 = 0
    
    while (true)
        char* ecx = *(ebx + 4)
        void* eax_6
        eax_6.b = *(ebx + 0xc) != 0
        
        if (eax_6 + 1 + ecx u> *(ebx + 8))
            ebx.b = 0
            break
        
        int32_t eax_8 = *(ebx + 0xc)
        ebx.b = *ecx
        
        if (eax_8 != 0)
            ebx.b <<= eax_8.b
            char* eax_11 = *(var_40 + 4) + 1
            *(var_40 + 4) = eax_11
            void* ecx_3
            ecx_3.b = 8
            ecx_3.b = 8 - *(var_40 + 0xc)
            esi_1 = var_3c
            eax_11.b = *eax_11
            eax_11.b u>>= ecx_3.b
            ebx.b |= eax_11.b
        else
            *(var_40 + 4) = &ecx[1]
        
        char var_2d = ebx.b
        
        if (&var_2d u>= edx_1 || esi_1 u> &var_2d)
            if (edx_1 == edi_1)
                sub_405a20(&var_3c, 1)
                edi_1 = var_34_1
                edx_1 = var_38_1
                esi_1 = var_3c
            
            if (edx_1 != 0)
                *edx_1 = ebx.b
        else
            int32_t ebx_1 = &var_2d - esi_1
            
            if (edx_1 == edi_1)
                sub_405a20(&var_3c, 1)
                edi_1 = var_34_1
                edx_1 = var_38_1
                esi_1 = var_3c
            
            if (edx_1 != 0)
                *edx_1 = esi_1[ebx_1]
        
        edx_1 = &edx_1[1]
        ebx = var_40
        int32_t eax_14 = var_44_1 + 1
        var_38_1 = edx_1
        var_44_1 = eax_14
        
        if (eax_14 s>= 4)
            var_2d = 0
            
            if (&var_2d u>= edx_1 || esi_1 u> &var_2d)
                if (edx_1 == edi_1)
                    sub_405a20(&var_3c, 1)
                    edi_1 = var_34_1
                    edx_1 = var_38_1
                    esi_1 = var_3c
                
                if (edx_1 != 0)
                    *edx_1 = 0
            else
                ebx = &var_2d - esi_1
                
                if (edx_1 == edi_1)
                    sub_405a20(&var_3c, 1)
                    edi_1 = var_34_1
                    edx_1 = var_38_1
                    esi_1 = var_3c
                
                if (edx_1 != 0)
                    *edx_1 = *(esi_1 + ebx)
            
            void* var_18_1 = 0xf
            void* var_38_2 = &edx_1[1]
            int32_t var_1c_1 = 0
            char var_2c = 0
            sub_403490(&var_2c, esi_1, 4)
            var_8_1.b = 1
            char* edx_3 = &var_2c
            
            if (var_18_1 u>= 0x10)
                edx_3 = var_2c.d
            
            void* ecx_9
            
            if (*edx_3 != 0)
                char* ecx_10 = edx_3
                char i
                
                do
                    i = *ecx_10
                    ecx_10 = &ecx_10[1]
                while (i != 0)
                ecx_9 = ecx_10 - &ecx_10[1]
            else
                ecx_9 = nullptr
            
            sub_403490(arg2, edx_3, ecx_9)
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            ebx.b = 1
            break
    
    if (esi_1 != 0)
        sub_403160(esi_1, edi_1 - esi_1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
