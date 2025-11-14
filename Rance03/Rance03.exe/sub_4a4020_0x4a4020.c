// 函数: sub_4a4020
// 地址: 0x4a4020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bc896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x5c)
int32_t eax_4

if (ecx != 0)
    eax_4 = (*(*ecx + 0xc))(eax_2)
    (*(**(arg1 + 0x5c) + 8))(1)

if (ecx == 0 || eax_4 != 0xa)
    int32_t* ecx_2 = *(arg1 + 0x5c)
    int32_t eax_7
    
    if (ecx_2 != 0)
        eax_7 = (*(*ecx_2 + 0xc))(eax_2)
    
    if (ecx_2 == 0 || eax_7 s< 0xa)
        int32_t* ecx_11 = *(arg1 + 0x5c)
        
        if (ecx_11 != 0)
            (*(*ecx_11 + 4))(eax_2)
            *(arg1 + 0x5c) = 0
        
        struct IInterface::partsengine::CGUIView::VTable** eax_21 = sub_69adc6(0x44)
        struct IInterface::partsengine::CGUIView::VTable** var_1c_2 = eax_21
        int32_t var_c_2 = 0x16
        struct IInterface::partsengine::CGUIView::VTable** eax_22
        
        if (eax_21 == 0)
            eax_22 = nullptr
        else
            void* var_30_1 = arg1
            eax_22 = sub_4d1390(eax_21, *(arg1 + 0x68), *(arg1 + 0x60))
        
        *(arg1 + 0x5c) = eax_22
    else
        void* esi_2 = *(*(arg1 + 0x5c) + 0x34)
        
        if ((*(**(*(esi_2 + 0x28) + 4) + 8))() != 0xa)
            (*(**(*(esi_2 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CCGSprite::VTable** eax_14 = sub_69adc6(0x5c)
            struct partsengine::CSprite::partsengine::CCGSprite::VTable** var_1c_1 = eax_14
            int32_t var_c_1 = 0xb
            
            if (eax_14 == 0)
                *(*(esi_2 + 0x28) + 4) = 0
                *(esi_2 + 0x14) = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return *(arg1 + 0x5c)
            
            *(*(esi_2 + 0x28) + 4) = sub_4fdb30(eax_14)
            *(esi_2 + 0x14) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return *(arg1 + 0x5c)

fsbase->NtTib.ExceptionList = ExceptionList
return *(arg1 + 0x5c)
