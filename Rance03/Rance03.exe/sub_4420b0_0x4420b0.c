// 函数: sub_4420b0
// 地址: 0x4420b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6974
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct apeg::CApegDecoder::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &apeg::CApegDecoder::`vftable'
int32_t var_4 = 2
arg1[0x2f] = &apeg::CPictureDecoder::`vftable'
arg1[0x36] = &apeg::CMacroBlockDecoder::`vftable'
`eh vector vbase constructor iterator'(&arg1[0x42], 0x80, 6, sub_4019f0)
int32_t eax_4 = arg1[0x2c]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x2c] = 0
    arg1[0x2d] = 0
    arg1[0x2e] = 0

arg1[5] = &apeg::CApegHeader::`vftable'
int32_t** eax_5 = arg1[0x2a]
sub_4200d0(&arg1[0x2a], &var_10, *eax_5, eax_5)
j__free(arg1[0x2a])
BOOL hObject = arg1[2]
arg1[1] = &filesystem::CFile::`vftable'

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)
    
    if (hObject != 0)
        arg1[2] = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return hObject
