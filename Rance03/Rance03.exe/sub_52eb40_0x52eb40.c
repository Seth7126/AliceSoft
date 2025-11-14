// 函数: sub_52eb40
// 地址: 0x52eb40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcbeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CCombineSurface::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1[3]
struct sealengine::CCombineSurface::VTable** ebp = arg2
int32_t result

if (esi == arg1[4])
label_52eb8d:
    struct sealengine::CCombineSurface::VTable** eax_3 = sub_69adc6(0x28)
    arg2 = eax_3
    int32_t var_4 = 0
    struct sealengine::CCombineSurface::VTable** esi_1
    
    if (eax_3 == 0)
        esi_1 = nullptr
    else
        esi_1 = sub_52df70(eax_3, arg1[1], arg1[2])
    
    int32_t var_4_1 = 0xffffffff
    struct sealengine::CCombineSurface::VTable** var_28_3 = ebp
    var_10 = esi_1
    
    if (sub_52e130(esi_1).b != 0)
        result = arg1[4]
        struct sealengine::CCombineSurface::VTable*** ecx_4 = &var_10
        
        if (&var_10 u< result)
            ecx_4 = arg1[3]
        
        if (&var_10 u>= result || ecx_4 u> &var_10)
            if (result == arg1[5])
                struct sealengine::CCombineSurface::VTable*** var_28_5 = ecx_4
                sub_412f20(&arg1[3])
            
            result = arg1[4]
            
            if (result != 0)
                *result = esi_1
        else
            if (result == arg1[5])
                struct sealengine::CCombineSurface::VTable*** var_28_4 = ecx_4
                sub_412f20(&arg1[3])
            
            int32_t* ecx_6 = arg1[4]
            
            if (ecx_6 != 0)
                *ecx_6 = arg1[3][(&var_10 - ecx_4) s>> 2].vFunc_0
        
        arg1[4] = &arg1[4][1]
        result.b = 1
    else
        if (esi_1 != 0)
            (*esi_1)->vFunc_0(1)
        
        result.b = 0
else
    while (true)
        struct sealengine::CCombineSurface::VTable** var_28_1 = ebp
        
        if (sub_52e130(*esi).b != 0)
            break
        
        esi = &esi[1]
        
        if (esi == arg1[4])
            goto label_52eb8d
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
