// 函数: sub_4da0e0
// 地址: 0x4da0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73467f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4da090(arg1)
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** arg_4
uint32_t ebx = arg_4
char* edx = *(ebx + 4)

if (&edx[4] u<= *(ebx + 8))
    uint32_t result_1 = 0
    uint32_t edi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(ebx + 4) = &edx[4]
    uint32_t result
    
    if (edi_7 s<= 0)
    label_4da1b7:
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    while (true)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** 
            eax_6 = sub_6e810c(0x60)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** 
            var_1c_1 = eax_6
        int32_t var_8_1 = 0
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** 
            eax_7 = sub_4d70a0(eax_6)
        int32_t var_8_2 = 0xffffffff
        arg_4 = eax_7
        
        if (sub_4d74a0(eax_7, ebx, arg2) == 0)
            if (eax_7 != 0)
                (*eax_7)->vFunc_3(1)
            
            break
        
        sub_42ca30(arg1 + 8, &arg_4)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** 
            eax_8 = arg_4
        int32_t ecx_5 = eax_8[0x10] + eax_8[0xf] - 1
        int32_t eax_11 = *(arg1 + 0x14)
        
        if (eax_11 s< ecx_5)
            eax_11 = ecx_5
        
        *(arg1 + 0x14) = eax_11
        result = result_1 + 1
        result_1 = result
        
        if (result s>= edi_7)
            goto label_4da1b7

fsbase->NtTib.ExceptionList = ExceptionList
return 0
