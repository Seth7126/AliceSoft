// 函数: sub_52e130
// 地址: 0x52e130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3963
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_4
int32_t esi = arg_4
void** i

if (*(arg1 + 0x1c) == *(arg1 + 0x20))
label_52e197:
    
    for (i = *(arg1 + 0x1c); i != *(arg1 + 0x20); i = &i[1])
        if (*(*i + 4) == esi)
            goto label_52e172
    
    struct sealengine::CRect::VTable* const var_20 = &sealengine::CRect::`vftable'
    int128_t var_1c_1 = zx.o(0)
    int32_t var_4 = 0
    
    if (sub_52e2f0(arg1, (*(*esi + 0x10))((*(*esi + 0x14))(&var_20, eax_2))).b != 0)
        if (*(arg1 + 0x1c) == *(arg1 + 0x20))
            *(arg1 + 0xc) = (*(*esi + 0x24))()
            *(arg1 + 0xd) = (*(*esi + 0x28))()
        
        struct sealengine::CCombineSurface::CRegistedSurface::VTable** eax_19 = sub_69adc6(0x1c)
        arg_4 = eax_19
        var_4.b = 1
        struct sealengine::CCombineSurface::CRegistedSurface::VTable** eax_20
        
        if (eax_19 == 0)
            eax_20 = nullptr
        else
            eax_20 = sub_52de60(eax_19, esi, &var_20)
        
        var_4.b = 0
        arg_4 = eax_20
        sub_412de0(arg1 + 0x1c, &arg_4)
        int32_t eax_21
        eax_21.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_21
else
    i = (*(*esi + 0x24))(eax_2)
    
    if (*(arg1 + 0xc) == i.b)
        i = (*(*esi + 0x28))()
        
        if (*(arg1 + 0xd) == i.b)
            goto label_52e197

label_52e172:
i.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return i
