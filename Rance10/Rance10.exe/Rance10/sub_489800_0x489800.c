// 函数: sub_489800
// 地址: 0x489800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &kiwi::CSoundDataWav::`vftable'{for `common::SuicideRefCounter<class ISoundData>'}
sub_489e30(arg1)
void* ecx = arg1[0x13]

if (ecx != 0)
    sub_403160(ecx, arg1[0x15] - ecx, 1)
    arg1[0x13] = 0
    arg1[0x14] = 0
    arg1[0x15] = 0

BOOL hObject = arg1[3]
arg1[2] = &filesystem::CFile::`vftable'

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)
    
    if (hObject != 0)
        arg1[3] = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return hObject
