// 函数: sub_510720
// 地址: 0x510720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1f4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::C3DLayerSprite::VTable** ebx = arg2
int32_t eax_3 = *(arg1 + 0x28)

if (ebx u<= 3)
    int32_t __saved_edi
    bool cond:0_1 = (*(**(eax_3 + (ebx << 2)) + 8))(__security_cookie ^ &__saved_edi) == 0x15
    eax_3 = *(arg1 + 0x28)
    
    if (not(cond:0_1))
        (*(**(eax_3 + (ebx << 2)) + 4))()
        struct partsengine::CSprite::partsengine::C3DLayerSprite::VTable** esi_1 = sub_69adc6(0x2c)
        arg2 = esi_1
        int32_t var_4 = 9
        
        if (esi_1 == 0)
            esi_1 = nullptr
        else
            *esi_1 = &partsengine::C3DLayerSprite::`vftable'{for `partsengine::CSprite'}
            esi_1[1] = 1
            sub_505680(&esi_1[2])
            esi_1[9].b = 1
            esi_1[0xa] = 0xffffffff
        
        *(*(arg1 + 0x28) + (ebx << 2)) = esi_1
        eax_3 = *(arg1 + 0x28)
        *(arg1 + 0x14) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return *(eax_3 + (ebx << 2))
