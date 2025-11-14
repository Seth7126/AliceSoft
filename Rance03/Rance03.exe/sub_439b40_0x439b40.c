// 函数: sub_439b40
// 地址: 0x439b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CToken::VTable* var_3c
struct advengine::CToken::VTable** eax_5 = sub_438820(&var_3c)
int32_t var_4 = 0
*(arg1 + 8) = eax_5[1]

if (arg1 + 0xc != &eax_5[2])
    sub_401ff0(arg1 + 0xc, &eax_5[2], 0, 0xffffffff)

*(arg1 + 0x24) = eax_5[8]
int32_t var_4_1 = 0xffffffff
*(arg1 + 0x28) = eax_5[9]
var_3c = &advengine::CToken::`vftable'
int32_t var_20
int32_t var_34

if (var_20 u>= 0x10)
    j__free(var_34)
int32_t ebp = *(arg1 + 0x30)
void* ecx_3 = arg1 + 0x2c
int32_t* edi_1 = *ecx_3
void* var_40 = ecx_3

if (edi_1 != ebp)
    do
        (**edi_1)(0)
        edi_1 = &edi_1[0xa]
    while (edi_1 != ebp)
    
    ecx_3 = arg1 + 0x2c

*(ecx_3 + 4) = *ecx_3
void* edi_2 = *(arg2 + 0x2c)

if (edi_2 != *(arg2 + 0x34))
    *(arg2 + 0x2c) = edi_2 + 0x28
else
    edi_2 = arg2 + 4

int32_t edx = *(edi_2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (edx != 4)
    void* eax_10
    eax_10.b = edx == 0x12
    
    if (eax_10.b != 0)
        *(arg1 + 8) = edx
        
        if (arg1 + 0xc != edi_2 + 8)
            sub_401ff0(arg1 + 0xc, edi_2 + 8, 0, 0xffffffff)
            ecx_3 = arg1 + 0x2c
        
        *(arg1 + 0x24) = *(edi_2 + 0x20)
        *(arg1 + 0x28) = *(edi_2 + 0x24)
        edi_2 = *(arg2 + 0x2c)
        
        if (edi_2 != *(arg2 + 0x34))
            *(arg2 + 0x2c) = edi_2 + 0x28
        else
            edi_2 = arg2 + 4
    
    result = *(edi_2 + 4)

if (edx == 4 || result == 2 || result == 3)
    sub_437860(ecx_3, edi_2)
    result.b = 1
else if (result == 1)
    var_4c = nullptr
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0
    int32_t var_4_2 = 1
    sub_437860(&var_4c, edi_2)
    void* ebx
    
    if (*(arg2 + 0x2c) == *(arg2 + 0x34))
    label_439d1d:
        sub_437950(var_40, &var_4c)
        ebx.b = 1
    else
        while (true)
            void* ecx_7 = *(arg2 + 0x2c)
            
            if (ecx_7 != *(arg2 + 0x34))
                *(arg2 + 0x2c) = ecx_7 + 0x28
            else
                ecx_7 = arg2 + 4
            
            if (*(ecx_7 + 4) != 9)
                int32_t eax_19 = *(arg2 + 0x2c)
                
                if (eax_19 != *(arg2 + 0x30))
                    *(arg2 + 0x2c) = eax_19 - 0x28
                
                goto label_439d1d
            
            sub_437860(&var_4c, ecx_7)
            void* ecx_9 = *(arg2 + 0x2c)
            
            if (ecx_9 != *(arg2 + 0x34))
                *(arg2 + 0x2c) = ecx_9 + 0x28
            else
                ecx_9 = arg2 + 4
            
            if (*(ecx_9 + 4) != 1)
                ebx.b = 0
                break
            
            sub_437860(&var_4c, ecx_9)
            
            if (*(arg2 + 0x2c) == *(arg2 + 0x34))
                goto label_439d1d
    
    int32_t var_4_3 = 0xffffffff
    sub_435c20(&var_4c)
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
