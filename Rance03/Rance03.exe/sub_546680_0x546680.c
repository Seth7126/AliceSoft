// 函数: sub_546680
// 地址: 0x546680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b896b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x24) == 0)
    struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** eax_4 = sub_69adc6(0x88)
    struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** var_10_1 = eax_4
    int32_t var_4 = 0
    struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** esi_1
    
    if (eax_4 == 0)
        esi_1 = nullptr
    else
        esi_1 = sub_529980(eax_4)
    
    int32_t var_4_1 = 0xffffffff
    void* edi_1 = arg1 + 0x2c
    esi_1[0x21] = *(arg1 + 0x68)
    int32_t ebp_1 = *(arg1 + 0x44)
    sub_52a120(esi_1)
    int32_t* eax_7
    int32_t ecx_3
    int32_t edx_1
    eax_7, ecx_3, edx_1 = sub_529dc0(esi_1, edi_1, ebp_1)
    
    if (eax_7.b != 0)
        if (&esi_1[0x16] != edi_1)
            sub_401ff0(&esi_1[0x16], edi_1, 0, 0xffffffff)
        
        esi_1[0x1c] = ebp_1
        eax_7.b = 1
        *(arg1 + 0x24) = esi_1
        *(arg1 + 0x28) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    if (*(edi_1 + 0x14) u>= 0x10)
        edi_1 = *edi_1
    
    sub_59f4e0(eax_7, edx_1, ecx_3, 0x6e3b24, edi_1)
    (*esi_1)->vFunc_4(1)

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
