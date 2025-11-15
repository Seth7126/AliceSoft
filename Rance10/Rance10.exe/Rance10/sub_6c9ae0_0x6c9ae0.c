// 函数: sub_6c9ae0
// 地址: 0x6c9ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7469b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_1c = ebx
void* edi = arg3
int32_t eax_3
eax_3.b = *(ebx + 0xc) != 0

if (eax_3 + *(ebx + 4) + edi u> *(ebx + 8))
    void* eax_5
    eax_5.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

int32_t ecx_2 = 0
char* esi = nullptr
char* edx = nullptr
char* var_2c = nullptr
char* var_28 = nullptr
int32_t var_18 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0
int32_t var_20 = 0

if (edi s<= 0)
label_6c9c18:
    sub_700660(arg2, esi, edi)
    ecx_2 = var_18
    ebx.b = 1
else
    while (true)
        char* edi_1 = *(ebx + 4)
        void* eax_6
        eax_6.b = *(ebx + 0xc) != 0
        
        if (eax_6 + 1 + edi_1 u> *(ebx + 8))
            ebx.b = 0
            break
        
        int32_t eax_9 = *(ebx + 0xc)
        ebx.b = *edi_1
        
        if (eax_9 != 0)
            ebx.b <<= eax_9.b
            char ecx_3 = 8 - *(var_1c + 0xc)
            *(var_1c + 4) = &edi_1[1]
            void* eax_11
            eax_11.b = edi_1[1]
            eax_11.b u>>= ecx_3
            ecx_2 = var_18
            ebx.b |= eax_11.b
        else
            *(var_1c + 4) = &edi_1[1]
        
        char var_11 = ebx.b
        
        if (&var_11 u>= edx || esi u> &var_11)
            if (edx == ecx_2)
                sub_405a20(&var_2c, 1)
                ecx_2 = var_24
                edx = var_28
                esi = var_2c
                var_18 = ecx_2
            
            if (edx != 0)
                *edx = ebx.b
        else
            int32_t edi_4 = &var_11 - esi
            
            if (edx == ecx_2)
                sub_405a20(&var_2c, 1)
                ecx_2 = var_24
                edx = var_28
                esi = var_2c
                var_18 = ecx_2
            
            if (edx != 0)
                *edx = esi[edi_4]
        
        edx = &edx[1]
        edi = arg3
        int32_t eax_14 = var_20 + 1
        var_28 = edx
        var_20 = eax_14
        
        if (eax_14 s>= edi)
            goto label_6c9c18
        
        ebx = var_1c

if (esi != 0)
    sub_403160(esi, ecx_2 - esi, 1)

char* eax_8
eax_8.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
