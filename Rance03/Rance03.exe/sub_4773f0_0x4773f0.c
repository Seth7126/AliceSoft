// 函数: sub_4773f0
// 地址: 0x4773f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9fd1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISoundData::kiwi::CSoundDataWav::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISoundData::kiwi::CSoundDataWav::VTable** var_10_1 = arg1
*arg1 = &kiwi::CSoundDataWav::`vftable'{for `ISoundData'}
int32_t var_4 = 2
sub_477a80(arg1)
int32_t eax_3 = arg1[0x13]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x13] = 0
    arg1[0x14] = 0
    arg1[0x15] = 0

arg1[0xa] = &kiwi::CWaveFormat::`vftable'{for `IWaveFormat'}
BOOL hObject = arg1[3]
arg1[2] = &filesystem::CFile::`vftable'

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)
    
    if (hObject != 0)
        arg1[3] = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return hObject
