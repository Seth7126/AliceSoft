// 函数: sub_4371c0
// 地址: 0x4371c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5d5e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b8
int32_t eax_2 = __security_cookie ^ &var_b8
int32_t __saved_edi
int32_t var_cc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *(arg1 + 0x6c)
int32_t var_b4 = arg3

for (; i != *(arg1 + 0x70); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

*(arg1 + 0x70) = *(arg1 + 0x6c)
struct _EXCEPTION_REGISTRATION_RECORD** var_b0 = nullptr
int32_t var_ac = 0
int32_t var_a8 = 0
int32_t var_4 = 0
int32_t edi = *(arg1 + 0x54)
int32_t eax_9
int32_t edx
edx:eax_9 = muls.dp.d(0x66666667, *(arg1 + 0x58) - edi)
struct advengine::CTokenList::VTable* const var_58 = &advengine::CTokenList::`vftable'
int32_t edx_1 = edx s>> 4
struct advengine::CToken::VTable* var_54
sub_438820(&var_54)
int32_t var_2c = edi
int32_t var_28 = edi
int32_t var_24 = edi + ((edx_1 u>> 0x1f) + edx_1) * 0x28
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18 = 0
var_4.b = 1
void* ebx

if (sub_436af0(arg1, &var_b0, &var_58, var_b4, 1) != 0)
    struct advengine::CToken::VTable** edi_1 = var_b0
    struct advengine::CTokenList::VTable* const var_a0 = &advengine::CTokenList::`vftable'
    struct advengine::CToken::VTable* var_9c
    sub_438820(&var_9c)
    struct advengine::CToken::VTable** var_74_1 = edi_1
    int32_t ecx_8 = 0
    void* eax_15 = &edi_1[(var_ac - edi_1) s/ 0x28 * 0xa]
    int32_t var_68_1 = 0
    int32_t var_64_1 = 0
    int32_t var_60_1 = 0
    var_4.b = 2
    
    if (edi_1 == eax_15)
    label_4373a0:
        ebx.b = 1
    else
        while (true)
            int32_t* esi_6 = sub_69adc6(0xc)
            
            if (esi_6 == 0)
                esi_6 = nullptr
            else
                *esi_6 = &advengine::CLineSyntax::`vftable'
                esi_6[1] = 0
                esi_6[2] = 0
            
            var_b4 = esi_6
            
            if (sub_438540(esi_6, &var_a0) == 0)
                if (esi_6 != 0)
                    (**esi_6)(1)
                
                for (int32_t* i_1 = *(arg1 + 0x6c); i_1 != *(arg1 + 0x70); i_1 = &i_1[1])
                    int32_t* ecx_16 = *i_1
                    
                    if (ecx_16 != 0)
                        (**ecx_16)(1)
                
                struct advengine::CToken::VTable** ecx_17 = var_74_1
                *(arg1 + 0x70) = *(arg1 + 0x6c)
                struct advengine::CToken::VTable** esi_8
                
                if (ecx_17 != eax_15)
                    esi_8 = ecx_17
                    ecx_17 = &ecx_17[0xa]
                    var_74_1 = ecx_17
                else
                    esi_8 = &var_9c
                
                *(arg2 + 4) = esi_8[1]
                
                if (arg2 + 8 != &esi_8[2])
                    sub_401ff0(arg2 + 8, &esi_8[2], 0, 0xffffffff)
                    ecx_17 = var_74_1
                
                *(arg2 + 0x20) = esi_8[8]
                *(arg2 + 0x24) = esi_8[9]
                
                if (ecx_17 != edi_1)
                    void* var_74_2 = ecx_17 - 0x28
                
                ecx_8 = var_68_1
                ebx.b = 0
                break
            
            sub_412de0(arg1 + 0x6c, &var_b4)
            
            if (var_74_1 == eax_15)
                ecx_8 = var_68_1
                goto label_4373a0
    
    var_a0 = &advengine::CTokenList::`vftable'
    
    if (ecx_8 != 0)
        j__free(ecx_8)
        int32_t var_68_2 = 0
        int32_t var_64_2 = 0
        int32_t var_60_2 = 0
    
    var_9c = &advengine::CToken::`vftable'
    int32_t var_80
    char var_94
    
    if (var_80 u>= 0x10)
        j__free(var_94.d)
    int32_t var_80_1 = 0xf
    int32_t var_84_1 = 0
    char var_94_1 = 0
else
    ebx.b = 0

var_58 = &advengine::CTokenList::`vftable'

if (var_20 != 0)
    j__free(var_20)
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0

var_54 = &advengine::CToken::`vftable'
int32_t var_38
char var_4c

if (var_38 u>= 0x10)
    j__free(var_4c.d)
int32_t var_4_1 = 0xffffffff
struct _EXCEPTION_REGISTRATION_RECORD** esi_7 = var_b0
int32_t var_38_1 = 0xf
int32_t var_3c = 0
char var_4c_1 = 0

if (esi_7 != 0)
    if (esi_7 != var_ac)
        do
            (*esi_7)->Next(0)
            esi_7 = &esi_7[0xa]
        while (esi_7 != var_ac)
        
        esi_7 = var_b0
    
    j__free(esi_7)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b8)
return result
