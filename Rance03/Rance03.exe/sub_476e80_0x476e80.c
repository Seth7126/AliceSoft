// 函数: sub_476e80
// 地址: 0x476e80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9f28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = sub_470650(arg1 + 0x38, arg2)

if (edi == 0)
    int32_t* ecx_1 = *(arg1 + 8)
    
    if (ecx_1 != 0)
        int32_t* edx_1
        
        if (arg2[5] u< 0x10)
            edx_1 = arg2
        else
            edx_1 = *arg2
        
        edi = (*(*ecx_1 + 8))(edx_1)
    
    if (ecx_1 == 0 || edi == 0)
        void** eax_6 = sub_470650(arg1 + 0x1c, arg2)
        edi = eax_6
        
        if (edi == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_6

struct IWaveFormat::kiwi::CWaveFormat::VTable* const var_30 =
    &kiwi::CWaveFormat::`vftable'{for `IWaveFormat'}
int32_t var_2c = 1
int32_t var_28
__builtin_memset(&var_28, 0, 0x18)
int32_t var_4 = 0
int32_t eax_8 = (*(*edi + 0x14))(&var_30, eax_2)
char* eax_9 = (*(*edi + 0x18))()
struct ISoundData::decodeogg::CSoundDataOgg::VTable** eax_10 = sub_475dc0(eax_9, eax_8, eax_9)
uint32_t esi_2

if (eax_10 != 0)
    esi_2 = sub_474240(&var_30, (*eax_10)->vFunc_10())
    (*eax_10)->vFunc_1()
    (*(*edi + 4))()
else
    (*(*edi + 4))()
    esi_2 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return esi_2
