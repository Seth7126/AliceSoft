// 函数: sub_435030
// 地址: 0x435030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5980
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2 + 0x38
sub_412de0(esi, arg2 + 0x2c)
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
int32_t eax_9 = *(arg1 + 0x30)

for (int32_t* i = *(arg1 + 0x2c); i != eax_9; i = &i[0x14])
    (**i)(0)

*(arg1 + 0x30) = *(arg1 + 0x2c)
void* edi_1 = *(arg2 + 0x2c)
int32_t eax_12 = *(arg2 + 0x34)

if (edi_1 != eax_12)
    *(arg2 + 0x2c) = edi_1 + 0x28
    eax_12 = *(arg2 + 0x34)
else
    edi_1 = arg2 + 4

int32_t result

if (*(edi_1 + 4) == 1)
    void* edx_1 = *(arg2 + 0x2c)
    
    if (edx_1 != eax_12)
        *(arg2 + 0x2c) = edx_1 + 0x28
    else
        edx_1 = arg2 + 4
    
    if (*(edx_1 + 4) != 0xc)
        int32_t eax_18 = *(arg2 + 0x2c)
        
        if (eax_18 != *(arg2 + 0x30))
            *(arg2 + 0x2c) = eax_18 - 0x28
        
        struct _EXCEPTION_REGISTRATION_RECORD** var_54 = nullptr
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 0
        int32_t var_4_2 = 1
        void* ebx
        
        if (sub_4352d0(arg2, &var_54) != 0)
            void* edx_2 = *(arg2 + 0x2c)
            
            if (edx_2 != *(arg2 + 0x34))
                *(arg2 + 0x2c) = edx_2 + 0x28
            else
                edx_2 = arg2 + 4
            
            if (*(edx_2 + 4) == 0xc)
                sub_435290(arg1 + 4, edi_1)
                
                if (arg1 + 0x2c != &var_54)
                    struct _EXCEPTION_REGISTRATION_RECORD** ecx_16 = *(arg1 + 0x2c)
                    *(arg1 + 0x2c) = var_54
                    var_54 = ecx_16
                    int32_t ecx_17 = *(arg1 + 0x30)
                    *(arg1 + 0x30) = var_50_1
                    int32_t var_50_2 = ecx_17
                    int32_t ecx_18 = *(arg1 + 0x34)
                    *(arg1 + 0x34) = var_4c_1
                    int32_t var_4c_2 = ecx_18
                
                ebx.b = 1
            else
                sub_439a60(arg2)
                ebx.b = 0
        else
            int32_t eax_21 = *esi
            
            if (eax_21 == esi[1])
                ebx.b = 0
            else
                *(arg2 + 0x2c) = *(eax_21 + ((esi[1] - eax_21) s>> 2 << 2) - 4)
                esi[1] -= 4
                ebx.b = 0
        
        int32_t var_4_3 = 0xffffffff
        sub_435800(&var_54)
        result.b = ebx.b
    else
        *(arg1 + 8) = *(edi_1 + 4)
        
        if (arg1 + 0xc != edi_1 + 8)
            sub_401ff0(arg1 + 0xc, edi_1 + 8, 0, 0xffffffff)
        
        *(arg1 + 0x24) = *(edi_1 + 0x20)
        *(arg1 + 0x28) = *(edi_1 + 0x24)
        result.b = 1
        esi[1] -= 4
else
    result = *esi
    
    if (result != esi[1])
        *(arg2 + 0x2c) = *(result + ((esi[1] - result) s>> 2 << 2) - 4)
        esi[1] -= 4
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
