// 函数: sub_50a440
// 地址: 0x50a440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1753
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1 + 0x14
void** var_30 = arg2
int32_t edi = arg2[4]
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t esi = ecx[4]

if (ecx[5] u>= 0x10)
    ecx = *ecx

int32_t eax_6 = edi

if (esi u< edi)
    eax_6 = esi

int32_t eax_7
int32_t ecx_1
eax_7, ecx_1 = sub_405190(eax_6, edx, ecx, eax_6)
bool cond:3 = eax_7 == 0

if (eax_7 == 0)
    if (esi u>= edi)
        eax_7.b = esi != edi
    else
        eax_7 = 0xffffffff
    
    cond:3 = eax_7 == 0

eax_7.b = cond:3
struct _EXCEPTION_REGISTRATION_RECORD** result

if (eax_7.b == 0 || *(arg1 + 0x2c) != arg3 || *(arg1 + 0x30) != arg4 || *(arg1 + 0x34) != arg5)
    for (int32_t* i = *(arg1 + 8); i != *(arg1 + 0xc); i = &i[1])
        int32_t* ecx_3 = *i
        
        if (ecx_3 != 0)
            (**ecx_3)(1)
    
    int32_t i_3 = arg3
    int32_t i_1 = i_3
    *(arg1 + 0xc) = *(arg1 + 8)
    
    if (i_3 s< arg4 + i_3)
        do
            struct partsengine::CLLSprite::VTable** eax_14 = sub_69adc6(0x1c)
            struct partsengine::CLLSprite::VTable** var_2c_1 = eax_14
            int32_t var_4 = 0
            struct partsengine::CLLSprite::VTable** esi_1
            
            if (eax_14 == 0)
                esi_1 = nullptr
            else
                esi_1 = sub_505680(eax_14)
            
            int32_t var_4_1 = 0xffffffff
            int32_t i_2 = i_1
            struct partsengine::CLLSprite::VTable** var_34 = esi_1
            int32_t var_4_2 = 1
            int32_t var_4_3 = 0xffffffff
            int32_t var_28
            result.b = sub_5058d0(esi_1, 
                sub_4691f0(&var_28, 
                    std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                        var_30))).b == 0
            char var_35_1 = result.b
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)
                result.b = var_35_1
            
            if (result.b != 0)
                if (esi_1 != 0)
                    (*esi_1)->vFunc_0(1)
                
                result.b = 0
                goto label_50a655
            
            int32_t eax_18 = *(arg1 + 0xc)
            struct partsengine::CLLSprite::VTable*** ecx_7 = &var_34
            
            if (&var_34 u< eax_18)
                ecx_7 = *(arg1 + 8)
            
            if (&var_34 u>= eax_18 || ecx_7 u> &var_34)
                if (eax_18 == *(arg1 + 0x10))
                    struct partsengine::CLLSprite::VTable*** var_50_4 = ecx_7
                    sub_412f20(arg1 + 8)
                
                struct partsengine::CLLSprite::VTable*** eax_21 = *(arg1 + 0xc)
                
                if (eax_21 != 0)
                    *eax_21 = esi_1
            else
                if (eax_18 == *(arg1 + 0x10))
                    struct partsengine::CLLSprite::VTable*** var_50_3 = ecx_7
                    sub_412f20(arg1 + 8)
                
                int32_t* ecx_9 = *(arg1 + 0xc)
                
                if (ecx_9 != 0)
                    *ecx_9 = *(*(arg1 + 8) + ((&var_34 - ecx_7) s>> 2 << 2))
            
            i_1 += 1
            i_3 = arg3
            *(arg1 + 0xc) += 4
        while (i_1 s< arg4 + i_3)
    
    if (arg1 + 0x14 != var_30)
        sub_401ff0(arg1 + 0x14, var_30, 0, 0xffffffff)
    
    *(arg1 + 0x30) = arg4
    *(arg1 + 0x2c) = i_3
    *(arg1 + 0x34) = arg5

result.b = 1
*(arg1 + 0x40) = 0
*(arg1 + 0x58) = 1
*(arg1 + 0x3c) = 0
*(arg1 + 0x38) = 1
label_50a655:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
