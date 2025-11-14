// 函数: sub_6977a0
// 地址: 0x6977a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1a7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CDisplayModeDD::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CDisplayModeDD::VTable** var_10_1 = arg1
*arg1 = &win32only::CDisplayModeDD::`vftable'
int32_t var_4 = 0
int32_t* esi = arg1[1]

if (esi[4].b != 0)
    int32_t* ecx = *esi
    
    if (ecx != 0)
        result = (*(*ecx + 0x4c))(ecx)
    
    if (ecx == 0 || result s>= 0)
        esi[4].b = 0
    else
        result = sub_64b530("DirectDraw")

int32_t* ecx_1 = *esi

if (ecx_1 != 0)
    result = (*(*ecx_1 + 8))(ecx_1)
    *esi = 0

void* esi_1 = arg1[1]

if (esi_1 != 0)
    int32_t eax_5 = *(esi_1 + 4)
    
    if (eax_5 != 0)
        j__free(eax_5)
        *(esi_1 + 4) = 0
        *(esi_1 + 8) = 0
        *(esi_1 + 0xc) = 0
    
    result = j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
