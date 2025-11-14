// 函数: sub_5246c0
// 地址: 0x5246c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3018
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_4
void* ebx = *(arg_4 + 0x1c0)
int32_t result

if (ebx == 0)
    result.b = 1
else
    struct sealengine::CDetectPolygonList::VTable** edi_1 = sub_69adc6(0x10)
    
    if (edi_1 == 0)
        edi_1 = nullptr
    else
        *edi_1 = &sealengine::CDetectPolygonList::`vftable'
        edi_1[1] = 0
        edi_1[2] = 0
        edi_1[3] = 0
    
    int32_t esi_1 = arg_4
    EnterCriticalSection(*(esi_1 + 0x40) + 4)
    int32_t var_10_1 = *(esi_1 + 0x38)
    CRITICAL_SECTION* lpCriticalSection = *(esi_1 + 0x40) + 4
    int64_t var_18 = *(esi_1 + 0x30)
    LeaveCriticalSection(lpCriticalSection)
    
    if (sub_530200(edi_1, ebx, &var_18).b != 0)
        var_18.d = &thread::CCriticalLock::`vftable'
        void* var_10_2 = arg1 + 4
        EnterCriticalSection(*(arg1 + 8) + 4)
        var_18:4.b = 1
        int32_t var_4 = 0
        int32_t* var_1c
        sub_420040(arg1 + 0x14, &var_1c, &arg_4)
        int32_t* esi_2 = var_1c
        
        if (esi_2 != *(arg1 + 0x14))
            int32_t* ecx_3 = esi_2[5]
            
            if (ecx_3 != 0)
                (**ecx_3)(1)
            
            sub_420180(arg1 + 0x14, &var_1c, esi_2)
        
        struct sealengine::CDetectPolygonList::VTable*** eax_13 = sub_41ff70(arg1 + 0x14, &arg_4)
        var_18:4.b = 0
        *eax_13 = edi_1
        LeaveCriticalSection(*(arg1 + 8) + 4)
        sub_5248d0(arg1)
        result.b = 1
    else
        if (edi_1 != 0)
            (*edi_1)->vFunc_0(1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
