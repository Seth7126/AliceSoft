// 函数: sub_4e2a10
// 地址: 0x4e2a10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c03a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = *(arg1 + 0x204)

if (ebx s> 0)
    void* eax_5 = sub_4a4020(*(arg1 + 0x98))
    void** var_2c
    sub_4e2c00(&var_2c, arg1 + 0x154, arg2)
    int32_t var_4 = 0
    char var_44
    sub_4e2c00(&var_44, arg1 + 0x1cc, arg2)
    var_4.b = 1
    void* ecx_2 = *(*(arg1 + 0x2d4) + 8)
    char eax_8
    
    if (ecx_2 != 0)
        eax_8 = sub_48d400(ecx_2, &var_44)
    
    int32_t var_18
    
    if (ecx_2 == 0 || eax_8 == 0)
        void** eax_10 = &var_2c
        
        if (var_18 u>= 0x10)
            eax_10 = var_2c
        
        if (sub_44a260(eax_10) == 0)
            struct partsengine::IAddConstructionPartsProcess::partsengine::CGUIPlainCG::VTable* 
                const var_5c = &
                partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
            char var_58_1 = 0
            int32_t var_54_1 = 0
            var_4.b = 2
            int32_t var_50_1 = 0x96
            int32_t var_4c_1 = 0x96
            int32_t var_48_1 = 0x96
            sub_4e2c70(&var_5c, arg2)
            char eax_12 = *(arg1 + 0x30)
            int32_t var_60_1
            
            if (eax_12 == 0)
                var_60_1 = ebx
            else
                var_60_1 = *(arg1 + 0xec)
            
            if (eax_12 == 0)
                ebx = *(arg1 + 0xec)
            
            sub_4d2240(eax_5, arg2)
            sub_502e30(sub_510540(*(eax_5 + 0x34), arg2), var_60_1, ebx)
            var_5c->vFunc_0(*(eax_5 + 0x34), var_60_1, ebx, arg2)
            result = sub_503c60(sub_510540(*(eax_5 + 0x34), arg2))
        else
            void* esi_1 = *(eax_5 + 0x34)
            sub_510cf0(esi_1, 0xb, arg2)
            result = sub_4fe4a0(*(*(esi_1 + 0x28) + (arg2 << 2)), &var_2c, nullptr)
    else
        result = sub_492050(sub_510680(*(eax_5 + 0x34), arg2), &var_44)
    
    int32_t var_30
    
    if (var_30 u>= 0x10)
        result = j__free(var_44.d)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18 u>= 0x10)
        result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
