// 函数: sub_44df90
// 地址: 0x44df90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b725b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d4cc
struct chipmunk::CSceneRendererD3D9::VTable** edi = arg1
int32_t* result = *(esi + 0x2b8)

if (result != edi)
    if (result == 1)
        int32_t* ecx_1 = *(esi + 0x2c0)
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 4))(eax_2)
            *(esi + 0x2c0) = 0
        
        int32_t* ecx_2 = *(esi + 0x2b4)
        
        if (ecx_2 != 0)
            (**ecx_2)(1)
            *(esi + 0x2b4) = 0
    
    if (edi != 0)
        if (edi != 1)
        label_44e0cd:
            result.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        int32_t* ecx_3 = *(esi + 0x2c0)
        
        if (ecx_3 != 0)
            (*(*ecx_3 + 4))(eax_2)
            *(esi + 0x2c0) = 0
        
        struct IDXPlugin::chipmunk::CDXPlugin::VTable** eax_6 = sub_69adc6(0x10)
        
        if (eax_6 == 0)
            eax_6 = nullptr
        else
            *eax_6 = &chipmunk::CDXPlugin::`vftable'{for `IDXPlugin'}
            eax_6[1] = 1
            eax_6[2] = 0
            eax_6[3] = 0
        
        *(esi + 0x2c0) = eax_6
        eax_6[2] = esi
        
        if (sub_44c280(*(esi + 0x2c0)).b == 0)
            goto label_44e0cd
        
        int32_t* ecx_5 = *(esi + 0x2b4)
        
        if (ecx_5 != 0)
            (**ecx_5)(1)
            *(esi + 0x2b4) = 0
        
        struct chipmunk::CSceneRendererD3D9::VTable** eax_8 = sub_69adc6(0x88)
        arg1 = eax_8
        int32_t var_4 = 0
        struct chipmunk::CSceneRendererD3D9::VTable** eax_9
        
        if (eax_8 == 0)
            eax_9 = nullptr
        else
            eax_9 = sub_523ed0(eax_8)
        
        int32_t var_4_1 = 0xffffffff
        *(esi + 0x2b4) = eax_9
        
        if (sub_524010(eax_9).b == 0)
            goto label_44e0cd
    
    *(esi + 0x2b8) = edi

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
