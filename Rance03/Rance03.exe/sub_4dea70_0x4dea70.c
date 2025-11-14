// 函数: sub_4dea70
// 地址: 0x4dea70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be756
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_4a4020(arg1[0x23])
struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_4

if (arg1[0x26] != 0xffffffff)
    eax_4 = (*(*arg1 + 0x18))(eax_2)

if (arg1[0x26] == 0xffffffff || eax_4.b == 0)
    void* esi_1 = *(eax_3 + 0x34)
    
    if ((*(**(*(esi_1 + 0x28) + 4) + 8))(eax_2) != 0xd)
        (*(**(*(esi_1 + 0x28) + 4) + 4))()
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_24 = sub_69adc6(0x15c)
        var_10 = eax_24
        int32_t var_4_1 = 2
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_18
        
        if (eax_24 == 0)
            ecx_18 = nullptr
        else
            ecx_18 = sub_517c70(eax_24)
        
        *(*(esi_1 + 0x28) + 4) = ecx_18
        *(esi_1 + 0x14) = 1
    
    eax_4 = sub_51c520(*(*(esi_1 + 0x28) + 4))
else if (arg1[0x26] != 0xffffffff)
    eax_4 = sub_4c75f0(&arg1[0x2a])
    var_10 = eax_4
    
    if (arg1[0x27] != eax_4)
        int32_t* ecx_2 = &var_10
        void* eax_6 = &var_10
        
        if (eax_4 s>= arg1[0x26])
            ecx_2 = &arg1[0x26]
        
        if (arg1[0x26] s>= eax_4)
            eax_6 = &arg1[0x26]
        
        int32_t ecx_3 = *ecx_2
        int32_t eax_7 = *eax_6
        
        if (ecx_3 != eax_7)
            int32_t eax_9 =
                sub_4d1ca0(eax_3, ecx_3, eax_7 - ecx_3, arg1[0x5f], arg1[0x60], arg1[0x61], 1)
            arg1[0x27] = eax_4
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        
        void* edi_1 = *(eax_3 + 0x34)
        
        if ((*(**(*(edi_1 + 0x28) + 4) + 8))() != 0xd)
            (*(**(*(edi_1 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_15 =
                sub_69adc6(0x15c)
            var_10 = eax_15
            int32_t var_4 = 0xe
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_10
            
            if (eax_15 == 0)
                ecx_10 = nullptr
            else
                ecx_10 = sub_517c70(eax_15)
            
            *(*(edi_1 + 0x28) + 4) = ecx_10
            *(edi_1 + 0x14) = 1
        
        int32_t eax_18 = sub_51c520(*(*(edi_1 + 0x28) + 4))
        arg1[0x27] = eax_4
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_18

fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
