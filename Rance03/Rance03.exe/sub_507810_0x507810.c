// 函数: sub_507810
// 地址: 0x507810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSpriteEngineWrapper::VTable* var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSpriteEngineWrapper::VTable* esi = arg1
struct partsengine::CSpriteEngineWrapper::VTable* ebp = arg2
int32_t var_10_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ebp s<= 0)
    result.b = 0
else
    struct partsengine::CSpriteEngineWrapper::VTable* ebx_1 = arg3
    
    if (ebx_1 s<= 0)
        result.b = 0
    else
        struct partsengine::CSpriteEngineWrapper::VTable eax_3 = esi
        void* edi_1 = data_75d4cc
        int32_t eax_4
        
        if (eax_3 == 0)
            eax_4 = sub_44f0e0(edi_1 + 0x29c)
        else
            eax_4 = *(eax_3 + 8)
        
        arg2 = &partsengine::CSpriteEngineWrapper::`vftable'
        int32_t var_4 = 0
        int32_t var_28_1 = eax_4
        void* eax_5 = sub_44e5c0(edi_1 + 0x288)
        
        if (esi != eax_5)
            sub_505830(esi)
            esi = eax_5
            *(eax_5 + 4) += 1
        
        int32_t var_4_1 = 0xffffffff
        sub_505b50(esi, ebp, ebx_1, 0, 0, 0, 0)
        int32_t eax_6 = sub_44f0e0(data_75d4cc + 0x29c)
        arg2 = &partsengine::CSpriteEngineWrapper::`vftable'
        int32_t ecx_6 = ebp << 1
        int32_t var_4_2 = 1
        
        if (sub_44da00(eax_6, ecx_6, ebx_1) != 0)
            arg3 = &partsengine::CSpriteEngineWrapper::`vftable'
            int32_t var_28_4 = eax_6
            int32_t var_4_4 = 3
            struct partsengine::CSpriteEngineWrapper::VTable* eax_8 = sub_514500(ecx_6)
            int32_t* eax_9 = sub_5065e0(esi)
            int32_t* ecx_8 = esi
            
            if (ecx_8 != 0)
                ecx_8 = (*(*ecx_8 + 0x5c))(eax_9, 0, 0, eax_8, 0, 0, ebp, ebx_1)
            
            arg2 = &partsengine::CSpriteEngineWrapper::`vftable'
            int32_t var_28_6 = eax_6
            int32_t var_4_5 = 4
            sub_5144b0(ecx_8)
            result.b = 1
        else
            arg2 = &partsengine::CSpriteEngineWrapper::`vftable'
            int32_t var_28_3 = eax_6
            int32_t var_4_3 = 2
            sub_5144b0(ecx_6)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
